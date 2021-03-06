#ifndef _MODELMESH_H
#define _MODELMESH_H

struct Quaternion;
struct LinearTransformationMatrix;
struct ModelMeshVertex;
struct ModelMeshBone;
struct ModelMeshVertexAttachment;
struct ModelMeshMaterialInfo;
struct ModelMeshData;
struct ModelMaterialFile;
struct ModelMaterialData;
struct ModelAnimationData;
struct ModelDataStruct;

enum ModelFileFormat {
	MODEL_FILE_FORMAT_FBX_ASCII,
	MODEL_FILE_FORMAT_FBX_BINARY,
	MODEL_FILE_FORMAT_AUTOCAD,
	MODEL_FILE_FORMAT_COLLADA,
	MODEL_FILE_FORMAT_WAVEFRONT,
	MODEL_FILE_FORMAT_3DS_MAX
};

/***********************************************
 *                 FILE FORMAT                 *
 ***********************************************
 *             Mesh (File Type 43)             *
 ***********************************************
 
 (uint32) Number of Material Infos
 (ModelMeshMaterialInfo) Material Infos - Size 0x2C
 (unknown) 0
 (unknown) 0
 (unknown) 0
 (unknown) 0
 (uint32) Number of Bones
 (ModelMeshBone) Bones - Size 0x40
 (uint32) Number of Unknown ID (Same as Bones)
 (uint32List) Unknown ID
 (uint32) One of the Unknown ID (or 0 if none)
 (bytex4) Usually 0 1 1 1 or 0 1 0 0 (weapons)
 (uint32) Size of Vertice List
 (uint16List) Vertice List
 (uint32) Number of Vertex Attachments (same as Vertice when Bones are present)
 (ModelMeshVertexAttachment) Vertex Attachments - Size 0x20
 (uint32) Usually 0x8B or 0x9B (kuja burned)
 (uint32) Number of Vertice
 (???) Vertice Format Info - Usually 8
 (???) Vertice Format Info - Usually 0  0 0 3
 (???) Vertice Format Info - Usually 0 12 0 3
 (???) Vertice Format Info - Usually 0
 (???) Vertice Format Info - Usually 0 24 0 2
 (???) Vertice Format Info - Usually 0
 (???) Vertice Format Info - Usually 0
 (???) Vertice Format Info - Usually 0
 (???) Vertice Format Info - Usually 0 32 0 4
 (uint32) Size of Vertex Datas
 (ModelMeshVertex) Vertex Datas
 (unknown) 0 (x41)
 (floats) Center X, Center Y, Center Z
 (floats) Radius X, Radius Y, Radius Z
 (unknown) Usually 1 (when bones are present) or 0
 (unknown) 0
 (unknown) 0

 ***********************************************
 *          Animation (File Type 74)           *
 ***********************************************
*/

#include <vector>
#include "File_IOCommon.h"
using namespace std;

struct Quaternion {
public:
	double x;
	double y;
	double z;
	double w;

	double GetRoll();
	double GetPitch();
	double GetYaw();

	void SetValue(double newx, double newy, double newz, double neww);
	void Apply(double& posx, double& posy, double& posz);

	void Read(fstream& f);
	void Write(fstream& f);
	static Quaternion Product(Quaternion& lfactor, Quaternion& rfactor);
	static LinearTransformationMatrix Product(LinearTransformationMatrix lfactor, Quaternion& rfactor);
	static LinearTransformationMatrix Product(Quaternion& lfactor, LinearTransformationMatrix rfactor);
	static LinearTransformationMatrix Product(LinearTransformationMatrix lfactor, LinearTransformationMatrix rfactor);
	static Quaternion EulerToQuaternion(double roll, double pitch, double yaw);
	static void QuaternionToEuler(Quaternion& q, double& roll, double& pitch, double& yaw);
	static LinearTransformationMatrix QuaternionToMatrix(Quaternion& q);

private:
	bool apply_matrix_updated;
	double apply_matrix[9];

	void UpdateMatrixIfNecessary();
};

struct LinearTransformationMatrix {
	double value[4][4];
};

#include "GameObject.h"

struct ModelMeshVertex {
	// Position
	float x;
	float y;
	float z;
	// Normal
	float nx;
	float ny;
	float nz;
	// Texture UV
	float u;
	float v;
	// Tangent
	float tx;
	float ty;
	float tz;
	// Unknown
	float unkf; // Usually -1.0
	float unkuv1; // Looks like UV
	float unkuv2;
};

struct ModelMeshBone {
	LinearTransformationMatrix transform_matrix;
	string name;
	string scoped_name;
};

struct ModelMeshVertexAttachment {
	float bone_factor[4]; // factor is between 0.0 and 1.0
	uint32_t bone_id[4]; // bone_id==0 if related factor==0.0
};

struct ModelMeshMaterialInfo {
	uint32_t vert_list_start;
	uint32_t vert_list_amount;
	uint32_t unk0; // mostly 0
	uint32_t vert_start;
	uint32_t vert_amount;
	float center_x;
	float center_y;
	float center_z;
	float radius_x;
	float radius_y;
	float radius_z;
};

struct ModelMeshData {
	uint32_t material_info_amount;
	uint32_t bone_amount;
	uint32_t bone_unk_amount;
	uint32_t vertice_amount;
	uint32_t vertice_attachment_amount;
	uint32_t vertex_list_amount;
	vector<ModelMeshMaterialInfo> mat_info;
	vector<ModelMeshBone> bone;
	vector<uint32_t> bone_unk_list;
	vector<ModelMeshVertexAttachment> vert_attachment;
	vector<ModelMeshVertex> vert;
	vector<uint16_t> vert_list;
	
