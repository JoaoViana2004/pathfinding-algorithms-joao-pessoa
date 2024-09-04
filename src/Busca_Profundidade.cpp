#include "Busca_Profundidade.h"
#include <iostream>

using std::cout;
using std::endl;

Busca_Profundidade::Busca_Profundidade(int tamanho, Bairro *i, Bairro *f)
    : pilha(tamanho), inicio(i), final(f)
{
    pilha.Empilhar(inicio);
    inicio->Visitou();
    achou = false;
}

Pilha Busca_Profundidade::Busca()
{

    Bairro *topo = pilha.Get_Topo();
    bool achouAdjacente = false;

    for (const auto &adj : topo->Get_Adjacentes())
    {
        if (!adj.Get_Bairro()->Get_Visita() && !achou)
        {
            pilha.Empilhar(adj.Get_Bairro());
            if (adj.Get_Bairro()->Get_Nome() == final->Get_Nome())
            {
                cout << "Destino Encontrado" << endl;
                achou = true;
                achouAdjacente = true;
                return pilha;
            }
            else
            {
                adj.Get_Bairro()->Visitou();
                achouAdjacente = true;
            }
        }
    }

    if (!achouAdjacente)
    {
        pilha.Desempilhar();
    }

    return Busca();
}
