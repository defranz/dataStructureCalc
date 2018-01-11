#ifndef Included_ExpStack_H
#define Included_ExpStack_H
#include <vector>
#include <string>

class ExpStack {

private:

	std::vector<std::string> stack;

public:
	ExpStack();

	~ExpStack();

	void push(std::string item);

	std::string pop();

	int getSize();
};
#endif