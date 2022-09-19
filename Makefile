main: main.o funcs.o
		g++ -o main main.o funcs.o

main.o: main.cpp funcs.cpp
