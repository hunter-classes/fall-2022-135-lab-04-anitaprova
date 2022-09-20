OBJECTS=main.o funcs.o
CXX=g++
LDFLAGS=-lm
CXXFLAGS=-Wall -Wpedantic

main: main.o funcs.o
		g++ -o main $(CXXFLAGS) $(LDFLAGS) $(OBJECTS)

main.o: main.cpp funcs.h

funcs.o: funcs.cpp funcs.h

clean:
	rm -f $(OBJECTS)
