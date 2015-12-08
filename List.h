#ifndef LIST_H
#define LIST_H

#include "Comp.h"

class List
{
public:
	List();
	~List();
	void addElement(int);
private:
	bool isEmpty();
	int size;
	Comp* head;
	Comp* tail;
};

#endif
