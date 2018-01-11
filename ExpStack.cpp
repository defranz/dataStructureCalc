#include "ExpStack.h"

ExpStack::ExpStack() {
	std::vector<std::string> v;
	this->stack = v;
}

ExpStack::~ExpStack() {

}

void ExpStack::push(std::string item){
	this->stack.insert(this->stack.begin(),item);
}

std::string ExpStack::pop(){
	std::string item = this->stack[0];
	this->stack.erase (this->stack.begin());
	return item;
}

int ExpStack::getSize(){
	this->stack.size();
}