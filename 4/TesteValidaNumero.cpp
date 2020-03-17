#include <iostream>
#include "TestaValidaNumero.hpp"

TestaValidaNumero::TestaValidaNumero()
{
}
void TestaValidaNumero::validaNumero(int i)
{
    if(i > 0)
    {
        cout << "Validado!" << endl;
        if(i > 100)
        {
            if(i >= 1000)
            {
                ValorMuitoAcimaException msg;
                throw msg;
            }else{
                ValorAcimaException msg;
                throw msg;
            }
        }
    }else{
        ValorAbaixoException msg;
        throw msg;
    }
}