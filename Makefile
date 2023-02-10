# spring 2023 -  Lab 2B
# Achapko200
# description: multi file 

main: main.o funcs.o 
	g++ -o main main.o funcs.o 
main.o: main.cpp funcs.h 
	g++ -c main.cpp
funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

test: main
	./main 

clean:
	rm -f main.o funcs.o main