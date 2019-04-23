#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <GL/glut.h>
#include "Temp (1).h"
#include "Display (2).h"
#include "Perem (1).h"
extern int tim ;
void timer(int = 0){


    Temperatyra();
    display();
    peremechenie();
    glutTimerFunc(tim, timer, 0);
}


#endif // TIME_H_INCLUDED
