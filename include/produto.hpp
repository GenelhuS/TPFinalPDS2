#ifndef PRODUTO 
#define PRODUTO

#include <iostream>

class Produto{
    int id_Produto;
    std::string descricao;
    float tamanho;
    float peso;
    int Qtd_disp;

public:
    Produto(int id_Produto, std::string descricao, int tamanho, int peso, int Qtd_disp);
    int getId();
    std::string getDescricao();
    float getTam();
    float getPeso();
    int getQtd_disp();
    //void setProduto();

};

#endif