#include <iostream>
#include "../include/usuario.hpp"


Usuario::Usuario(std::string _senha, std::string _nome, int _cpf, int _tel, 
                           std::string _data_nasc, std::string _email, std::string _sexo){

                 this->_senha = _senha ;
                 this->_nome = _nome;
                 this->_cpf = _cpf;
                 this->_tel = _tel;
                 this->_data_nasc = _data_nasc;
                 this->_email = _email;
                 this->_sexo = _sexo;         

}


std::string Usuario::getEmail(){
    return _email;
}

std::string Usuario::getSenha(){
    return _senha;
}

std::string Usuario::getNome(){
    return _nome;
}

int Usuario::getCPF(){
    return _cpf;
}

int Usuario::getTelefone(){
    return _tel;
}

std::string Usuario::getDataNasc(){
    return _data_nasc;
}

std::string Usuario::getSexo(){
    return _sexo;
}