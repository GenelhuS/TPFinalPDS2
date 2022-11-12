#include <iostream>

class Usuario{
    std::string nome;
    int cpf;
    int tel;
    std::string data_nasc;
    std::string email;  
public:
    Usuario();

   std::string login_usuario();
   std::string cadastro_usuario();
};


