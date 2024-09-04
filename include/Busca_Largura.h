#ifndef BUSCA_LARGURA_H
#define BUSCA_LARGURA_H

#include "Fila.h"
#include "Bairro.h"

class Busca_Largura
{
    Fila fila;
    Fila f_reserva;
    Bairro *inicio;
    Bairro *final;

public:
    Busca_Largura(int t, Bairro *i, Bairro *f);

    Fila *Busca();
};

#endif
