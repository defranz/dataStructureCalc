
#include "ExpQueue.h"

ExpQueue::ExpQueue(){
	std::vector<std::string> v;
	this->queue = v;
}

ExpQueue::~ExpQueue(){

}

void ExpQueue::enqueue(std::string item){
	this->queue.push_back(item);
}

std::string ExpQueue::dequeue(){
	std::string item;
	item = this->queue[0];
	this->queue.erase (this->queue.begin());
	return item;
}

int ExpQueue::getSize()
{
	return this->queue.size();
}
