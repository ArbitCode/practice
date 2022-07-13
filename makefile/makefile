output: main.o Tree.o Linkedlist.o Node.o
	g++-11 main.o Tree.o Linkedlist.o Node.o -o output
main.o: ../main/main.cpp
	g++-11 -c ../main/main.cpp 
Tree.o: ../source/Tree.cpp
	g++-11 -c ../source/Tree.cpp 
Linkedlist.o: ../source/Linkedlist.cpp
	g++-11 -c ../source/Linkedlist.cpp
Node.o: ../source/Node.cpp
	g++-11 -c ../source/Node.cpp 

clean:
	rm *.o output