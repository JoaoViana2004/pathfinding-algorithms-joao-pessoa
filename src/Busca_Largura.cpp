#include "Busca_Largura.h"
#include <iostream>

using std::cout;
using std::endl;

Busca_Largura::Busca_Largura(int t, Bairro *i, Bairro *f)
    : fila(t), f_reserva(t), inicio(i), final(f)
{
    fila.Enfileirar(inicio);
    f_reserva.Enfileirar(inicio);
    inicio->Visitou();
}

Fila *Busca_Largura::Busca()
{

    Bairro *frente = fila.Primeiro_Fila();
    fila.Desenfileirar();

    for (const auto &adj : frente->Get_Adjacentes())
    {
        if (!adj.Get_Bairro()->Get_Visita())
        {
            fila.Enfileirar(adj.Get_Bairro());
            f_reserva.Enfileirar(adj.Get_Bairro());
            adj.Get_Bairro()->Visitou();

            if (adj.Get_Bairro()->Get_Nome() == final->Get_Nome())
            {
                f_reserva.Enfileirar(adj.Get_Bairro());
                return &f_reserva;
            }
        }
    }
    return Busca();
}
