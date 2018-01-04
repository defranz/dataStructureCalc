#ifndef Included_LinkedList_H
#define Included_LinkedList_H
#include "ListNode.h"

class LinkedList{
public:
	ListNode * head;

	ListNode * tail;

	LinkedList();

	~LinkedList();

	void Insert(ListNode *node);

	ListNode * removeAtHead();

};

#endif