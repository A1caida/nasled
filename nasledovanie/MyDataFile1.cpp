#include "MyDataFile1.h"

MyDataFile1::MyDataFile1()
{}

MyDataFile1::MyDataFile1(string i)
{
	a1 = i;
}
int MyDataFile1::Open()
{
	owo.open("C:\\Users\\AhmedhanovRN\\Downloads\\owo.txt");
	if (!owo.is_open())
	{
		cout<< "�� ������� ������� ����." << endl;
	}
	else
	{
		cout << "I am in." << endl;
	}
	return 0;
}

string MyDataFile1::Read()
{
	
	if (!owo.is_open()) { a1 = "1";};
	cout << a1 << endl;
	getline(owo, a1);

	cout << a1 << endl;
	return a1;
}

void MyDataFile1::Close(){	owo.close();	}

int MyDataFile1::Write()
{
	if (owo.is_open())
	{
		cout << "������� �������� ����." << endl;
		return  1;
	}
	out.open("C:\\Users\\AhmedhanovRN\\Downloads\\owo.txt");
	string uwu;
	cout<<"chlen"<<endl;
	cin >> a1;
	if (out.is_open())
	{
		out << a1 << endl;
	}
	return 0;
}

int MyDataFile1::Seek(string b)
{
	//if (a == "") return 1;
	int pos = a1.find(b);
	
	if (pos == -1)
		cout << "net" << endl;
	else
		cout << "yes"<< endl;

	return 0;

}

int MyDataFile1::GetPosition(string b)
{
	int pos = a1.find(b);

	if (pos == -1)
		cout << "net" << endl;
	else
		cout << "yes " << pos << " simvol position" << endl;

	return 0;
	
}

int MyDataFile1::GetLength()
{
	cout << a1.length() << endl;
	return 0;
}



MyDataFile1::~MyDataFile1()
{

}