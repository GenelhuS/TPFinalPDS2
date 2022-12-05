#ifndef ENDERECO 
#define ENDERECO

#include <iostream>

class Endereco{
    int _cep;
    std::string _pais;
    int _num;
    std::string _rua;
public:
    Endereco(int cep, std::string pais, int num, std::string rua);
    int getCep();
    std::string getPais();
    int getNum ();
    std::string getRua();

};

#endif