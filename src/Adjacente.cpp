#include "Adjacente.h"

Adjacente::Adjacente(Bairro *b, float d)
    : bairro(b), dist(d)
{
}

Bairro *Adjacente::Get_Bairro() const
{
    return bairro;
}

float Adjacente::Get_Dist() const
{
    return dist;
}
