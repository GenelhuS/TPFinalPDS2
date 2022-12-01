#include <iostream>
#include "produto.hpp"


Produto::Produto(int id_Produto, std::string descricao, int tamanho, int peso, int Qtd_disp){
    this->id_Produto;
    this->descricao;
    this->tamanho;
    this->peso;
    this->Qtd_disp;
}

int Produto::getId(){
    return this->id_Produto;
}
std::string Produto::getDescricao(){
    return this->descricao;
 }
float Produto::getTam(){
        return this->tamanho;
    }
float Produto::getPeso(){
    return this->peso;
}
int Produto::getQtd_disp(){
    return this->Qtd_disp;
}

