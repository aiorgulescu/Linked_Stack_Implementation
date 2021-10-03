postfix: postfix.o Node/Node.o LinkedStack/LinkedStack.o PostFixCalculator/PostFixCalculator.o 
	g++ -std=c++11 postfix.o Node/Node.o LinkedStack/LinkedStack.o PostFixCalculator/PostFixCalculator.o -o postfix

postfix.o: postfix.cpp
	g++ -std=c++11 -c postfix.cpp

Node.o: Node/Node.h Node/Node.cpp
	g++ -std=c++11 -c Node/Node.cpp

LinkedStack.o: LinkedStack/LinkedStack.h LinkedStack/LinkedStack.cpp LinkedStack/StackInterface.h
	g++ -std=c++11 -c LinkedStack/LinkedStack.cpp

PostFixCalculator.o: PostFixCalculator/PostFixCalculator.h PostFixCalculator/PostFixCalculator.cpp
	g++ -std=c++11 -c PostFixCalculator/PostFixCalculator.cpp

clean:
	rm Node/Node.o 
	rm LinkedStack/LinkedStack.o
	rm PostFixCalculator/PostFixCalculator.o
	rm postfix.o
	rm postfix


