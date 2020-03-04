#pragma once
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

class File
{
	
public:
	
	virtual int Open() = 0;
	virtual string Read() = 0;
	virtual void Close() = 0;
	virtual int Write() = 0;
	virtual int Seek(string) = 0;
	virtual int GetPosition(string) = 0;
	virtual int GetLength() = 0;
};

