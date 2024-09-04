#include "Pilha.h"
#include <iostream>

using std::cout;
using std::endl;

Pilha::Pilha(int t)
    : tamanho(t)
{
    Bairros.reserve(t);
}

void Pilha::Empilhar(Bairro *b)
{
    if (!Pilha_Cheia())
    {
        Bairros.push_back(b);
        topo++;
    }
    else
    {
        cout << "A pilha ja esta cheia" << endl;
    }
}

Bairro *Pilha::Desempilhar()
{
    if (!Pilha_Vazia())
    {
        Bairro *b = Bairros[topo];
        Bairros.pop_back();
        topo--;
        return b;
    }
    cout << "A pilha ja esta vazia" << endl;
    return nullptr;
}

Bairro *Pilha::Get_Topo() const
{
    if (topo >= 0)
    {
        return Bairros[topo];
    }
    return nullptr;
}

bool Pilha::Pilha_Cheia() const
{
    return Bairros.size() == static_cast<std::vector<Bairro *>::size_type>(tamanho);
}

bool Pilha::Pilha_Vazia() const
{
    return topo == -1;
}

void Pilha::Print_Pilha() const
{
    for (const auto &adj : Bairros)
    {
        cout << adj->Get_Nome() << " -> ";
    }
    cout << "(Destino) " << Bairros.size() << " Elementos" << endl;
}
