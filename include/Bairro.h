#ifndef BAIRRO_H
#define BAIRRO_H

#include <string>
#include <vector>
#include "Adjacente.h"
class Adjacente;
class Bairro
{
    std::string nome;
    std::vector<Adjacente> fronteiras;
    bool visitado = false;

public:
    Bairro(const std::string &n);

    std::string Get_Nome() const;
    void Add_Adjacente(Bairro *b, float d);
    const std::vector<Adjacente> &Get_Adjacentes() const;
    void Mostrar_Fronteiras_Vizualizacao() const;
    void Mostrar_Fronteiras() const;
    void Visitou();
    void Desvisitar();
    bool Get_Visita() const;
    void Reset_Bairros();
};

#endif
