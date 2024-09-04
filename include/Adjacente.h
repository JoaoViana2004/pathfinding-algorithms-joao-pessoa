#ifndef ADJACENTE_H
#define ADJACENTE_H

#include "Bairro.h"
class Bairro;

class Adjacente
{
    Bairro *bairro;
    float dist;

public:
    Adjacente(Bairro *b, float d);

    Bairro *Get_Bairro() const;
    float Get_Dist() const;
};

#endif
