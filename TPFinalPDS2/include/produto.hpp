#include <iostream>
#include "vendedor.hpp"

class Produto{
    std::string descricao;
    int tam;
    float peso;
    int Qtd_disp;

public:
    Produto();
    std::string getProduto();

};