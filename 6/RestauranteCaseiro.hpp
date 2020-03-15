#ifndef RESTAURANTECASEIRO_HPP
#define RESTAURANTECASEIRO_HPP

#include "MesaDeRestaurante.hpp"

using namespace std;

class RestauranteCaseiro
{
private:

    vector <MesaDeRestaurante> Mesas;

public:

    void atualizaMesas(MesaDeRestaurante mesas);
    void mostraMesas();
    void adicionaPedidos(Pedido pedido, MesaDeRestaurante mesa);
    float calculaTotalRestaurante();

};
#endif