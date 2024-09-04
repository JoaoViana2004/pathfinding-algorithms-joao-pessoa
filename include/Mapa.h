#ifndef MAPA_H
#define MAPA_H

#include "Bairro.h"

class Mapa
{
    Bairro valentina;
    Bairro paratibe;
    Bairro mucumagro;
    Bairro cristo;
    Bairro colinas_do_sul;
    Bairro ernesto_geisel;
    Bairro mangabeira;
    Bairro gramame;
    Bairro bayeux;
    Bairro santa_rita;
    Bairro tambau;
    Bairro bessa;

public:
    Mapa();

    Bairro *Get_Valentina();
    Bairro *Get_Paratibe();
    Bairro *Get_Mucumagro();
    Bairro *Get_Cristo();
    Bairro *Get_Colinas_Do_Sul();
    Bairro *Get_Ernesto_Geisel();
    Bairro *Get_Mangabeira();
    Bairro *Get_Gramame();
    Bairro *Get_Bayeux();
    Bairro *Get_Santa_Rita();
    Bairro *Get_Tambau();
    Bairro *Get_Bessa();

    void Mostrar_Fronteiras() const;
    void Mostrar_Fronteiras_Vizualizacao() const;
    void Reset();
};

#endif