	uint32_t bone_unk_main;
	uint8_t unk_flag1;
	uint8_t unk_flag2;
	uint8_t unk_flag3;
	uint8_t unk_flag4;
	
	uint32_t vert_format0;
	uint32_t vert_format1;
	uint32_t vert_format2;
	uint32_t vert_format3;
	uint32_t vert_format4;
	uint32_t vert_format5;
	uint32_t vert_format6;
	uint32_t vert_format7;
	uint32_t vert_format8;
	uint32_t vert_format9;
	uint32_t vert_datasize;
	
	// uint32_t zero[41]
	float center_x;
	float center_y;
	float center_z;
	float radius_x;
	float radius_y;
	float radius_z;
	uint32_t unk_num1;
	uint32_t unk_num2;
	uint32_t unk_num3;

	string name;
	string scoped_name;
	
	void Read(fstream& f);
	// Deprecated (bone data loss) ; use ModelDataStruct::Export
	void Export(fstream& output, const char* objname, const char* mtlbasename, bool firstobject = true);
};

struct ModelMaterialFile {
	uint32_t unk1;
	uint64_t file_info = 0;
	float u = 0.0;
	float v = 0.0;
	uint32_t unk2;
	uint32_t unk3;

	string file_name = "";
};

struct ModelMaterialData {
	ModelMaterialFile bumpmap;
	ModelMaterialFile detailalbedomap;
	ModelMaterialFile detailmask;
	ModelMaterialFile detailnormalmap;
	ModelMaterialFile emissionmap;
	ModelMaterialFile maintex;
	ModelMaterialFile metallicglossmap;
	ModelMaterialFile occlusionmap;
	ModelMaterialFile parallaxmap;
	uint32_t parallaxmap_unk4;
	float bumpscale_value = 1.0;
	float cutoff_value;
	float detailnormalmapscale_value = 1.0;
	float dstblend_value = 0.0;
	float glossiness_value = 0.0;
	float metallic_value = 0.0;
	float mode_value = 0.0;
	float occlusionstrength_value = 1.0;
	float parallax_value = 0.02f;
	float srcblend_value = 1.0;
	float uvsec_value = 0.0;
	float zwrite_factor = 1.0;
	uint32_t zwrite_mode;
	float color_red = 1.0;
	float color_green = 1.0;
	float color_blue = 1.0;
	float color_alpha = 1.0;
	float emissioncolor_red = 0.0;
	float emissioncolor_green = 0.0;
	float emissioncolor_blue = 0.0;
	float emissioncolor_alpha = 1.0;
	
	string name;
    
	void Read(fstream& f, UnityArchiveMetaData& metadata);
	// Deprecated ; use ModelDataStruct::Export
	void Export(fstream& output, const char* mtlname, const char* maintexname);
};

struct ModelAnimationTransformW {
	float time;
	Quaternion rot;
	Quaternion rot1;
	Quaternion rot2;
};

struct ModelAnimationTransformT {
	float time;
	float transx;
	float transy;
	float transz;
	float trans1x;
	float trans1y;
	float trans1z;
	float trans2x;
	float trans2y;
	float trans2z;
};

struct ModelAnimationTransformS {
	float time;
	float scalex;
	float scaley;
	float scalez;
	float scale1x;
	float scale1y;
	float scale1z;
	float scale2x;
	float scale2y;
	float scale2z;
};

template<typename Transf>
struct ModelAnimationLocal {
	uint32_t transform_amount;
	vector<Transf> transform;
	uint32_t unkint1; // mostly 2
	uint32_t unkint2; // mostly 2
	uint32_t object_name_len; // 0-1
	string object_name;
};

struct ModelAnimationData {
	uint32_t name_len;
	string name;
	uint16_t num_unk1; // mostly 1 (tested)
	uint16_t num_unk2; // mostly 1 (tested)
	uint32_t localw_amount;
	vector< ModelAnimationLocal<ModelAnimationTransformW> > localw;
	uint32_t num_unk3; // mostly 0 (tested)
	uint32_t localt_amount;
	vector< ModelAnimationLocal<ModelAnimationTransformT> > localt;
	uint32_t locals_amount;
	vector< ModelAnimationLocal<ModelAnimationTransformS> > locals;
	uint32_t num_unk4; // mostly 0
	uint32_t num_unk5; // mostly 0
	float float_unk; // mostly 30.0
	uint32_t num_unk6; // mostly 0
	// From now, it's mostly always the same except for the first 6*float (coords)
	// 7 structs of 6*float+0x20+5*float + extraifnonzero = 0x4C + extraifnonzero ?
	// 0x14.........0x34..............0x07.....
	// 3 structs of 0x1C+5*float = 0x4C ?
	// 0x4C of unk
	uint32_t num_unk7; // mostly 0x9B = 155
	vector<int32_t> unk7; // mostly -1
	// 0x1C of unk ; mostly 0 0 1 0 0 0 0
    
	uint32_t anim_id;

	void Read(fstream& f, GameObjectHierarchy* gohier = NULL);
};

struct ModelDataStruct {
    vector<ModelMeshData> mesh;
    vector< vector<ModelMaterialData> > material;
	vector<ModelAnimationData> animation;
	GameObjectHierarchy* hierarchy;

	string description;
    
	// In Steam's assets, the coordinate system is:
	//  1st coord: left to right
	//  2nd coord: up to bottom
	//  3rd coord: front to back
	static void ReadCoordinates(fstream& f, float& x, float& y, float& z, bool swapsign = true);
	static void WriteCoordinates(fstream& f, float x, float y, float z, bool swapsign = true);

    bool Read(fstream& f, GameObjectHierarchy* gohier);
	int Export(const char* outputname, int format);
};

#endif
