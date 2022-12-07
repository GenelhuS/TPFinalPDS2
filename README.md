# TPFinalPDS2
Repositório criado para armazenar o projeto de um sistema desenvolvido para o trabalho final da disciplina de PDS II.

## Autores
- Anne Danielle Sales Saraiva 
- Miguel Sousa Morais
- Saulo Genelhu Matos

## Descricao:
 O proposto trabalho baseia-se em um código que gerencia uma plataforma de vendas online (e-commerce), tal loja funciona num formato de marketplace (venda dos mais variados produtos). O trabalho propõe previamente que o usuário consiga utilizar um carrinho, com diversos produtos, formas de pagamento e demais outras funcionalidades…

 Abaixo, o link para um fluxograma com o esquema de funcionamento do programa.
 [Fluxograma](https://app.diagrams.net/#G187UrcdvRXU-SZqLq82HMT6UUiYznhJBy)

**User histories utilizadas:**

a) Eu como possível cliente gostaria de ver detalhes dos produtos para fazer uma compra mais consciente;  
i-Ver descrição completa do produto;  
ii-Quantidade do produto em estoque;  
iii-Inserir produto e quantidade no carrinho;  
iv-Consultar disponibilidade de frete;  

b)Eu como futuro usuário gostaria de criar um perfil no site para guardar minhas informações e preferências;  
i-Login (usuário e senha);  
ii-Visualização e inserção de informações essenciais(Nome, Endereço, CPF, Telefone);  
iii-Salvar o carrinho com minhas preferências de compras e quantidades;  

c)Eu como cliente da loja, gostaria de montar um carrinho de produtos para organizar meu pedidos  
i-Inserir produtos no carrinho;  
ii-Alterar quantidade de produtos no carrinho;  
iii-Salvar o carrinho para futuras edições/uso;  

d)Eu como cliente da loja, gostaria de montar um pedido para finalizar minha compra;  
i-Quais produtos e suas quantidades, respectivamente;  
ii-Recebedor do produto e endereço de entrega;  
iii-Método de pagamento(Cartão, pix, boleto);  


e)Eu como vendedor gostaria de visualizar e editar o meu estoque de produtos para controlar minhas vendas  
i-Visualizar quais produtos e quantidades que estão disponíveis;  
ii-Editar quantidade de produtos já existentes;  
iii-Adicionar ou remover um produto;  

## Diagrama de classes
Segue o link para acessar o nosso diagrama de classes de forma interativa:  

[Clique aqui para acessar o diagrama de classes](https://app.diagrams.net/#G1bF9o_KUhCVYBYQYlOPGzxsOjcseLsnDg)

## Como compilar o codigo

Clone o repositorio em sua máquina e digite **make** dentro da pasta do projeto.

## Como executar os testes

Clone o repositorio em sua máquina e digite um dos comandos abaixo, cada um, refere-se ao teste automatizado de uma classe.  

- make testCliente
- make testEcommerce
- make testEndereco
- make testProduto
- make testUsuario
- make testVendedor
