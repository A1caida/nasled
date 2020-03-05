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
	v2[mag1] = l;
	mag1++;
	return 0;
}

int Folder::out()
{
	if (mag > 0)
	{
		cout << "MyDataFile1" << endl;
		for (size_t i = 0; i < mag; i++)
		{
			cout << i + 1 << ".";
			cout << v1[i] << endl;
		}
	}
	if (mag1 > 0)
	{
		cout << "MyDataFile2" << endl;
		for (size_t i = 0; i < mag1; i++)
		{
			cout << i + 1 << ".";
			cout << v2[i] << endl;
		}
	}
	return 0;
}

Folder::~Folder()
{
}