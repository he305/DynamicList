#ifndef LIST_H
#define LIST_H

#include "Comp.h"
#include <iostream>

class List
{
public:
	List();
	~List();
	void addElement(int value);
	void show();
	int searchByKey(int key);
	int getSize();
	bool isEmpty();
private:
	int size;
	Comp* head;
	Comp* tail;
};

#endif
