#include "Bairro.h"
#include <iostream>

using std::cout;
using std::endl;

Bairro::Bairro(const std::string &n)
    : nome(n)
{
}

std::string Bairro::Get_Nome() const
{
    return nome;
}

void Bairro::Add_Adjacente(Bairro *b, float d)
{
    fronteiras.push_back(Adjacente(b, d));
}

const std::vector<Adjacente> &Bairro::Get_Adjacentes() const
{
    return fronteiras;
}

void Bairro::Mostrar_Fronteiras_Vizualizacao() const
{
    for (const auto &adj : fronteiras)
    {
        cout << "G.add_edge('" << Get_Nome() << "', '" << adj.Get_Bairro()->Get_Nome() << "', weight='"
             << adj.Get_Dist() << "')"
             << endl;
    }
}

void Bairro::Mostrar_Fronteiras() const
{
    cout << "Fronteiras de " << nome << ":" << endl;
    for (const auto &adj : fronteiras)
    {
        cout << "- " << adj.Get_Bairro()->Get_Nome() << " a uma distancia de " << adj.Get_Dist() << " km" << endl;
    }
}

void Bairro::Visitou()
{
    visitado = true;
}

void Bairro::Desvisitar()
{
    visitado = false;
}

bool Bairro::Get_Visita() const
{
    return visitado;
}

void Bairro::Reset_Bairros()
{
    for (const auto &adj : Get_Adjacentes())
        adj.Get_Bairro()->Desvisitar();
}
