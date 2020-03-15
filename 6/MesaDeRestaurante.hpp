#ifndef MESADERESTAURANTE_HPP
#define MESADERESTAURANTE_HPP

#include "Pedido.hpp"
#include <vector>

using namespace std;

class MesaDeRestaurante
{
private:

    vector <Pedido> Pedidos;
    int numero;

public:

    MesaDeRestaurante(int numero);
    void adicionaAoPedido(Pedido pedido);
    void zeraPedidos();
    float calculaTotal();
    int getNumero();

};
#endif