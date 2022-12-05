#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/cliente.hpp"
#include "../third_party/doctest.h"
using namespace std;

TEST_CASE("testando se o cliente foi criado"){
        
Cliente c(18905,"testgmailcom","senha","cliente",120998,98888,"10/10/2000","F","debito");   
    
    CHECK(c.getNome() == "cliente" );   // se true, o cliente foi criado e o nome bate

}

TEST_CASE("Checando o add produto"){
        
Cliente c(10587946,"testgmailcom","senha","cliente",120998,98888,"10/10/2000","F","debito");   
    
    Produto copo(1025, "o produto é um copo", 10, 80); 
    
    c.addProdutoCarrinho(copo);

    c.imprimirCarrinho();

    CHECK(c.verificarCarrinho(1025));   // se true, o produto copo foi encontrado no carrinho e a função
                                        // verificar carrinho tambem funciona
    


}

TEST_CASE("Checando o delete de produtos no carrinho"){
        
Cliente c(1548405,"testgmailcom","senha","cliente",120998,98888,"10/10/2000","F","debito");   
    
    Produto copo(1025, "o produto é um copo", 10, 80); 
    
    c.addProdutoCarrinho(copo);

    c.excluirProdutoCarrinho(1025);

    CHECK(c.verificarCarrinho(1025) == false );   // se o teste passar, então o produto não está no carrinho
                                                  // provando que foi deletado
    
}

TEST_CASE("Checando o número de produtos no carrinho"){
        
Cliente c(108885,"testgmailcom","senha","cliente",120998,98888,"10/10/2000","F","debito");   
    
    Produto copo(1025, "o produto é um copo", 10, 80); 
    
    c.addProdutoCarrinho(copo);
    c.addProdutoCarrinho(copo);

    c.excluirProdutoCarrinho(105);

    CHECK(c.verificarCarrinho(1025));   // se true, o produto copo foi encontrado no 
                                        // carrinho mesmo depois da deleção, portanto foram adicionados
                                        // dois copos e deletado um
    


}