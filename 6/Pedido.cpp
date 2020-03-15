#include "Pedido.hpp"

Pedido::Pedido()
{
    numero = 0;
    quantidade = 0;
    preco = 0;
    descricao = "\0";
}
Pedido::Pedido(int numero, int quantidade, float preco, string descricao)
{
    this->numero = numero;
    this->quantidade = quantidade;
    this->preco = preco;
    this->descricao = descricao;
}
int Pedido::getNumero()
{
    return numero;
}
int Pedido::getQuantidade()
{
    return quantidade;
}
float Pedido::getPreco()
{
    return preco;
}
string Pedido::getDescricao()
{
    return descricao;
}