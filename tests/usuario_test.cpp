#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/usuario.hpp"
#include "../third_party/doctest.h"
using namespace std;


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