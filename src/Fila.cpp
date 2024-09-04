#include "Fila.h"
#include <iostream>

using std::cout;
using std::endl;

Fila::Fila(int t) : tamanho(t)
{
    Bairros.reserve(t);
}

void Fila::Enfileirar(Bairro *b)
{
    if (fim == tamanho - 1)
    {
        fim = -1;
    }

    Bairros[++fim] = b;
    ++num_elementos;
}

Bairro *Fila::Desenfileirar()
{
    Bairro *temp = Bairros[inicio++];

    if (inicio == tamanho)
        inicio = 0;

    --num_elementos;
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
void Fila::Print_Fila()
{
    int cont = num_elementos;
    int ini = inicio;
    while (ini != fim)
    {

        cout << Bairros[ini++]->Get_Nome() << " -> ";
        if (ini == tamanho)
        {
            ini = 0;
        }
    }
    cout << "(Destino) " << cont << " Bairros" << endl;
}

int Fila::Get_Tamanho()
{
    return num_elementos;
}
