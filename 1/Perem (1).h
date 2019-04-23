#ifndef PEREM_H_INCLUDED
#define PEREM_H_INCLUDED
#include "FireGas (1).h"
#include "ColdGas (1).h"

void peremechenie()
{
    int i;
    float  t = 1, Xm =30 , Ym =40,  Too;
    int h;

    for ( i = 0; i <=40; i++)
        {

            a[i].x = a[i].izmx ( a[i].x, a[i].Vx, t, Xm, h);
            a[i].y = a[i].izmy (a[i].y, a[i].Vy, t, Ym, h);
            a[i].Vx = a[i].trigger ( a[i].x, a[i].Vx, t, Xm);
           a[i].Vy = a[i].trigger ( a[i].y, a[i].Vy, t, Ym);




           b[i].x = b[i].izmx ( b[i].x, b[i].Vx, t, Xm, h);
            b[i].y = b[i].izmy (b[i].y, b[i].Vy, t, Ym, h);
            b[i].Vx = b[i].trigger ( b[i].x, b[i].Vx, t, Xm);
           b[i].Vy = b[i].trigger ( b[i].y, b[i].Vy, t, Ym);

        }

}

#endif // PEREM_H_INCLUDED
