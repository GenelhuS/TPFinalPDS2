#ifndef ENDERECO 
#define ENDERECO

#include <iostream>

class Endereco{
    int _cep;
    std::string _pais;
    int _num;
    std::string _rua;
public:
    Endereco(int cep, std::string _pais, int num, std::string _rua);

};

#endif