#include "Mapa.h"
#include "Busca_Profundidade.h"
#include "Busca_Largura.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Mapa mapa;
    Busca_Profundidade buscaProfundidade(50, mapa.Get_Valentina(), mapa.Get_Bessa());
    Busca_Largura buscaLargura(50, mapa.Get_Valentina(), mapa.Get_Bessa());

    cout << endl
         << "Buscando em Profundidade:" << endl;
    buscaProfundidade.Busca().Print_Pilha();

    mapa.Reset();

    cout << endl
         << "Busca em Largura:" << endl;

    buscaLargura.Busca()->Print_Fila();

    return 0;
}
