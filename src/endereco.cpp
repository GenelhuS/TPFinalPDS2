#include "../include/endereco.hpp"

Endereco::Endereco(int cep, std::string pais, int num, std::string rua){

    this->_cep=cep;
    this->_num=num;
    this->_pais=pais;
    this->_rua=rua;

}