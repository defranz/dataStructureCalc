Calculated: Calculator.o Interpret.o Eval.o LinkedList.o ListNode.o ExpQueue.o ExpStack.o Main.o
	g++ Calculator.o Interpret.o Eval.o LinkedList.o ListNode.o ExpQueue.o ExpStack.o Main.o -o Calculated
ExpStack.o: ExpStack.cpp ExpStack.h
	g++ -c ExpStack.cpp
ExpQueue.o: ExpQueue.cpp ExpQueue.h
	g++ -c ExpQueue.cpp
ListNode.o: ListNode.cpp ListNode.h
	g++ -c ListNode.cpp
LinkedList.o: LinkedList.cpp LinkedList.h ListNode.h
	g++ -c LinkedList.cpp
Eval.o: Eval.cpp Eval.h ExpStack.h
	g++ -c Eval.cpp
Interpret.o: Interpret.cpp Interpret.h ExpQueue.h ExpStack.h LinkedList.h
	g++ -c Interpret.cpp
Calculator.o: Calculator.cpp Calculator.h Interpret.h Eval.h LinkedList.h  
	g++ -c Calculator.cpp
Main.o: Main.cpp Calculator.h Interpret.h Eval.h LinkedList.h ListNode.h ExpQueue.h ExpStack.h
	g++ -c Main.cpp
clean:
	rm -f *.o
	rm Calculated
run:  
	./Calculated