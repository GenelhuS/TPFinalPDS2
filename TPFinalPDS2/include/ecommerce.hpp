#include <iostream>
#include <vector>

class Ecommerce{

 std::vector<std::string> Cliente;
 std::vector<std::string> Vendedor;

public:
    void cadastro_cliente();
    void cadastro_vendedor();
    void imprimir_produtos();
    void imprimir_dados();
    void montar_carrinho(std::vector<std::string> Cliente);
    void Cadastrar_produto();
    void deletar_produto();
    void login_usuario();

};