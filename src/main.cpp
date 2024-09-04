#include "Mapa.h"
#include "Busca_Profundidade.h"
#include "Busca_Largura.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Mapa mapa;
    Busca_Profundidade buscaProfundidade(10);
    Busca_Largura buscaLargura(10);

    cout << "Buscando com Busca em Profundidade:" << endl;
    buscaProfundidade.Busca(mapa.Get_Valentina(), mapa.Get_Bessa());

    mapa.Reset();

    cout << "Buscando com Busca em Largura:" << endl;
    buscaLargura.Busca(mapa.Get_Valentina(), mapa.Get_Bessa());

        return 0;
}
