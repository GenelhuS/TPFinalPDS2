#include <iostream>
#include <vector>
#include "vendedor.hpp"
#include "produto.hpp"
#include "usuario.hpp"

    Vendedor::Vendedor(int id_vendedor, std::vector <Produto> estoque_Produtos){
        this->_id_vendedor;
        this->_estoque_Produtos;
    }

    Vendedor::Vendedor(int id_vendedor, std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo){
        _id_vendedor=id_vendedor;
        _email=email;
        _senha=senha;
        _nome=nome;
        _cpf=cpf;
        _tel=telefone;
        _data_nasc=data_nasc;
        _sexo=sexo;
        _estoque_Produtos={};
    }

    int Vendedor::getVendedor(){
        return this->_id_vendedor;
        
    }
    
    int Vendedor::getProdutosVendedor(){
        return this->_id_vendedor;

    }
    int Vendedor::getProdutosVendedor(){
        return this->_estoque_Produtos;

    }

    void Vendedor::addProdutoEstoque(){
        
    }
    void Vendedor::excluirProdutoEstoque(){

    }
