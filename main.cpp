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
void helloScreen();
int inputInt();

int main()
{
	l = new List();
	helloScreen();
	showMenu();
	return 0;
}

void showMenu()
{
	char choise;
	do
	{
		system("cls");
		cout << "\t��������� ������ � ����������� �������" << endl;
		cout << "������ ������: " << l->getSize() << endl;
		cout << "1 - �������� �������" << endl;
		cout << "2 - �������� ������" << endl;
		cout << "3 - ����� �������� �� �����" << endl;
		cout << "4 - �������� �������� �� �����" << endl;
		cout << "5 - ��������������" << endl;
		cout << "(ESC) - �����" << endl;
		
		choise = getch();
		
		switch(choise)
		{
			system("CLS");
			case '1':
				addElementFunc();
				break;
			case '2':
				cout << "\n������� ������:" << endl;
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
			case '5':
				fillList();
				break;
			case 27:
				break;
			default:
				cout << "����������� �������, ��������� ����"  << endl;
				getch();
		}
	} while(choise != 27);	
}

void addElementFunc()
{
	cout << "������� ����� ";
	int value = inputInt();
		
	l->addElement(value);
}

void searchElement()
{
	if (l->isEmpty())
	{
		cout << "������ ����";
		return;	
	}
	
	cout << "������� ���� ";
	int key = inputInt();
	
	cout << "������� ��� ������ " << key << " = " << l->get(key);
}

void deleteElem()
{
	if (l->isEmpty())
	{
		cout << "������ ����";
		return;	
	}
	
	cout << "������� ���� ";
	int key = inputInt();
	
	l->remove(key);
}

void fillList()
{
	for (int i = 0; i < 10; i++)
	{
		l->addElement(i);
	}
}

int inputInt()
{
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
            cout << "������� �����!";
            cin.clear();
            cin.get();
            continue;
        }
	}
	
	return value;
}

void helloScreen()
{
    setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������
    cout << "==========�������� ������ �� ����������==========\n\"��������-��������������� ������ � ����������������\" �� ����:\n==========���������� ������������� ������������ ������==========\n";
	cout << "\n\n��������: ������� ��. ���-14 �������� �.�.\n";
	cout << "������������:  ���. ���. ��� ��������� �.�.\n";
	getch();
}
