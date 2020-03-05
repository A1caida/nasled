#pragma once
#include "File.h"
class MyDataFile2 :
	public File
{
private:
	ifstream owo; ofstream out; string a;
public:
	MyDataFile2();
	MyDataFile2(string);
	int Open() override;
	string Read() override;
	void Close() override;
	int Write() override;
	int Seek(string) override;
	int GetPosition(string) override;
	int GetLength() override;
	~MyDataFile2();

};

