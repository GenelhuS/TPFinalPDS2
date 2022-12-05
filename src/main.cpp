#include <iostream>
#include<ecommerce.hpp>
#include<usuario.hpp>
#include<produto.hpp>
#include<endereco.hpp>
#include<cliente.hpp>
#include<vendedor.hpp>


void main(){
    int opcao;
    Ecommerce ecommerce = Ecommerce();
    std::cout<<"Bem vindo ao sistema de loja virtual Ecommerce"<<std::endl;
    std::cout<<"Digite 1 para criar sua conta ou 2 para se cadastrar";
    while(std::cin>>opcao){
        switch(opcao){
            //cadastro na plataforma
            case 1:{
                std::string email; std::string senha; std::string nome; int cpf; int telefone; std::string data_nasc; std::string sexo; std::string forma_pag; 
                int controleMenuCadastro;

                std::cout<<"Digite 1 para cadastrar cliente e 2 para cadastrar vendedor";

                switch(controleMenuCadastro){
                    case 1:{
                        std::cout<<"Digite o email e a senha:"<<std::endl;
                        std::cin>>email>>senha;
                        std::cout<<"Digite o nome:"<<std::endl;
                        std::cin>>nome;
                        std::cout<<"Digite o cpf:"<<std::endl;
                        std::cin>>cpf;
                        std::cout<<"Digite o telefone:"<<std::endl;
                        std::cin>>telefone;
                        std::cout<<"Digite a data de nascimento:"<<std::endl;
                        std::cin>>data_nasc;
                        std::cout<<"Digite o sexo:"<<std::endl;
                        std::cin>>sexo;
                        std::cout<<"Digite a sua forma de pagamento preferencial(chave pix ou numero do cartao de credito):"<<std::endl;
                        std::cin>>forma_pag;

                        ecommerce.cadastro_cliente(email,senha,nome,cpf,telefone,data_nasc,sexo,forma_pag);
                        std::cout<<"Cadastro do cliente finalizado"<<std::endl;
                    }
                    break;

                    case 2:{
                        std::cout<<"Digite o email e a senha:"<<std::endl;
                        std::cin>>email>>senha;
                        std::cout<<"Digite o nome:"<<std::endl;
                        std::cin>>nome;
                        std::cout<<"Digite o cpf:"<<std::endl;
                        std::cin>>cpf;
                        std::cout<<"Digite o telefone:"<<std::endl;
                        std::cin>>telefone;
                        std::cout<<"Digite a data de nascimento:"<<std::endl;
                        std::cin>>data_nasc;
                        std::cout<<"Digite o sexo:"<<std::endl;
                        std::cin>>sexo;

                        ecommerce.cadastro_vendedor(email,senha,nome,cpf,telefone,data_nasc,sexo);
                        std::cout<<"Cadastro do vendedor finalizado"<<std::endl;
                    }
                    break;
                }
            }break;

            //login na plataforma, como cliente ou vendedor
            case 2:{

            }
        }
    }
}