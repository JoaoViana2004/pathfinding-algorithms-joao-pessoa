#include "Busca_Profundidade.h"
#include <iostream>

using std::cout;
using std::endl;

Busca_Profundidade::Busca_Profundidade(int tamanho)
    : pilha(tamanho)
{
}

void Busca_Profundidade::Busca(Bairro *b, Bairro *final)
{
    pilha.Empilhar(b);
    b->Visitou();

    while (!pilha.Pilha_Vazia())
    {
        Bairro *topo = pilha.Get_Topo();
        bool achouAdjacente = false;

        for (const auto &adj : topo->Get_Adjacentes())
        {
            if (!adj.Get_Bairro()->Get_Visita())
            {
                pilha.Empilhar(adj.Get_Bairro());
                if (adj.Get_Bairro()->Get_Nome() == final->Get_Nome())
                {
                    cout << "Destino Encontrado" << endl;
                    return;
                }
                adj.Get_Bairro()->Visitou();
                achouAdjacente = true;
                break;
            }
        }

        if (!achouAdjacente)
        {
            pilha.Desempilhar();
        }
    }
}
