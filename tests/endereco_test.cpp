#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/endereco.hpp"
#include "../third_party/doctest.h"
using namespace std;


TEST_CASE("testando as informacoes do endereco"){
        
Endereco teste(31485611,"Brasil",1009,"Avenida dos testes");  
  
    CHECK_EQ(teste.getPais() , "Brasil");
    CHECK_EQ(teste.getCep() , 31485611);
    CHECK_EQ(teste.getNum() , 1009);
    CHECK_EQ(teste.getRua() , "Avenida dos testes");     // se todas as asserções passam, construtor
                                                         // e gets funcionam corretamente
}