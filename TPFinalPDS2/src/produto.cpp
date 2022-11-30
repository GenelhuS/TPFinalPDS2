#include <iostream>
#include "produto.hpp"


Produto::Produto(int id_Produto, std::string descricao, int tamanho, int peso, int Qtd_disp){
    this->id_Produto;
    this->descricao;
    this->peso;
    this->tamanho;
    this->Qtd_disp;
}

std::string Produto::getProduto(){
    return this->descricao;
    
}

int main(){
    Produto p1(10, "GELADEIRA", 120, 1.8,5);
    p1.getProduto();
}