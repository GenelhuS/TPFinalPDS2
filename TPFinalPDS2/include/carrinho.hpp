#include <iostream>
#include "cliente.hpp"

class Carrinho{
    int Qtd_total;
    float preco_total;

public:
    Carrinho();
    bool finalizarCompra();
    int getQtdTotal();
    float getPrecoTotal();

};