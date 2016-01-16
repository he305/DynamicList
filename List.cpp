#include "List.h"

List::List()
{
	head = 0;
	tail = 0;
	size = 0;	
}

List::~List()
{
	while(head != 0)
	{
		Comp* temp = head->next;
		delete head;
		head = temp;
	}
}

void List::addElement(int value)
{
	Comp* c = new Comp(value);
	if (isEmpty())
	{
		head = c;
		tail = c;
	}
	else
	{
		tail->next = c;
		tail = c;
	}
	size++;
}

void List::show()
{
	Comp* temp = head;
	
	while(temp != 0)
	{
		temp->print();
		temp = temp->next;
	}
}

int List::get(int key)
{
	if (key >= size || key < 0)
	{
		std::cout << "����� �� ������� ������" << std::endl;
		return 0;
	}
	
	int tempKey = 0;
	Comp* tempComp = head;
	
	while(tempKey != key)
	{
		tempComp = tempComp->next;
		tempKey++;
	}
	
	return tempComp->getValue();
}

void List::remove(int key)
{
	if (key >= size || key < 0)
	{
		std::cout << "����� �� ������� ������" << std::endl;
		return;
	}
	
	Comp* del;
	
	if (key == 0)
	{
		del = head;
		head = head->next;
	}
	else 
	{
		Comp* prev = getComp(key-1);
		del = prev->next;
		prev->next = del->next;
	}
	
	size--;
	delete del;
	std::cout << "�������" << std::endl;
}

Comp* List::getComp(int key)
{
	if (key >= size || key < 0)
	{
		std::cout << "����� �� ������� ������" << std::endl;
		return 0;
	}
	
	int tempKey = 0;
	Comp* tempComp = head;
	
	while(tempKey != key)
	{
		tempComp = tempComp->next;
		tempKey++;
	}
	
	return tempComp;
}

bool List::isEmpty()
{
	return (size == 0);
}

int List::getSize()
{
	return size;
}
