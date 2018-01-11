#include "LinkedList.h"
#include "ListNode.h"
#include <vector>
#include <string>
#include <iostream>

int main(int argc, char *argv[]){
	LinkedList myList;

	std::vector<std::string> v;
	v.push_back("here");

	ListNode myNode(v);
	ListNode * nPnt;
	nPnt = &myNode;
	myList.Insert(nPnt);
	ListNode * newPoint = myList.removeAtHead();
	std::vector<std::string> q = newPoint->getElement();
	std::cout<<q[0];
}