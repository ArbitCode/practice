output: main.o Tree.o Node.o
	g++ main.o Tree.o Node.o -o output
main.o: ../main/main.cpp
	g++ -c ../main/main.cpp 
Tree.o: ../source/Tree.cpp
	g++ -c ../source/Tree.cpp 
Node.o: ../source/Node.cpp
	g++ -c ../source/Node.cpp 

clean:
	rm *.o output