#ifndef FIREGAS_H_INCLUDED
#define FIREGAS_H_INCLUDED

#include <GL/glut.h>
#include "Molekyla (1).h"

extern int N;
extern int K;
extern int shag;

class FireGas: public Molekyla
{
    public:
     void Add()
    {
        x = rand() % (30/2) + (30/2);
        y = rand() % 40;
        int N = rand() % 2;
        int G = rand() % 2;
        if ( N == 0)
        {

            Vx = ((rand() % 3)+2) * 0.2 * (-1);

        }
        if ( G == 0)
        {

            Vy = ((rand() % 3)+2) * 0.2*(-1);

        }
        if ( N == 1)
        {

            Vx = ((rand() % 3)+2) * 0.2 ;

        }
        if ( G == 1)
        {

            Vy = ((rand() % 3)+2) * 0.2;

        }
    }
    void draw()
    {
        glColor3ub(255,0,0);
    glBegin( GL_TRIANGLE_FAN );
   glVertex2f( x*shag, y*shag );
   int t = 50;
   float R = 7;
    for(int i = 0; i <= t; i++ ) {
    float a = (float)i / (float)t * 3.1415f * 2.0f;
    glVertex2f( x*shag-cos( a ) * R, y*shag-sin( a ) * R );
}
glEnd();
}

};


#endif // FIREGAS_H_INCLUDED
