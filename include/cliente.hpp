#ifndef CLIENTE 
#define CLIENTE

#include <iostream>
#include <list>
#include "usuario.hpp"
#include "produto.hpp"
//#include "ecommerce.hpp"


class Cliente: public Usuario{
    std::string _form_pag;
    int _id_Cliente;
    std::list<Produto> _carrinho;

public:
    Cliente(int id_Cliente,std::string email, std::string senha, std::string nome,
         int cpf, int telefone, std::string data_nasc, std::string sexo, std::string forma_pag);
    void addProdutoCarrinho (Produto produto);
    void excluirProdutoCarrinho(int id);
    void imprimirCarrinho();
    bool verificarCarrinho(int id);  // descobre se tem o produto no carrinho através da id 
};

#endif