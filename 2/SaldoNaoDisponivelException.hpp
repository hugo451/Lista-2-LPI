#ifndef SALDONAODISPONIVELEXCEPTION_HPP
#define SALDONAODISPONIVELEXCEPTION_HPP
#include<iostream>
#include<exception>

using namespace std;

class SaldoNaoDisponivelException : public exception
{
public:
    SaldoNaoDisponivelException();
};
#endif