#ifndef TEMP_H_INCLUDED
#define TEMP_H_INCLUDED
#include "Molekyla (1).h"
#include "FireGas (1).h"
#include "ColdGas (1).h"
#include "Energy1 (1).h"

extern FireGas a[41];
extern ColdGas b[41];
extern Energy E[31];


void Temperatyra()
{
     int i, j;
    float  t = 1, Xm =30 , Ym =40, Vcp[31] = {0}, Too, S[31] = {0};
    int h;
    int mect;
    for ( j = 0; j<= 0; j++)
    {


        for ( i = 0; i<=40; i++)
        {


            if ((a[i].x <= j + 1 ) && (a[i].x >= j ))
            {
                Vcp[j] = a[i].Vx*a[i].Vx + a[i].Vy*a[i].Vy + Vcp[j];
                S[j] = S[j] + 1;

            }
        }
    }
    for ( j = 1; j<= 29; j++)
    {


        for ( i = 0; i<=40; i++)
        {


            if ((a[i].x <= j + 1 ) && (a[i].x > j ))
            {
                Vcp[j] = a[i].Vx*a[i].Vx + a[i].Vy*a[i].Vy + Vcp[j];
                S[j] = S[j] + 1;

            }
        }
    }
     for ( j = 1; j<= 29; j++)
    {
        for ( i = 0; i<=40; i++)
        {


            if ((b[i].x <= j+1 ) && (b[i].x > j))
            {
                Vcp[j] = b[i].Vx*b[i].Vx + b[i].Vy*b[i].Vy + Vcp[j];
                S[j] = S[j] + 1;

            }
        }
    }
    for ( j = 0; j<= 0; j++)
    {
        for ( i = 0; i<=40; i++)
        {


            if ((b[i].x <= j+1 ) && (b[i].x >= j))
            {
                Vcp[j] = b[i].Vx*b[i].Vx + b[i].Vy*b[i].Vy + Vcp[j];
                S[j] = S[j] + 1;

            }
        }
    }
    for ( j = 0; j<= 29; j++)
    {
        Vcp[j] = Vcp[j] / S[j];
    }

     for ( j = 0; j<= 29; j++)
    {
        if (Vcp[j] > 0)
        {


            E[j].f = E[j].kin(Vcp[j], Too);
        }
        if (Vcp[j] == 0)
        {


            E[j].f = E[j].kin(0, Too);
        }

    }
    for ( j = 0; j<=29; j++)
    {
        Vcp[j] = 0;
        S[j] = 0;
    }


}


#endif // TEMP_H_INCLUDED
