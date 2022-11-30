#include <iostream>

class Produto{
    int id_Produto;
    std::string descricao;
    float tamanho;
    float peso;
    int Qtd_disp;

public:
    Produto(int id_Produto, std::string descricao, int tamanho, int peso, int Qtd_disp);
    std::string getProduto();
    void setProduto();

};