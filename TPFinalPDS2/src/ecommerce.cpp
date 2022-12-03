#include "vendedor.hpp"
#include "cliente.hpp"
#include "produto.hpp"
#include "ecommerce.hpp"

Ecommerce::Ecommerce(){
    std::vector<Cliente> Clientes;
    std::vector<Vendedor> Vendedores;
}

void Ecommerce::cadastro_cliente(std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo, std::string forma_pag){
   
    int id_Cliente=(int)Clientes.size();
    Cliente clienteCadastrado(id_Cliente, email, senha, nome, cpf, telefone, data_nasc, sexo, forma_pag);
    Clientes.push_back(clienteCadastrado);

}

void Ecommerce::cadastro_vendedor(std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo){

    int id_vendedor=(int)Vendedores.size();
    Vendedor vendedorCadastrado(id_vendedor, email, senha, nome, cpf, telefone, data_nasc, sexo);
    Vendedores.push_back(vendedorCadastrado);

}