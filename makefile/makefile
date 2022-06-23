output: main.o Tree.o Node.o
	g++ ../binary/main.o ../binary/Tree.o ../binary/Node.o -o ../binary/output
main.o: ../main/main.cpp
	g++ -c ../main/main.cpp -o ../binary/main.o
Tree.o: ../source/Tree.cpp
	g++ -c ../source/Tree.cpp -o ../binary/Tree.o
Node.o: ../source/Node.cpp
	g++ -c ../source/Node.cpp -o ../binary/Node.o

clean:
	rm ../binary/*.o output