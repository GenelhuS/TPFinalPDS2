#include <iostream>
#include <vector>
#include "usuario.hpp"
#include "produto.hpp"
#include "cliente.hpp"

Cliente::Cliente(int id_Cliente, std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo, std::string forma_pag){
    _id_Cliente=id_Cliente;
    _email=email;
    _senha=senha;
    _nome=nome;
    _cpf=cpf;
    _tel=telefone;
    _data_nasc=data_nasc;
    _sexo=sexo;
    _form_pag=forma_pag; 
    _Carrinho={};
}
