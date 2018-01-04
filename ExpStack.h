
#include <std::vector>
#include <std::string>

class ExpStack{
private:
	std::vector<std::string> stack;
public:
	ExpStack();
	
	~ExpStack();

	void push();

	std::string pop();
};