#include <iostream>
#include <vector>
#include "usuario.hpp"
#include "produto.hpp"
//#include "ecommerce.hpp"


class Cliente: public Usuario{
    std::string _form_pag;
    int _id_Cliente;
    std::vector<Produto> _Carrinho;

public:
    Cliente(int id_Cliente);
    Cliente(int id_Cliente,std::string email, std::string senha, std::string nome,
         int cpf, int telefone, std::string data_nasc, std::string sexo, std::string forma_pag);
    void addProdutoCarrinho ();
    void excluirProdutoCarrinho();
    void imprimirCarrinho();
    void imprimirCliente(int cpf);
};