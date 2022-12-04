#ifndef VENDEDOR 
#define VENDEDOR

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "produto.hpp"
#include "usuario.hpp"

class Vendedor: public Usuario{
    int _id_vendedor;
    std::vector <Produto> _estoque_Produtos;
public:
    //Vendedor(int id_vendedor, std::vector <Produto> estoque_Produtos );
    Vendedor(int id_vendedor, std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo);
    void addProdutoEstoque();
    void excluirProdutoEstoque();
    int getVendedor();
    void getProdutosVendedor();
};

#endif