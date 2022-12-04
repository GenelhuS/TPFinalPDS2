#include <iostream>
#include "cliente.hpp"

class Carrinho{
    int _Qtd_total;
    float _preco_total;

public:
    Carrinho();
    void setQtdTotal(int Qtd_total);
    void setprecoTotal(float preco_total);
    bool finalizarCompra();
    int getQtdTotal();
    float getPrecoTotal();

};