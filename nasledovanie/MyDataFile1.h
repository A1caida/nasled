#pragma once
#include "File.h"
#include <string>

class MyDataFile1 :	public File
{
private:
	ifstream owo; ofstream out; //string a;
	
public:
	string a1;
	MyDataFile1();
	MyDataFile1(string);
	int Open() override;
	string Read() override;
	void Close() override;
	int Write() override;
	int Seek(string) override;
	int GetPosition(string) override;
	int GetLength() override;
	
	~MyDataFile1();
};

