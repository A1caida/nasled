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
	virtual int Open() override;
	virtual string Read() override;
	virtual void Close() override;
	virtual int Write() override;
	virtual int Seek(string) override;
	virtual int GetPosition(string) override;
	virtual int GetLength() override;
	~MyDataFile2();

};

