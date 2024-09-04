#ifndef BUSCA_PROFUNDIDADE_H
#define BUSCA_PROFUNDIDADE_H

#include "Pilha.h"
#include "Bairro.h"

class Busca_Profundidade
{
    Pilha pilha;
    Bairro *inicio;
    Bairro *final;
    bool achou;

public:
    Busca_Profundidade(int tamanho, Bairro *i, Bairro *f);

    Pilha Busca();
};

#endif
