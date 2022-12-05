#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/cliente.hpp"
#include "../third_party/doctest.h"
using namespace std;

//get perimeter

TEST_CASE("testando se o cliente foi criado"){
        
Cliente c(105,"testgmailcom","senha","cliente",120998,98888,"10/10/2000","F","debito");   
    
    CHECK(c.getNome() == "cliente" );   // se true, o cliente foi criado e o nome bate

}

TEST_CASE("Checando o add produto"){
        
Cliente c(105,"testgmailcom","senha","cliente",120998,98888,"10/10/2000","F","debito");   
    
    Produto copo(1025, "o produto é um copo", 10, 80); 
    
    c.addProdutoCarrinho(copo);

    c.imprimirCarrinho();

    CHECK(c.verificarCarrinho(1025));   // se true, o produto copo foi encontrado no carrinho
    


}