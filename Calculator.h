class Calculator {
private:
	Interpreter * interpreter;
	Evaluator * evaluator;
	LinkedList * explist;
public:
	//initialize member variables
	Calculator();
	~Calculator();
	void interpretExp();
	void eval();
};