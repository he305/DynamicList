#include <iostream>
#include <conio.h>

#include "List.h"

using namespace std;

List* l;

void showMenu();
void addElementFunc();
void searchElement();
void fillList();
void deleteElem();

int main()
{
	l = new List();
	showMenu();
	return 0;
}

void showMenu()
{
	char choise;
	do
	{
		system("cls");
		cout << "\t=====Temp=====" << endl;
		cout << "Size of list: " << l->getSize() << endl;
		cout << "1 - add element" << endl;
		cout << "2 - show list" << endl;
		cout << "3 - search element by key" << endl;
		cout << "4 - del" << endl;
		cout << "9 - autoFill(test)" << endl;
		cout << "(ESC) - exit" << endl;
		
		choise = getch();
		
		switch(choise)
		{
			system("CLS");
			case '1':
				addElementFunc();
				break;
			case '2':
				cout << "\nCurrent list:" << endl;
				l->show();
				getch();
				break;
			case '3':
				searchElement();
				getch();
				break;
			case '4':
				deleteElem();
				getch();
				break;	
			case '9':
				fillList();
				break;
			case 27:
				break;
			default:
				cout << "Unknown command, press any button to continue"  << endl;
				getch();
		}
	}while(choise != 27);	
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

void searchElement()
{
	if (l->isEmpty())
	{
		cout << "List is clear";
		return;	
	}
	
	cout << "Write a key ";
	int key;
	
	while (true)
	{
        if(cin >> key)
        {
        	cin.clear();
        	cin.get();
            break;
        }
        else if(!cin || key != (int)key)
		{
            cout << "Write an integer!";
            cin.clear();
            cin.get();
            continue;
        }
	}
	
	cout << "Element at key " << key << " = " << l->get(key);
}

void deleteElem()
{
	if (l->isEmpty())
	{
		cout << "List is clear";
		return;	
	}
	
	cout << "Write a key ";
	int key;
	
	while (true)
	{
        if(cin >> key)
        {
        	cin.clear();
        	cin.get();
            break;
        }
        else if(!cin || key != (int)key)
		{
            cout << "Write an integer!";
            cin.clear();
            cin.get();
            continue;
        }
	}
	
	l->remove(key);
	cout << "Deleted" << endl;
}

void fillList()
{
	for (int i = 0; i < 10; i++)
	{
		l->addElement(i);
	}
}
