#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <iostream>

using namespace std;

class Pedido
{
private:
    
    int numero;
    int quantidade;
    float preco;
    string descricao;

public:

    Pedido();
    Pedido(int numero, int quantidade, float preco, string descricao);
    int getNumero();
    int getQuantidade();
    float getPreco();
    string getDescricao();
    
};
#endif