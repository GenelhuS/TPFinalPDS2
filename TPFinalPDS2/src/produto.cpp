#include <iostream>
#include "produto.hpp"


Produto::Produto(int _id_Produto, std::string _descricao, int tam, int _peso, int _Qtd_disp){
    _id_Produto = id_Produto;
    _descricao = descricao;
    tam = tamanho;
    _peso = peso;
    _Qtd_disp = Qtd_disp;

}
std::string Produto::getProduto(){
    return descricao;
}


