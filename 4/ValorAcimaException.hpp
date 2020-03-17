#ifndef VALORACIMAEXCEPTION_HPP
#define VALORACIMAEXCEPTION_HPP
#include <iostream>
#include <exception>

using namespace std;


class ValorAcimaException : public std::exception
{
    public:
        ValorAcimaException();
};
#endif