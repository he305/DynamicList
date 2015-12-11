#include <iostream>
#include <conio.h>

#include "List.h"

using namespace std;

List* l;

void showMenu();
void addElementFunc();

int main()
{
	l = new List();
	showMenu();
	return 0;
}

void showMenu()
{
	int choise;
	do
	{
	cout << "\t=====Temp=====" << endl;
	cout << "Size of list: " << l->getSize() << endl;
	cout << "1 - add element" << endl;
	cout << "2 - show list" << endl;
	cout << "3 - exit" << endl;
	cin >> choise;
	switch(choise)
	{
		case 1:
			addElementFunc();
			break;
		case 2:
			cout << "\nCurrent list:" << endl;
			l->show();
			getch();
			break;
		case 3:
			break;
		default:
			cout << "Unknown command, press any button to continue"  << endl;
			getch();
	}
	system("CLS");
	}while(choise != 3);	
}

void addElementFunc()
{
	cout << "Write a number (integer only) ";
	int value;
	
	while (true)
	{
        if(cin >> value)
        {
        	cin.clear();
        	cin.get();
            break;
        }
        else if(!cin || value != (int)value)
		{
            cout << "Write an integer!";
            cin.clear();
            cin.get();
            continue;
        }
	}
		
	l->addElement(value);
}
