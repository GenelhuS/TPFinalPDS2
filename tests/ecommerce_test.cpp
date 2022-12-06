#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/ecommerce.hpp"
#include "../third_party/doctest.h"
using namespace std;

TEST_CASE("testando se o ecommerce foi criado alem das funcoes cadastro cliente e login cliente"){

    Ecommerce comercio = Ecommerce();
    comercio.cadastro_cliente("testgmailcom","senha","cliente",120998,98888,"10/10/2000","F","debito");   
    comercio.cadastro_cliente("testhotmailcom","senha","cliente",120998,98888,"10/10/2000","F","debito");   
    
    CHECK_EQ(comercio.login_cliente("testgmailcom","senha") , 1 );   
    CHECK_EQ(comercio.login_cliente("testhotmailcom","senha") , 2 );   

}

TEST_CASE("testando as funções cadastro vendedor e login vendedor"){
        

    Ecommerce comercio = Ecommerce();
    comercio.cadastro_vendedor("testgmailcom","senha","vendedor",120998,98888,"10/10/2000","F");   
    comercio.cadastro_vendedor("testhotmailcom","senha1","vendedor2",120998,98888,"10/10/2006","M");   
    
    CHECK_EQ(comercio.login_vendedor("testgmailcom","senha") , 1 );   
    CHECK_EQ(comercio.login_vendedor("testhotmailcom","senha1") , 2 );   

}
/*
TEST_CASE("Checando o delete de produtos no carrinho"){
        
        Ecommerce comercio = Ecommerce();

        comercio.cadastro_vendedor("testgmailcom","senha","vendedor",120998,98888,"10/10/2000","F");   
        comercio.cadastro_vendedor("testhotmailcom","senha1","vendedor2",120998,98888,"10/10/2006","M");   
        //v.addProdutoEstoque("Caneta bic vermelha", 8 ,26);
       comercio.imprimir_produtos();
       CHECK(0);
        
}
/*
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
*/