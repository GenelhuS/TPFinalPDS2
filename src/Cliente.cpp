#include <iostream>
#include <vector>
#include "../include/usuario.hpp"
#include "../include/produto.hpp"
#include "../include/cliente.hpp"
using namespace std;

Cliente::Cliente(int id_Cliente, std::string email, std::string senha,
     std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo,
         std::string forma_pag) : Usuario( senha, nome, cpf, telefone, data_nasc, email, sexo){
   
    
     _id_Cliente=id_Cliente;
     _form_pag=forma_pag; 
     _carrinho = {};
}



void Cliente::imprimirCarrinho(){

   for(list<Produto>::iterator i = _carrinho.begin() ; i != _carrinho.end() ; i++){

        int count = 1;  
        cout << "Item " << count << " :" << i->getDescricao() << endl;

   }

}

void Cliente::addProdutoCarrinho(Produto produto){

     _carrinho.push_back(produto);

}

void Cliente::excluirProdutoCarrinho(int id){ // recebe a id do produto para localizar e excluir

     for(list<Produto>::iterator i = _carrinho.begin() ; i != _carrinho.end() ; i++){

          if(i->getId() == id){

               _carrinho.erase(i);
               break;

          }

   }

}

bool Cliente::verificarCarrinho(int id){

      for(list<Produto>::iterator i = _carrinho.begin() ; i != _carrinho.end() ; i++){

          if(i->getId() == id){

               return true;

          }
     }
}