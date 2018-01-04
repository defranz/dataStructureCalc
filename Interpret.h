#ifndef Included_Interpret_H
#define Included_Interpret_H

#include <string>
#include <vector>
#include "ExpQueue.h"
#include "ExpStack.h"
#include "LinkedList.h"
class Interpret {
private:
	ExpQueue * expqueue;
	ExpStack * expstack;
public:
	/* a linked list of valid expressions */
	LinkedList * explist;

	Interpret();
	//initializer

	~Interpret();

	void getExp();

	void parse();

	std::vector<std::string> tokenize( std::string expression);

	bool isBalanced(std::vector<std::string> expression);

	LinkedList * getExpList();
};

#endif