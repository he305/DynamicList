#ifndef COMP_H
#define COMP_H

class Comp
{
public:
	Comp(int);
	void print();
	Comp* next;
	int getValue();
private:
	int val;
};

#endif
