#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/vendedor.hpp"
#include "../third_party/doctest.h"
using namespace std;

TEST_CASE("testando se o vendedor foi criado"){
        
    Vendedor v(28905,"testgmailcom","senha","vendedor",340257999,996507228,"19/01/2005","F");   
    
    CHECK(v.getNome() == "vendedor" );   // se true, o vendedor foi criado e o nome bate
    CHECK_EQ(v.getVendedor() , 28905);     // se true a função get vendedor retorna a id correta
}
/*
TEST_CASE("Checando o add produto estoque e get produtos vendedor"){
        
    Vendedor v(28905,"testgmailcom","senha","vendedor",340257999,996507228,"19/01/2005","F");   
    
    //Produto caneta(96, "Caneta bic vermelha", 8, 26); 
    
    v.addProdutoEstoque("Caneta bic vermelha", 8 ,26);
    v.getProdutosVendedor();
    v.excluirProdutoEstoque(1);
    v.getProdutosVendedor();
    CHECK(0);
}
*/