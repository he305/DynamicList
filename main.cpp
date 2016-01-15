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
		cout << "\tИнтерфейс работы с односвязным списком" << endl;
		cout << "Размер списка: " << l->getSize() << endl;
		cout << "1 - Добавить элемент" << endl;
		cout << "2 - Показать список" << endl;
		cout << "3 - Поиск элемента по ключу" << endl;
		cout << "4 - Удаление элемента по ключу" << endl;
		cout << "5 - Автозаполнение" << endl;
		cout << "(ESC) - выход" << endl;
		
		choise = getch();
		
		switch(choise)
		{
			system("CLS");
			case '1':
				addElementFunc();
				break;
			case '2':
				cout << "\nТекущий список:" << endl;
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
				cout << "Неизвестная команда, повторите ввод"  << endl;
				getch();
		}
	} while(choise != 27);	
}

void addElementFunc()
{
	cout << "Введите число ";
	int value = inputInt();
		
	l->addElement(value);
}

void searchElement()
{
	if (l->isEmpty())
	{
		cout << "Список пуст";
		return;	
	}
	
	cout << "Введите ключ ";
	int key = inputInt();
	
	cout << "Элемент под ключом " << key << " = " << l->get(key);
}

void deleteElem()
{
	if (l->isEmpty())
	{
		cout << "Список пуст";
		return;	
	}
	
	cout << "Введите ключ ";
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
            cout << "Write an integer!";
            cin.clear();
            cin.get();
            continue;
        }
	}
	
	return value;
}

void helloScreen()
{
    setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали
    cout << "==========Курсовая работа по дисциплине==========\n\"Объектно-ориентированный анализ и программирование\" на тему:\n==========Реализация динамического односвязного списка==========\n";
	cout << "\n\nВыполнил: студент гр. ДБИ-14 Чернышов С.О.\n";
	cout << "Руководитель:  Доц. каф. ПМИ Михайлова Т.В.\n";
	getch();
}
