#include <iostream>
#include "TestaValidaNumero.hpp"
#include "ValorAbaixoException.hpp"
#include "ValorAcimaException.hpp"
#include "ValorMuitoAcimaException.hpp"

using namespace std;

int main()
{
    TestaValidaNumero numero = TestaValidaNumero();
    
    int num;

    cout << "Digite um número para teste: " << endl;
    cin >> num;

    numero.validaNumero(num);
    
    return 0;
}