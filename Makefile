all: clean cliente.o ecommerce.o endereco.o produto.o usuario.o vendedor.o
	g++ cliente.o src/cliente.cpp ecommerce.o src/ecommerce.cpp endereco.o src/endereco.cpp produto.o src/produto.cpp usuario.o src/usuario.cpp vendedor.o src/vendedor.cpp -o main
	main
	make clean

cliente.o: include/cliente.hpp
	g++ -c src/cliente.cpp

ecommerce.o: include/ecommerce.hpp
	g++ -c src/ecommerce.cpp

endereco.o: include/endereco.hpp
	g++ -c src/endereco.cpp

produto.o: include/produto.hpp
	g++ -c src/produto.cpp

usuario.o: include/usuario.hpp
	g++ -c src/usuario.cpp

vendedor.o: include/vendedor.hpp
	g++ -c src/vendedor.cpp

test: clean cliente.o ecommerce.o endereco.o produto.o usuario.o vendedor.o
	g++ cliente.o tests/cliente_test.cpp ecommerce.o tests/ecommerce_test.cpp endereco.o tests/endereco_test.cpp produto.o tests/produto_test.cpp usuario.o tests/usuario_test.cpp vendedor.o tests/vendedor_test.cpp -o test
	test
	clean

clean: 
	del cliente.o
	del ecommerce.o
	del endereco.o
	del produto.o
	del usuario.o
	del vendedor.o
	