#include <iostream>
//#include "ecommerce.hpp"

class Usuario{
protected:
    std::string _senha;
    std::string _nome;
    int _cpf;
    int _tel;
    std::string _data_nasc;
    std::string _email;  
    std::string _sexo;
public:
    Usuario();
    std::string getEmail();
    std::string getSenha();
    std::string getNome();
    int getCPF();
    int getTelefone();
    std::string getDataNasc();
    std::string getSexo();

    
};


