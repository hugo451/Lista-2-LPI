#include "RestauranteCaseiro.hpp"


void RestauranteCaseiro::atualizaMesas(MesaDeRestaurante mesa){

    for(int i = 0; i < Mesas.size(); i++){

        if(mesa.getNumero() == Mesas[i].getNumero()){
            Mesas.erase(Mesas.begin() + i);
            Mesas.insert(Mesas.begin() + i, mesa);
        }
        else
        {
            Mesas.push_back(mesa);
        }
    }
}

void RestauranteCaseiro::mostraMesas(){

    for(int i = 0; i < Mesas.size(); i++)
    {
        cout << Mesas[i].getNumero() << endl;
    }

}

void RestauranteCaseiro::adicionaPedidos(Pedido pedido, MesaDeRestaurante mesa){

    for(int i = 0; i < Mesas.size(); i++){

        if(mesa.getNumero() == Mesas[i].getNumero()){
            Mesas[i].adicionaAoPedido(pedido);
        }
        else
        {
            Mesas.push_back(mesa);
            Mesas[Mesas.size()-1].adicionaAoPedido(pedido);
        }
        
    }

}

float RestauranteCaseiro::calculaTotalRestaurante(){

    float total = 0;

    for(int i = 0; i < Mesas.size(); i++)
    {
        total += Mesas[i].calculaTotal();
    }

    return total;
}