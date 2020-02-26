#pragma once
#include "File.h"

class MyDataFile1 :	public File
{
private:
	ifstream owo; ofstream out; string a;
public:
	MyDataFile1();
	MyDataFile1(string);
	virtual int Open() override;
	virtual string Read() override;
	virtual void Close() override;
	virtual int Write() override;
	virtual int Seek(string) override;
	virtual int GetPosition(string) override;
	virtual int GetLength() override;
	
	~MyDataFile1();
};
