
#include "LinkedList.h"

LinkedList::LinkedList(){
	this->head=NULL;
	this->tail=NULL;
}

void LinkedList::Insert(ListNode * node){
	if(this->head==NULL){
		head=node;
	}
	else if(this->head!=NULL && this->tail==NULL){
		this->head->setNext(node);
		this->tail=node;
	}
	else {
		ListNode * next;
		next = this->head;
		while(next!=NULL){
			next = next->getNext();
		}
		next->setNext(node);
		this->tail=node;
	}
}

LinkedList::~LinkedList()
{

}

ListNode * LinkedList::removeAtHead(){
	return this->head;
}