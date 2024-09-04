#ifndef BUSCA_LARGURA_H
#define BUSCA_LARGURA_H

#include "Fila.h"
#include "Bairro.h"

class Busca_Largura
{
    Fila fila;

public:
    Busca_Largura(int t);

    void Busca(Bairro *inicio, Bairro *final);
};

#endif
