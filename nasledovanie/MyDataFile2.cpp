#include "MyDataFile2.h"


MyDataFile2::MyDataFile2()
{
	
}
MyDataFile2::MyDataFile2(string i)
{
	a = i;
}
int MyDataFile2::Open()
{
	owo.open("C:\\Users\\AhmedhanovRN\\Downloads\\uwu.txt");
	if (!owo.is_open())
	{
		cout << "Не удалось открыть файл." << endl;
	}
	else
	{
		cout << "I am in." << endl;
	}
	return 0;
}

string MyDataFile2::Read()
{
	if (!owo.is_open()) { cout << "Не удалось открыть файл." << endl; };

	getline(owo, a);

	cout << a << endl;
	return a;
}

void MyDataFile2::Close() { if (!owo.is_open()) { cout << "Не удалось открыть файл." << endl; }; owo.close(); }

int MyDataFile2::Write()
{
	if (!owo.is_open()) { cout << "Не удалось открыть файл." << endl; };

	if (owo.is_open())
	{
		cout << "Сначала закройте файл." << endl;
		return  1;
	}
	out.open("C:\\Users\\AhmedhanovRN\\Downloads\\uwu.txt");
	cout << "Введите текст" << endl;
	string a1;
	cin >> a1;
	if (out.is_open())
	{
		out << a1 << endl;
	}
	out.close();
	return 0;
}

int MyDataFile2::Seek(string b)
{
	if (!owo.is_open()) { cout << "Не удалось открыть файл." << endl; };
	int pos = a.find(b);

	if (pos == -1)
		cout << "Нет" << endl;
	else
		cout << "Есть" << endl;

	return 0;

}

int MyDataFile2::GetPosition(string b)
{
	if (!owo.is_open()) { cout << "Не удалось открыть файл." << endl; };
	int pos = a.find(b);

	if (pos == -1)
		cout << "Не найдено" << endl;
	else
		cout << "Найдено. Позиция  " << pos << endl;

	return 0;
}

int MyDataFile2::GetLength()
{
	if (!owo.is_open()) { cout << "Не удалось открыть файл." << endl; };
	cout << a.length() << endl;
	return 0;
}

MyDataFile2::~MyDataFile2()
{

}