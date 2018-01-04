#ifndef Included_ExpQueue_H
#define Included_ExpQueue_H
#include <vector>
#include <string>
class ExpQueue{
private:
	std::vector<std::string> queue;
public:
	ExpQueue();

	~ExpQueue();

	void enqueue();

	std::string dequeue();

};

#endif