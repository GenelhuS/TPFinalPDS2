#include <iostream>
#include "../include/usuario.hpp"

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