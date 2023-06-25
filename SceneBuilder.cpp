
//This class takes advantage of GLmesh in glm to create mesh object for each object
//these are then calculated by the objectbuilder class and then rendered through URender 
//This consists of a laptop, pencil, phone, and a can of Copenhagen wintergreen which was taken by me
//Image were imported and cropped in photo editor



#include "SceneBuilder.h"
#include "ObjectBuilder.h"
#include "Mesh.h"

using namespace std;


void ShapeBuilder::UBuildScene(vector<GLMesh>& scene)
{
	
	// DESK
	GLMesh desk;
	desk.p = {
		1.0f, 1.0f, 1.0f, 1.0f,				// color r, g, b a
		14.0f, 2.0f, 8.0f,					// scale x, y, z
		0.0f, 1.0f, 0.0f, 0.0f,				// x rotation
		45.0f, 0.0f, 1.0f, 0.0f,				// y rotation
		0.0f, 0.0f, 0.0f, 1.0f,				// z rotation
		1.0f, 0.0f, 0.0f,					// translate x, y, z
		2.0f, 2.0f
	};
	desk.texFilename = "textures\\planks.png";
	ObjectBuilder::Plane(desk);
	scene.push_back(desk);
	
	//--------------------------------------------------------------------------------------------------------------------------------------------

	// Pencil body
	GLMesh pencil_body;
	pencil_body.p = {
		1.0f, 1.0f, 1.0f, 1.0f,		//color
		0.25f, 1.0f, 0.25f,			//scale


		90.0f,	1.0f,	0.0f,	0.0f,		//rotation x
		180.0f,	0.0f,	1.0f,	0.0f,		//rotation y
		132.5f,	0.0f,	0.0f,	1.0f,		//rotation z

		6.0f, 0.0f, -7.0f,			//translate
		1.0f, 1.0f
	};
	pencil_body.height = 4.0f;
	pencil_body.radius = 0.3f;
	pencil_body.number_of_sides = 128.0f;
	pencil_body.texFilename = "textures\\pencil.png";
	ObjectBuilder::Cylinder(pencil_body);
	scene.push_back(pencil_body);

	// Pencil Eraser

	GLMesh Pencil_Eraser;
	Pencil_Eraser.p = {
		1.0f, 1.0f, 1.0f, 1.0f,
		0.25f, 1.0f, 0.25f,

		90.0f,	1.0f,	0.0f,	0.0f,		//rotation x
		180.0f,	0.0f,	1.0f,	0.0f,		//rotation y
		132.5f,	0.0f,	0.0f,	1.0f,		//rotation z

		6.0f, 0.0f, -7.0f,			//translate
		1.0f, 1.0f
	};

	Pencil_Eraser.height = 0.15f;	Pencil_Eraser.radius = 0.32f;	Pencil_Eraser.number_of_sides = 128.0f;
	Pencil_Eraser.texFilename = "textures\\pink.png";
	ObjectBuilder::Cylinder(Pencil_Eraser);
	scene.push_back(Pencil_Eraser);


	// Pencil Tip
	GLMesh Pencil_Tip;
	Pencil_Tip.p = {
		1.0f, 1.0f, 1.0f, 1.0f,
		0.25f, 0.5f, 0.25f,

		90.0f,	1.0f,	0.0f,	0.0f,		//rotation x
		0.0f,	0.0f,	1.0f,	0.0f,		//rotation y
		132.5f,	0.0f,	0.0f,	1.0f,		//rotation z

		3.25f, 0.25f, -9.85f,			//translate
		1.0f, 1.0f
	};
	Pencil_Tip.height = 1.0f;	Pencil_Tip.radius = 0.27f;	Pencil_Tip.number_of_sides = 128.0f;
	Pencil_Tip.texFilename = "textures\\pencil_tip.png";
	ObjectBuilder::ConeCalculation(Pencil_Tip);
	scene.push_back(Pencil_Tip);

	//--------------------------------------------------------------------------------------------------------------------------------------


	// LAPTOP
	GLMesh Keyboard_Laptop;
	Keyboard_Laptop.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		8.0f,	0.2f,	6.0f,

		0.0f,	1.0f,	0.0f,	0.0f,
		225.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,

		0.0f,	0.0f,	0.0f,
		1.0f,	1.0f
	};
	Keyboard_Laptop.texFilename = "textures\\keyboard.png";
	ObjectBuilder::Cube(Keyboard_Laptop);
	scene.push_back(Keyboard_Laptop);


	// SCREEN
	GLMesh screen;
	screen.p = {
		1.0f,	1.0f,	1.0f,	1.0f,    //color
		8.0f,	0.05f,	6.0f,				//scale

		90.0f,	1.0f,	0.0f,	0.0f,		//rotation x
		180.0f,	0.0f,	1.0f,	0.0f,		//rotation y
		135.0f,	0.0f,	0.0f,	1.0f,		//rotation z

		2.15f,	3.0f,	2.15f,				//translate
		1.0f,	1.0f
	};
	screen.texFilename = "textures\\black.png";
	ObjectBuilder::Cube(screen);
	scene.push_back(screen);

	//---------------------------------------------------------------------------------------------------------------------------------------

	// Cell Phone
	GLMesh phone;
	phone.p = {
		1.0f,	1.0f,	1.0f,	1.0f, //color
		3.0f,	0.1f,	1.0f,			//scale x, y, z 
		0.0f,	1.0f,	0.0f,	0.0f,	//rotations x axis
		135.0f,	0.0f,	1.0f,	0.0f,	//rotation y 
		0.0f,	0.0f,	0.0f,	1.0f,	//rotation z
		3.0f,	0.0f,	-5.0f,			//translate
		1.0f,	1.0f
	};
	phone.texFilename = "textures\\iphone.png";
	ObjectBuilder::Cube(phone);
	scene.push_back(phone);


	//---------------------------------------------------------------------------------------------------------------------------------------

	//Copenhagen can body
	GLMesh can;
	can.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		2.0f,	2.0f,	2.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		-90.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-4.0f,	0.0f,	3.0f,
		1.0f,	1.0f
	};
	can.height = 0.15f;	can.radius = 0.32f;	can.number_of_sides = 128.0f;
	can.texFilename = "textures\\copeSide.png";
	ObjectBuilder::Cylinder(can);
	scene.push_back(can);

	// top of can
	GLMesh cope;
	cope.p = {
		1.0f,	1.0f,	1.0f,	1.0f,
		2.0f,	2.0f,	2.0f,
		0.0f,	1.0f,	0.0f,	0.0f,
		180.0f,	0.0f,	1.0f,	0.0f,
		0.0f,	0.0f,	0.0f,	1.0f,
		-4.0f,	0.3005f,	5.0f,
		1.0f,	1.0f
	};
	cope.radius = 0.32f;
	cope.number_of_sides = 144.0f;
	cope.texFilename = "textures\\cope.png";
	ObjectBuilder::Circle(cope);
	scene.push_back(cope);

}

