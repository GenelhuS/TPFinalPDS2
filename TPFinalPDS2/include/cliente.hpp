#include <iostream>
#include "usuario.hpp"
#include "ecommerce.hpp"
#include "produto.hpp"

class Cliente{
    std::string form_pag;
    int id_Cliente;
    std::vector<Produto> Carrinho;

public:
    Cliente(int id_Cliente);
    void addProdutoCarrinho ();
    void excluirProdutoCarrinho();
    void imprimirCarrinho();
    void getCliente(Cliente);
};