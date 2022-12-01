#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "produto.hpp"

class Vendedor{
    int id_vendedor;
    std::vector <Produto> estoque_Produtos;
public:
    Vendedor(int id_vendedor, std::vector <Produto> estoque_Produtos );
    void addProdutoEstoque();
    void excluirProdutoEstoque();
    int getVendedor();
    void getProdutosVendedor();
};