#include "Folder.h"
//include "MyDataFile1.h"


using namespace std;
Folder::Folder()
{}

int Folder::owo(string n)
{
	v1[mag] = n;
	mag++;
	return 0;
}

int Folder::lol(string l)
{
	v1[mag1] = l;
	mag1++;
	return 0;
}

int Folder::out()
{
	cout << "MyDataFile1" << endl;
	for (size_t i = 0; i < mag; i++)
	{
		cout << i <<".";
		cout << v1[i] << endl;
	}
	cout << "MyDataFile2" << endl;
	for (size_t i = 0; i < mag1; i++)
	{
		cout << i << ".";
		cout << v1[i] << endl;
	}
	return 0;
}

Folder::~Folder()
{
}