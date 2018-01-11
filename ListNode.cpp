
#include "ListNode.h"

ListNode::ListNode(std::vector<std::string> element){
	this->element=element;
	this->next=NULL;
}

ListNode::~ListNode(){

}

void ListNode::setNext(ListNode * next){
	this->next = next;
}

ListNode* ListNode::getNext(){
	return this->next;
}

std::vector<std::string> ListNode::getElement(){
	return this->element;
}