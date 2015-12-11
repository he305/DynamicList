#include "Comp.h"
#include <iostream>

using namespace std;

Comp::Comp(int value)
{
	val = value;
	next = 0;
}

void Comp::print()
{
	cout << val << endl;
}

int Comp::getValue()
{
	return val;
}
