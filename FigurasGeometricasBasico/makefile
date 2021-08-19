all: compilar
compilar: rectangulo triangulo circulo view main 
		g++ -o 	Salida Rectangulo.o Triangulo.o Circulo.o View.o Main.o 
rectangulo: Rectangulo.cpp Rectangulo.h
		g++ -c Rectangulo.cpp
triangulo: Triangulo.cpp Triangulo.h
		g++ -c Triangulo.cpp
circulo: Circulo.cpp Circulo.h
		g++ -c Circulo.cpp
view: View.cpp View.h
		g++ -c View.cpp
main: Main.cpp Rectangulo.h Triangulo.h Circulo.h
		g++ -c Main.cpp
