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

	if (!owo.is_open()) { a = "0"; };

	getline(owo, a);

	cout << a << endl;
	return a;
}

void MyDataFile2::Close() { owo.close(); }

int MyDataFile2::Write()
{
	if (owo.is_open())
	{
		cout << "Сначала закройте файл." << endl;
		return  1;
	}
	out.open("C:\\Users\\AhmedhanovRN\\Downloads\\uwu.txt");
	if (out.is_open())
	{
		out << "Hello World!" << endl;
	}
	return 0;
}

int MyDataFile2::Seek(string b)
{
	//if (a == "") return 1;
	int pos = a.find(b);

	if (pos == -1)
		cout << "net" << endl;
	else
		cout << "yes" << endl;

	return 0;

}

int MyDataFile2::GetPosition(string b)
{
	int pos = a.find(b);

	if (pos == -1)
		cout << "net" << endl;
	else
		cout << "yes " << pos << " simvol position" << endl;

	return 0;
}

int MyDataFile2::GetLength()
{
	cout << a.length() << endl;
	return 0;
}

MyDataFile2::~MyDataFile2()
{

}