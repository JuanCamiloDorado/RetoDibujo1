#include "Malla.h"

void Malla::DibujarTriangulo(float x, float y, float z){
	glPushMatrix();

	glTranslatef(x, y, z);
	glBegin(GL_TRIANGLES);
	glVertex3f(0.7, 0, 0);
	glVertex3f(0, 0.7, 0);
	glVertex3f(-0.7, 0, 0);
	glEnd();

	glPopMatrix();
}

void Malla::DibujarTetera(float x, float y, float z){
	glPushMatrix();

	glTranslatef(x, y, z);
	glutSolidTeapot(0.5);

	glPopMatrix();
}

void Malla::DibujarCuboIz(float x, float y, float z){
	glPushMatrix();

	glTranslatef(x, y, z);
	glRotated(45, 5, -8, 20);
	glutSolidCube(0.7);

	glPopMatrix();
}

void Malla::DibujarCuboDer(float x, float y, float z){
	glPushMatrix();

	glTranslatef(x, y, z);
	glRotated(45, 300, -350, 260);
	glutSolidCube(0.7);

	glPopMatrix();
}