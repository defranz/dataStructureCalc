class Evaluator{
private:
	ExpStack * stack;

	std::vector<std::string> infix;

	std::vector<std::string> postfil;

public:
	Evaluator();
	~Evaluator();

	void getExp(std::vector<std::string> expression);

	void infix2postfix();

	void printPostfix();

	int eval()
}