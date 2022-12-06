#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/produto.hpp"
#include "../third_party/doctest.h"
using namespace std;


TEST_CASE("testando o construtor e gets do produto"){
        
Produto quadro(508,"Quadro Van Gogh",100,300);  
  
    CHECK_EQ(quadro.getId() , 508);
    CHECK_EQ(quadro.getDescricao() , "Quadro Van Gogh");
    CHECK_EQ(quadro.getTam() , 100);
    CHECK_EQ(quadro.getPeso() , 300);     // se todas as asserções passam, construtor
                                                         // e gets funcionam corretamente

}