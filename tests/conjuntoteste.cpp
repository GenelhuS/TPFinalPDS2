#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/usuario.hpp"
#include "../include/endereco.hpp"
#include "../include/vendedor.hpp"
#include "../include/cliente.hpp"
#include "../include/produto.hpp"
#include "../include/ecommerce.hpp"
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

   // c.imprimirCarrinho();

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

TEST_CASE("testando as informacoes do endereco"){
        
Endereco teste(31485611,"Brasil",1009,"Avenida dos testes");  
  
    CHECK_EQ(teste.getPais() , "Brasil");
    CHECK_EQ(teste.getCep() , 31485611);
    CHECK_EQ(teste.getNum() , 1009);
    CHECK_EQ(teste.getRua() , "Avenida dos testes");     // se todas as asserções passam, construtor
                                                         // e gets funcionam corretamente
}

TEST_CASE("testando o construtor e gets do produto"){
        
Produto quadro(508,"Quadro Van Gogh",100,300);  
  
    CHECK_EQ(quadro.getId() , 508);
    CHECK_EQ(quadro.getDescricao() , "Quadro Van Gogh");
    CHECK_EQ(quadro.getTam() , 100);
    CHECK_EQ(quadro.getPeso() , 300);     // se todas as asserções passam, construtor
                                                         // e gets funcionam corretamente

}

TEST_CASE("testando se o Usuario foi criado"){
        
Usuario u("senha","usuario",120998,98888,"10/10/2000", "emaildousuario","M");   
    
    CHECK(u.getNome() == "usuario" );   // se true, o usuario foi criado e o nome bate

}

TEST_CASE("testando as informacoes do usuario"){
        
    Usuario u("senha","usuario",120998,98888,"10/10/2000", "emaildousuario","M");   
    CHECK_EQ(u.getSenha() , "senha");
    CHECK_EQ(u.getNome() , "usuario");
    CHECK_EQ(u.getCPF() , 120998);
    CHECK_EQ(u.getTelefone() , 98888);     CHECK_EQ(u.getNome() , "usuario");
    CHECK_EQ(u.getDataNasc() , "10/10/2000");
    CHECK_EQ(u.getEmail() , "emaildousuario"); 
    CHECK_EQ(u.getSexo() , "M");                         // se todas as asserções passam, construtor
                                                         // e gets funcionam corretamente
}

TEST_CASE("testando se o vendedor foi criado"){
        
    Vendedor v(28905,"testgmailcom","senha","vendedor",340257999,996507228,"19/01/2005","F");   
    
    CHECK(v.getNome() == "vendedor" );   // se true, o vendedor foi criado e o nome bate
    CHECK_EQ(v.getVendedor() , 28905);     // se true a função get vendedor retorna a id correta
}
