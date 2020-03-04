#include <iostream>
#include "File.h"
#include "MyDataFile1.h"
#include "MyDataFile2.h"
#include "Folder.h"

using namespace std;

int check(int e)
{
	while (!(cin >> e) || (cin.peek() != '\n'))
	{
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "Некоректные данные" << endl;
	}
	while ((e==1)||(e==2))
	{
		cout << "Некоректные данные" << endl;
	}
	return e;
}

int main()
{
	setlocale(LC_ALL, "Russian");		
	MyDataFile1 n(""); MyDataFile2 l("");
	string b,j;
	Folder f;
	int e;
	do
	{
		system("pause");
		system("cls");
		cout << "Введите номер выбора : " << endl;
		cout << "1)Открыть файл.  " << endl;
		cout << "2)Закрыть файл." << endl;
		cout << "3)Найти слово или букву в файле." << endl;
		cout << "4)Перенести данные из файла в переменную." << endl;
		cout << "5)Перенести данные из переменной в файл." << endl;
		cout << "6)Найти позицию буквы или цифры в файле." << endl;
		cout << "7)Найти длину файла." << endl;
		cout << "8)Записать файлы в 'папку'." << endl;
		cout << "9)Выйти из программы.  " << endl;
		while (!(cin >> e) || (cin.peek() != '\n'))
		{
			cin.clear();
			cin.ignore((numeric_limits<streamsize>::max)(), '\n');
			cout << "Введите цифру от 1 до 4: " << endl;
		}
		switch (e)
		{
		case 1:
		{
			int a;
			cout << "С каким файлом работаем?" << endl; 
			cin >> a;
			if (a == 1)
			{
				n.Open();
			}
			else if (a == 2)
			{
				l.Open();

			}
			else
			{
				cout << "Введите правильное значение" << endl;
			}

		};
		break;
		case 2:
		{
			int a;
			cout << "С каким файлом работаем?" << endl;
			cin >> a;
			if (a == 1)
			{
				n.Close();
			}
			else if (a == 2)
			{
				l.Close();

			}
			else
			{
				cout << "Введите правильное значение" << endl;
			}

		};
		break;
		case 3:
		{
			int a;
			cout << "С каким файлом работаем?" << endl;
			cin >> a;
			if (a == 1)
			{
				string uwu;
				 
				cout << "Напишите слово или букву" << endl;
				cin >> uwu;
				n.Seek(uwu);
			}
			else if (a == 2)
			{
				string uwu;
				cout << "Напишите слово или букву" << endl;
				cin >> uwu;
				l.Seek(uwu);
			}
			else
			{
				cout << "Введите правильное значение" << endl;
			}

		}; break;
		case 4:
		{
			int a;
			cout << "С каким файлом работаем?" << endl;
			cin >> a;
			if (a == 1)
			{
				b=n.Read();
			}
			else if (a == 2)
			{
				j=l.Read();

			}
			else
			{
				cout << "Введите правильное значение" << endl;
			}

		};
		break;
		case 5:
		{

			int a;
			cout << "С каким файлом работаем?" << endl;
			cin >> a;
			if (a == 1)
			{
				n.Write();
			}
			else if (a == 2)
			{
				l.Write();

			}
			else
			{
				cout << "Введите правильное значение" << endl;
			}

		}break;
		case 6:
		{
			int a;
			cout << "С каким файлом работаем?" << endl;
			cin >> a;
			if (a == 1)
			{
				string uwu;
				cout << "Напишите слово или букву" << endl;
				cin >> uwu;
				n.GetPosition(uwu);
			}
			else if (a == 2)
			{
				string uwu;
				cout << "Напишите слово или букву" << endl;
				cin >> uwu;
				l.GetPosition(uwu);
			}
			else
			{
				cout << "Введите правильное значение" << endl;
			}


		}; break;
		case 7:
		{
			int a;
			cout << "С каким файлом работаем?" << endl;
			cin >> a;
			if (a == 1)
			{
				n.GetLength();
			}
			else if (a == 2)
			{
				l.GetLength();

			}
			else
			{
				cout << "Введите правильное значение" << endl;
			}

		}; break;
		case 8:
		{
			int a;
			cout << "С каким файлом работаем?" << endl;
			cin >> a;
			if (a == 1)
			{
				f.owo(b);
				f.out();
			}
			else if (a == 2)
			{
				f.lol(j);

			}
			else
			{
				cout << "Введите правильное значение" << endl;
			}

		}; break;
		}


	} while (e!=9);
}

