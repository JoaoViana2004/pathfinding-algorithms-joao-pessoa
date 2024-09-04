#ifndef BUSCA_PROFUNDIDADE_H
#define BUSCA_PROFUNDIDADE_H

#include "Pilha.h"
#include "Bairro.h"

class Busca_Profundidade
{
    Pilha pilha;

public:
    Busca_Profundidade(int tamanho);

    void Busca(Bairro *b, Bairro *final);
};

#endif
