#include "../include/endereco.hpp"

Endereco::Endereco(int cep, std::string pais, int num, std::string rua){

    this->_cep=cep;
    this->_num=num;
    this->_pais=pais;
    this->_rua=rua;

}

int Endereco::getCep(){

    return this->_cep;

}
std::string Endereco::getPais(){

    return this->_pais;

}
int Endereco::getNum (){

    return this->_num;

}
std::string Endereco::getRua(){

return this->_rua;

}
