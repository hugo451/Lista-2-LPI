#include "RestauranteCaseiro.hpp"
#include <iostream>

using namespace std;

int main(){

    MesaDeRestaurante Mesa1 = MesaDeRestaurante(1);

    Pedido Pedido1 = Pedido(1, 1, 19.90, "Frango a milanesa");
    Pedido Pedido2 = Pedido(2, 2, 7.50, "Suco de laranja");

    Mesa1.adicionaAoPedido(Pedido1);
    Mesa1.adicionaAoPedido(Pedido2);

    cout << Pedido1.getDescricao() << endl;
    cout << Pedido2.getDescricao() << endl;

    cout << "Total: " << Mesa1.calculaTotal() << endl;

    return 0;
}