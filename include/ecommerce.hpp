#ifndef ECOMMERCE 
#define ECOMMERCE

#include <iostream>
#include <vector>
#include "cliente.hpp"
#include "vendedor.hpp"

class Ecommerce{

 std::vector<Cliente> Clientes;
 std::vector<Vendedor> Vendedores;

public:
    Ecommerce();
    void cadastro_cliente(std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo, std::string forma_pag);
    void cadastro_vendedor(std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo);
    void imprimir_produtos();
    void imprimir_dados(int cpf);
    void Cadastrar_produto();
    void deletar_produto();
    int login_cliente(std::string email, std::string senha);
    int login_vendedor(std::string email, std::string senha);


};

#endif