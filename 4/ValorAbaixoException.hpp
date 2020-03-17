#ifndef VALORABAIXOEXCEPTION_HPP
#define VALORABAIXOEXCEPTION_HPP
#include <iostream>
#include <exception>

using namespace std;

class ValorAbaixoException : public exception
{
    public:
        ValorAbaixoException();
};

#endif