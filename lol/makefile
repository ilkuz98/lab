all: hello

hello: main.o funkcja1.o funkcja2.o
	g++ main.o funkcja1.o funkcja2.o -o hello

main.o: main.cpp
	g++ -c main.cpp

funkcja1.o: funkcja1.cpp
	g++ -c funkcja1.cpp

funkcja2.o: funkcja2.cpp
	g++ -c funkcja2.cpp

clean:
	rm -rf *.o hello
