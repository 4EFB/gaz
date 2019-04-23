#ifndef ENERGY1_H_INCLUDED
#define ENERGY1_H_INCLUDED

class Energy
{
public:
    float f;
    float kin (float V, float To)
    {
        To = 300*V;
        return To;
    }

};


#endif // ENERGY1_H_INCLUDED
