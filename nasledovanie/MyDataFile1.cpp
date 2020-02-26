#include "MyDataFile1.h"

MyDataFile1::MyDataFile1()
{}

MyDataFile1::MyDataFile1(string i)
{
	a = i;
}
int MyDataFile1::Open()
{
	owo.open("C:\\Users\\A1caida\\Downloads\\owo.txt");
	if (!owo.is_open())
	{
		cout<< "Не удалось открыть файл." << endl;
	}
	else
	{
		cout << "I am in." << endl;
	}
	return 0;
}

string MyDataFile1::Read()
{
	
	if (!owo.is_open()) { a = "1";};
	cout << a << endl;
	getline(owo, a);

	cout << a << endl;
	return a;
}

void MyDataFile1::Close(){	owo.close();	}

int MyDataFile1::Write()
{
	if (owo.is_open())
	{
		cout << "Сначала закройте файл." << endl;
		return  1;
	}
	out.open("C:\\Users\\A1caida\\Downloads\\owo.txt");
	if (out.is_open())
	{
		out << "Hello World!" << endl;
	}
	return 0;
}

int MyDataFile1::Seek(string b)
{
	//if (a == "") return 1;
	int pos = a.find(b);
	
	if (pos == -1)
		cout << "net" << endl;
	else
		cout << "yes"<< endl;

	return 0;

}

int MyDataFile1::GetPosition(string b)
{
	int pos = a.find(b);

	if (pos == -1)
		cout << "net" << endl;
	else
		cout << "yes " << pos << " simvol position" << endl;

	return 0;
}

int MyDataFile1::GetLength()
{
	cout << a.length() << endl;
	return 0;
}



MyDataFile1::~MyDataFile1()
{

}