#ifndef PILHA_H
#define PILHA_H

#include <vector>
#include "Bairro.h"

class Pilha
{
    int topo = -1;
    int tamanho = 0;
    std::vector<Bairro *> Bairros;

public:
    Pilha(int t);

    void Empilhar(Bairro *b);
    Bairro *Desempilhar();
    Bairro *Get_Topo() const;
    bool Pilha_Cheia() const;
    bool Pilha_Vazia() const;
    void Print_Pilha() const;
};

#endif
