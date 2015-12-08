#include "List.h"

List::List()
{
	head = 0;
	tail = 0;
	size = 0;	
}

List::~List()
{
	
}

void List::addElement(int value)
{
	Comp* c = new Comp(value);
	if (isEmpty())
	{
		head = c;
	}
	else
	{
		tail->next = c;
		tail = c;  
	}
}

bool List::isEmpty()
{
	return (size == 0);
}
