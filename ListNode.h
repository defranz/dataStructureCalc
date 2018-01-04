#ifndef Included_ListNode_H
#define Included_ListNode_H
#include <vector>
#include <string>

class ListNode{
private:
	std::vector<std::string> element;
	ListNode * next;
public:
	ListNode();
	~ListNode();

};

#endif