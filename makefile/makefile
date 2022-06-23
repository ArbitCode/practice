output: main.o Tree.o Node.o
	g++ main.o Tree.o Node.o -o output
main.o: ../main/main.cpp
	g++ -c ../main/main.cpp
Tree.o: ../source/Tree.cpp ../header/Tree.h
	g++ -c ../source/Tree.cpp
Node.o: ../source/Node.cpp ../header/Node.h
	g++ -c ../source/Node.cpp

clean:
	rm *.o output