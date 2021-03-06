// MapUerINFO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef map<int, string> MYMAP;

class memcpyTest
{
protected:
	char s3[10];

public:
	memcpyTest();
	~memcpyTest();

private:

};

memcpyTest::memcpyTest()
{
}

memcpyTest::~memcpyTest()
{
}


int main()
{

	MYMAP coco;
	coco.insert(pair<int, string>(1, "a"));
	coco.insert(pair<int, string>(2, "b"));
	coco.insert(pair<int, string>(3, "c"));
	coco.insert(pair<int, string>(4, "d"));
	
	
	//迭代器
	MYMAP::iterator iter;
	for (iter = coco.begin(); iter != coco.end(); iter++)
	{
		cout << "Key:" << iter->first << " Value:" << iter->second << endl;
	}
	//反向迭代器
	MYMAP::reverse_iterator riter;
	for (riter = coco.rbegin(); riter != coco.rend(); riter++)
	{
		cout << "Key:" << riter->first << " Value:" << riter->second << endl;
	}
	

	char s[10] = "cocococo";

	memcpyTest me;

	memcpy(&me, s, sizeof(s));

    std::cout << "Hello World!\n"; 
	system("pause");
}

