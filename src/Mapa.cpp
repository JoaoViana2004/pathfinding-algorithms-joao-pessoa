#include "Mapa.h"
#include <iostream>

using std::cout;
using std::endl;

Mapa::Mapa()
    : valentina("Valentina"), paratibe("Paratibe"), mucumagro("Mucumagro"), cristo("Cristo"),
      colinas_do_sul("Colinas do Sul"), ernesto_geisel("Ernesto Geisel"), mangabeira("Mangabeira"),
      gramame("Gramame"), bayeux("Bayeux"), santa_rita("Santa Rita"), tambau("Tambau"), bessa("Bessa")
{
    // Adicionar fronteiras (bairros adjacentes)
    valentina.Add_Adjacente(&paratibe, 5);
    valentina.Add_Adjacente(&mucumagro, 4);
    valentina.Add_Adjacente(&colinas_do_sul, 6);

    paratibe.Add_Adjacente(&valentina, 5);
    paratibe.Add_Adjacente(&ernesto_geisel, 7);
    paratibe.Add_Adjacente(&gramame, 3);
    paratibe.Add_Adjacente(&cristo, 9);
    paratibe.Add_Adjacente(&bayeux, 10);

    mucumagro.Add_Adjacente(&valentina, 4);
    mucumagro.Add_Adjacente(&gramame, 2);
    mucumagro.Add_Adjacente(&mangabeira, 8);

    colinas_do_sul.Add_Adjacente(&valentina, 6);
    colinas_do_sul.Add_Adjacente(&ernesto_geisel, 3);
    colinas_do_sul.Add_Adjacente(&mangabeira, 5);

    ernesto_geisel.Add_Adjacente(&paratibe, 7);
    ernesto_geisel.Add_Adjacente(&colinas_do_sul, 3);
    ernesto_geisel.Add_Adjacente(&mangabeira, 4);
    ernesto_geisel.Add_Adjacente(&cristo, 6);
    ernesto_geisel.Add_Adjacente(&tambau, 10);

    mangabeira.Add_Adjacente(&mucumagro, 8);
    mangabeira.Add_Adjacente(&colinas_do_sul, 5);
    mangabeira.Add_Adjacente(&ernesto_geisel, 4);
    mangabeira.Add_Adjacente(&tambau, 9);
    mangabeira.Add_Adjacente(&gramame, 6);

    gramame.Add_Adjacente(&paratibe, 3);
    gramame.Add_Adjacente(&mucumagro, 2);
    gramame.Add_Adjacente(&mangabeira, 6);
    gramame.Add_Adjacente(&cristo, 6);

    bayeux.Add_Adjacente(&cristo, 7);
    bayeux.Add_Adjacente(&paratibe, 10);
    bayeux.Add_Adjacente(&santa_rita, 5);

    santa_rita.Add_Adjacente(&bayeux, 5);
    santa_rita.Add_Adjacente(&tambau, 18);

    tambau.Add_Adjacente(&ernesto_geisel, 10);
    tambau.Add_Adjacente(&mangabeira, 9);
    tambau.Add_Adjacente(&bessa, 4);
    tambau.Add_Adjacente(&santa_rita, 18);

    bessa.Add_Adjacente(&tambau, 4);
    bessa.Add_Adjacente(&mangabeira, 18);
}

Bairro *Mapa::Get_Valentina() { return &valentina; }
Bairro *Mapa::Get_Paratibe() { return &paratibe; }
Bairro *Mapa::Get_Mucumagro() { return &mucumagro; }
Bairro *Mapa::Get_Cristo() { return &cristo; }
Bairro *Mapa::Get_Colinas_Do_Sul() { return &colinas_do_sul; }
Bairro *Mapa::Get_Ernesto_Geisel() { return &ernesto_geisel; }
Bairro *Mapa::Get_Mangabeira() { return &mangabeira; }
Bairro *Mapa::Get_Gramame() { return &gramame; }
Bairro *Mapa::Get_Bayeux() { return &bayeux; }
Bairro *Mapa::Get_Santa_Rita() { return &santa_rita; }
Bairro *Mapa::Get_Tambau() { return &tambau; }
Bairro *Mapa::Get_Bessa() { return &bessa; }

void Mapa::Mostrar_Fronteiras() const
{
    valentina.Mostrar_Fronteiras();
    paratibe.Mostrar_Fronteiras();
    mucumagro.Mostrar_Fronteiras();
    colinas_do_sul.Mostrar_Fronteiras();
    ernesto_geisel.Mostrar_Fronteiras();
    mangabeira.Mostrar_Fronteiras();
    gramame.Mostrar_Fronteiras();
    bayeux.Mostrar_Fronteiras();
    santa_rita.Mostrar_Fronteiras();
    tambau.Mostrar_Fronteiras();
    bessa.Mostrar_Fronteiras();
}

void Mapa::Mostrar_Fronteiras_Vizualizacao() const
{
    valentina.Mostrar_Fronteiras_Vizualizacao();
    paratibe.Mostrar_Fronteiras_Vizualizacao();
    mucumagro.Mostrar_Fronteiras_Vizualizacao();
    colinas_do_sul.Mostrar_Fronteiras_Vizualizacao();
    ernesto_geisel.Mostrar_Fronteiras_Vizualizacao();
    mangabeira.Mostrar_Fronteiras_Vizualizacao();
    gramame.Mostrar_Fronteiras_Vizualizacao();
    bayeux.Mostrar_Fronteiras_Vizualizacao();
    santa_rita.Mostrar_Fronteiras_Vizualizacao();
    tambau.Mostrar_Fronteiras_Vizualizacao();
    bessa.Mostrar_Fronteiras_Vizualizacao();
}

void Mapa::Reset()
{
    valentina.Reset_Bairros();
    paratibe.Reset_Bairros();
    mucumagro.Reset_Bairros();
    colinas_do_sul.Reset_Bairros();
    ernesto_geisel.Reset_Bairros();
    mangabeira.Reset_Bairros();
    gramame.Reset_Bairros();
    bayeux.Reset_Bairros();
    santa_rita.Reset_Bairros();
    tambau.Reset_Bairros();
    bessa.Reset_Bairros();
}
