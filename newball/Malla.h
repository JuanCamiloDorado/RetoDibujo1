#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Malla
{
public:
	Malla() {};
	void DibujarMalla(float x, float y, float z);
	void DibujarTriangulo(float x, float y, float z);
	void DibujarCuboIz(float x, float y, float z);
	void DibujarCuboDer(float x, float y, float z);
	void DibujarTetera(float x, float y, float z);
	~Malla() {};
};

