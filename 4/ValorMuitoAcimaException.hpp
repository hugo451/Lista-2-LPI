#ifndef VALORMUITOACIMAEXCEPTION_HPP
#define VALORMUITOACIMAEXCEPTION_HPP
#include <iostream>
#include <exception>

using namespace std;


class ValorMuitoAcimaException : public std::exception
{
    public:
        ValorMuitoAcimaException();
};

#endif