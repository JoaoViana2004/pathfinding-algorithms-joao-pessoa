#include "Fila.h"
#include <iostream>

using std::cout;
using std::endl;

Fila::Fila(int t) : tamanho(t)
{
    cout << "Nova Fila Criada de Tamanho: " << t << endl;
    Bairros.reserve(t);
}

void Fila::Enfileirar(Bairro *b)
{
    if (fim == tamanho - 1)
        fim = -1;

    Bairros[++fim] = b;
    num_elementos++;
}

Bairro *Fila::Desenfileirar()
{
    Bairro *temp = Bairros[inicio++];

    if (inicio == tamanho)
        inicio = 0;

    num_elementos--;
    return temp;
}

bool Fila::Fila_Vazia()
{
    return num_elementos == 0;
}

Bairro *Fila::Primeiro_Fila()
{
    return Bairros[inicio];
}
