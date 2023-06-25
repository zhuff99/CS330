#pragma once

#include "Mesh.h"

using namespace std;

class ObjectBuilder
{
public:
	static void Cube(GLMesh& mesh);
	static void ConeCalculation(GLMesh& mesh);
	static void Cylinder(GLMesh& mesh);
	static void Plane(GLMesh& mesh);
	static void Circle(GLMesh& mesh);
	static void MoveObject(GLMesh& mesh);
};


