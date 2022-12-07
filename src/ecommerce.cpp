//#include "../include/vendedor.hpp"
//#include "../include/cliente.hpp"
//#include "../include/produto.hpp"
#include "../include/ecommerce.hpp"

Ecommerce::Ecommerce(){
    std::vector<Cliente> Clientes;
    std::vector<Vendedor> Vendedores;
}

void Ecommerce::cadastro_cliente(std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo, std::string forma_pag){
   
    int id_Cliente=(int)Clientes.size()+1;
    Cliente clienteCadastrado(id_Cliente, email, senha, nome, cpf, telefone, data_nasc, sexo, forma_pag);
    Clientes.push_back(clienteCadastrado);

}

void Ecommerce::cadastro_vendedor(std::string email, std::string senha, std::string nome, int cpf, int telefone, std::string data_nasc, std::string sexo){

    int id_vendedor=(int)Vendedores.size()+1;
    Vendedor vendedorCadastrado(id_vendedor, email, senha, nome, cpf, telefone, data_nasc, sexo);
    Vendedores.push_back(vendedorCadastrado);

}

void Ecommerce::imprimir_dados(int cpf){

    for(int i=0; i<(int)Clientes.size(); i++){
        Cliente clienteEmAnalise=Clientes.at(i);
        if(clienteEmAnalise.getCPF()==cpf){
            std::cout<<"Nome:"<<clienteEmAnalise.getNome()<<std::endl<<" "<<"Email:"<<clienteEmAnalise.getEmail()<<std::endl<<" ";
            std::cout<<"Telefone:"<<clienteEmAnalise.getTelefone()<<std::endl<<" "<<"Data de Nascimento:"<<clienteEmAnalise.getDataNasc()<<std::endl;
        }
    }
    
    for(int j=0;j<Vendedores.size();j++){
        Vendedor vendedorEmAnalise = Vendedores.at(j);
        if(vendedorEmAnalise.getCPF()==cpf){
            std::cout<<"Nome:"<<vendedorEmAnalise.getNome()<<" "<<"Email:"<<vendedorEmAnalise.getEmail()<<" ";
            std::cout<<"Telefone:"<<vendedorEmAnalise.getTelefone()<<" "<<"Data de Nascimento:"<<vendedorEmAnalise.getDataNasc()<<std::endl;
        }
    }
}


void Ecommerce::imprimir_produtos(){
    
    //Essa função deve imprimir todos os produtos disponiveis na plataforma
    std::cout<<"Abaixo, serão exibidos todos os nossos produtos disponiveis, separados por vendedor"<<std::endl;

    for(int i=0;i<Vendedores.size();i++){
        Vendedor vendedorEmAnalise=Vendedores.at(i);
        std::cout<<"Produtos do vendedor: "<<vendedorEmAnalise.getNome()<<std::endl;
        vendedorEmAnalise.getProdutosVendedor();
    }

}

int Ecommerce::login_cliente(std::string email, std::string senha){

    //o "for" vai percorrer todo o vetor de cliente em busca do cliente com o usuario e senha informado, 
    //caso ele ache, vai retornar o numero da posição do cliente dentro do vetor, caso nao encontre, retornará 0 
    //pois 0 é uma posição reservada no vetor para esse tipo de situação

    for(int i=0; i<(int)Clientes.size(); i++){
        Cliente clienteEmAnalise=Clientes.at(i);
        if(clienteEmAnalise.getEmail()==email&&clienteEmAnalise.getSenha()==senha){
            return i+1;
        }
    }
    return 0;
}

int Ecommerce::login_vendedor(std::string email, std::string senha){

    //o "for" vai percorrer todo o vetor de vendedor em busca do cliente com o usuario e senha informado, 
    //caso ele ache, vai retornar o numero da posição do vendedor dentro do vetor, caso nao encontre, retornará 0 
    //pois 0 é uma posição reservada no vetor para esse tipo de situação

    for(int i=0; i<(int)Vendedores.size(); i++){
        Vendedor vendedorEmAnalise=Vendedores.at(i);
        if(vendedorEmAnalise.getEmail()==email&&vendedorEmAnalise.getSenha()==senha){
            return i+1;
        }
    }
    return 0;
}