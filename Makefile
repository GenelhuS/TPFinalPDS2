all: clean triangulo.o
	g++ triangulo.o src/triangulo.cpp -o main
	main
	make clean

triangulo.o: include/triangulo.hpp
	g++ -c src/triangulo.cpp

teste: clean triangulo.o
	g++ triangulo.o triangulo_test.cpp -o teste
	teste
	clean

clean: 
	del triangulo.o
	