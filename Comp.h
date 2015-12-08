#ifndef COMP_H
#define COMP_H

class Comp
{
public:
	Comp(int);
	void print();
	Comp* next;
private:
	int val;
};

#endif
