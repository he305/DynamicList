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
	int get(int key);
	int getSize();
	void remove(int key);
	bool isEmpty();
private:
	int size;
	Comp* getComp(int key);
	Comp* head;
	Comp* tail;
};

#endif
