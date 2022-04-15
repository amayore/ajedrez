#include "Tablero.h"
#include "freeglut.h"
#include <math.h>

/***************ESTE ES EL ARCHIVO MUNDO DE LA PRÁCTICA 4*****************/
void Tablero::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			0.0, 0, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo
	//dibujo del suelo
	glDisable(GL_LIGHTING);
	glBegin(GL_POLYGON);
		glColor3ub(255,0,0);
		glVertex3f(-5.0f,0,-5.0f);
		glVertex3f(-5.0f,0,5.0f);
		glColor3ub(255,255,0);
		glVertex3f(5.0f,0,5.0f);	
		glVertex3f(5.0f,0,-5.0f);
	glEnd();
	glEnable(GL_LIGHTING);
}

void Tablero::mueve()
{

}

void Tablero::inicializa()
{
	x_ojo=0;
	y_ojo=10;
	z_ojo=20;
}

void Tablero::tecla(unsigned char key)
{

}
