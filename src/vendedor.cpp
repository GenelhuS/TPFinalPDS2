#include <iostream>
#include <vector>
#include "../include/vendedor.hpp"
#include "../include/produto.hpp"
#include "../include/usuario.hpp"

  /*  Vendedor::Vendedor(int id_vendedor, std::vector <Produto> estoque_Produtos){
        this->_id_vendedor;
        this->_estoque_Produtos;
    }*/

    Vendedor::Vendedor(int id_vendedor, std::string email, std::string senha, std::string nome,
     int cpf, int telefone, std::string data_nasc, std::string sexo) : Usuario( senha, nome, cpf, telefone, data_nasc, email, sexo) {
        _id_vendedor=id_vendedor;
        _estoque_Produtos={};
    }

    int Vendedor::getVendedor(){
        return this->_id_vendedor;
        
    }
    
    void Vendedor::getProdutosVendedor(){
        return this->_id_vendedor;
        return this->_estoque_Produtos;

    }

    void Vendedor::addProdutoEstoque(){
        
        

    }
    void Vendedor::excluirProdutoEstoque(){

    }
