#pragma once
#include "MyDataFile1.h"
#include "MyDataFile2.h"
#include <list>
#include <iostream>
class Folder
{
private:
	string* v1 = new string[10];
	string* v2 = new string[10];
	int mag = 0; int mag1 = 0;
public:
	Folder();
	int owo(string);
	int lol(string);
	int out();
	~Folder();
};

