
#include <std::vector>
#include <std::string>
class ExpQueue{
private:
	std::vector<std::string> queue;
public:
	ExpQueue();

	~ExpQueue();

	void enqueue();

	std::string dequeue();

};