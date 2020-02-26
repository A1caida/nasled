#include <iostream>
#include "File.h"
#include "MyDataFile1.h"
#include "MyDataFile2.h"

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
	string k = "010";
	MyDataFile1 n(k); MyDataFile2 l;
	string b,j;
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
			string a;
			cout << "С каким файлом работаем?" << endl; 
			cin >> a;
			n.Open();
			n.Read();
			MyDataFile1 n(n.Read());
		//	n = n.Read();
			n.Close();
			n.Open();
			n.Read();
			cout <<  k << endl;
		};
		break;


		}


	} while (e!=9);





















	l.Open();
	n.Read();
	n.Close();
	cin >> b;
	n.Seek(b);
	n.GetLength();
}

