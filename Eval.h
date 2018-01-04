#ifndef Included_Eval_H
#define Included_Eval_H

#include <vector>
#include <string>
#include "ExpStack.h"

class Eval{
private:
	ExpStack * stack;

	std::vector<std::string> infix;

	std::vector<std::string> postfil;

public:
	Eval();
	~Eval();

	void getExp(std::vector<std::string> expression);

	void infix2postfix();

	void printPostfix();

	int eval();
};

#endif