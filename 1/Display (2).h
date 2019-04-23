#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED
#include <GL/glut.h>
#include "FireGas (1).h"
#include "ColdGas (1).h"
#include "Energy1 (1).h"

extern FireGas a[41];
extern ColdGas b[41];
extern Energy E[31];


void display(){

    glClear(GL_COLOR_BUFFER_BIT);

    for (int i = 0; i <= 40; i++)
    {
        a[i].draw();


        b[i].draw();
    }
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(600, 0);
    glVertex2f(600, 800 );

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(700, 100);
    glVertex2f(1500, 100 );

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2f(700, 100);
    glVertex2f(700, 700 );


 for ( int j = 0; j<= 29; j++)
    {

     glColor3f(0.0, 0.0, 255);
    glBegin(GL_LINES);
    glVertex2f((700 + j*20), (E[j].f + 100));
    glVertex2f((700 + (j+1)*20), (E[j].f + 100) );
    glEnd();

    }
for ( int j = 0; j<= 28; j++)
    {

     glColor3f(0.0, 0.0, 255);
    glBegin(GL_LINES);
    glVertex2f((700 + (j+1)*20), (E[j].f + 100));
    glVertex2f((700 + (j+1)*20), (E[j+1].f + 100) );
    glEnd();

    }



    glFlush();
    glutSwapBuffers();
}

#endif // DISPLAY_H_INCLUDED
