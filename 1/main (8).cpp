#include <iostream>
#include <cstdlib>
#include <GL/glut.h>
#include <ctime>
#include <math.h>

#include "Temp (1).h"
#include "Display (2).h"
#include "Perem (1).h"
#include "Molekyla (1).h"
#include "FireGas (1).h"
#include "ColdGas (1).h"
#include "Energy1 (1).h"
#include "time (1).h"

using namespace std;

int N = 77;
int K = 40;
int shag = 20;
int wid = shag * N;
int hei = shag * K;
int dir = 0;
int tim = 250;
int score = 0;
double q = 0;
int p = 0;
int f = 0;



FireGas a[41];
 ColdGas b[41];
 Energy E[31];


int main(int argc, char **argv)
{

	srand(time(0));


	for (int i = 0; i <=40; i++)
    {
        a[i].Add();


        b[i].Add();
	}



    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(wid, hei);
    glutCreateWindow("GAS");
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, wid, 0, hei);


    glutDisplayFunc(display);


    glutTimerFunc(tim, timer, 10);

    glutMainLoop();

    return 0;
}




