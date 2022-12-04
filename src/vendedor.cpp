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
    
     //Esboço que a anne começou a fazer
    //void Vendedor::getProdutosVendedor(){
    //    return this->_id_vendedor;
    //    return this->_estoque_Produtos;
    //}


    //Versao de testes da classe getProdutosVendedor
    //Pendente formatar a saida da impressão

    void Vendedor::getProdutosVendedor(){
        for(int i; i<(int)_estoque_Produtos.size();i++){
            Produto produtoAtual = _estoque_Produtos.at(i);
            std::cout<<produtoAtual.getId()<<" "<<produtoAtual.getDescricao()<<" "<<produtoAtual.getTam()<<" ";
            std::cout<<produtoAtual.getPeso()<<" "<<std::endl;
        }
    }

    void Vendedor::addProdutoEstoque(std::string descricao, int tamanho, int peso){

        int id_Produto=_estoque_Produtos.size()+1;
        Produto produto(id_Produto,descricao,tamanho,peso);
        _estoque_Produtos.push_back(produto);
        
    }

    void Vendedor::excluirProdutoEstoque(int id_Produto){
        if(id_Produto<_estoque_Produtos.size()+1){
            _estoque_Produtos.erase(_estoque_Produtos.begin()+id_Produto);
        }
        else std::cout<<"Esse produto informado não existe e não tem como ser deletado."<<std::endl;
    }
