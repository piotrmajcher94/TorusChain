#include <GL/glut.h>
#include <iostream>
#include <math.h>

typedef float point3[3];

typedef float point2[2];

/*Klasa reprezentująca torus w przestrzeni 3D*/
class Torus
{
private:
	point3** torus;
	GLfloat r;
	GLfloat R;
	GLint n;
 
 public:
 	Torus(GLint N, GLfloat r, GLfloat R);
 	~Torus();

 	GLfloat getX(GLint u, GLint v);
 	GLfloat getY(GLint u, GLint v);
 	GLfloat getZ(GLint u, GLint v);

 	GLint getN();
 	GLfloat getOuterR();
 	GLfloat getInnerR();
};