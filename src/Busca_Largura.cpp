#include "Busca_Largura.h"
#include <iostream>

using std::cout;
using std::endl;

Busca_Largura::Busca_Largura(int t)
    : fila(t)
{
}

void Busca_Largura::Busca(Bairro *inicio, Bairro *final)
{
    fila.Enfileirar(inicio);
    inicio->Visitou();

    while (!fila.Fila_Vazia())
    {
        Bairro *frente = fila.Primeiro_Fila();
        cout << "Enfileirado: " << frente->Get_Nome() << endl;
        fila.Desenfileirar();

        for (const auto &adj : frente->Get_Adjacentes())
        {
            if (!adj.Get_Bairro()->Get_Visita())
            {
                fila.Enfileirar(adj.Get_Bairro());
                adj.Get_Bairro()->Visitou();

                if (adj.Get_Bairro()->Get_Nome() == final->Get_Nome())
                {
                    cout << "Destino Encontrado: " << final->Get_Nome() << endl;
                    return;
                }
            }
        }
    }
}
