#include "Interpret.h"
#include "Eval.h"
#include "LinkedList.h"
class Calculator {
private:
	Interpret * interpreter;
	Eval * evaluator;
	LinkedList * explist;
public:
	//initialize member variables
	Calculator();
	~Calculator();
	void interpretExp();
	void eval();
};