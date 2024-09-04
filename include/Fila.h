#ifndef FILA_H
#define FILA_H

#include <vector>
#include "Bairro.h"

class Fila
{
    int num_elementos = 0;
    int tamanho = 0;
    int inicio = 0;
    int fim = -1;
    std::vector<Bairro *> Bairros;

public:
    Fila(int t);

    void Enfileirar(Bairro *b);
    Bairro *Desenfileirar();
    bool Fila_Vazia();
    Bairro *Primeiro_Fila();
};

#endif
