#include "MesaDeRestaurante.hpp"

MesaDeRestaurante::MesaDeRestaurante(int numero)
{
    this->numero = numero;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido pedido)
{
    Pedidos.push_back(pedido);
}

void MesaDeRestaurante::zeraPedidos(){

    for(int i = 0; i < Pedidos.size(); i++)
    {
        Pedidos.erase(Pedidos.begin());
    }
}

float MesaDeRestaurante::calculaTotal(){

    float valor = 0;

    for(int i = 0; i < Pedidos.size(); i++)
    {
        valor += Pedidos[i].getPreco()*Pedidos[i].getQuantidade();
    }
    return valor;
}
int MesaDeRestaurante::getNumero()
{
    return numero;
}