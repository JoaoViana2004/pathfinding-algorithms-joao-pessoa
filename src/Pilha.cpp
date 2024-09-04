#include "Pilha.h"
#include <iostream>

using std::cout;
using std::endl;

Pilha::Pilha(int t)
    : tamanho(t)
{
    Bairros.reserve(t);
    cout << "Nova Pilha Criada com tamanho " << t << endl;
}

void Pilha::Empilhar(Bairro *b)
{
    cout << "Empilhar: " << b->Get_Nome() << endl;
    if (!Pilha_Cheia())
    {
        Bairros.push_back(b);
        topo++;
    }
    else
    {
        cout << "A pilha já está cheia" << endl;
    }
}

Bairro *Pilha::Desempilhar()
{
    if (!Pilha_Vazia())
    {
        Bairro *b = Bairros[topo];
        Bairros.pop_back();
        topo--;
        cout << "Desempilhado: " << b->Get_Nome() << endl;
        return b;
    }
    cout << "A pilha já está vazia" << endl;
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
