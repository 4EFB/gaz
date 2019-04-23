#ifndef MOLEKYLA_H_INCLUDED
#define MOLEKYLA_H_INCLUDED
#include <cstdlib>

extern int N;
extern int K;
class Molekyla
{
public:
    float x, y,Vx,Vy;
    Molekyla()
    {

    }
    virtual void Add() = 0;

    virtual void draw() = 0;



    float trigger (float r, float V, float t,float po )
    {
         r = r + V*t;
        if ((r >= po) || (r<= 0))
        {
            V = - V;

        }
        return V;
    }

    float izmx (float r, float V, float t, float Xm, int h )
    {
        r = r + V*t;
        if (r >= Xm)
        {
            h = r/Xm;
            r = Xm - (r - h*Xm);
            V = -V;

        }

        return r;
    }

    float izmy (float r, float V, float t, float Ym, int h  )
    {
        r = r + V*t;
        if (r >= Ym)
        {
            h = r/Ym;
            r = Ym - (r - h*Ym);


        }

        return r;
    }

};


#endif // MOLEKYLA_H_INCLUDED
