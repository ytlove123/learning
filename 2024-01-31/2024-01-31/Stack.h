#pragma once
#include<iostream>
using namespace std;

//inline void f(int i)
//{
//	cout << i << endl;
//}
//
//void func();


class Stack
{
private:
	int* a;
	int top;
	int capacity;

public:
	void Init();
	void Push(int x);

	// 默认直接在类里面定义的就是inline
	// 正确的用法，长的函数声明和定义分离
	// 短小的函数可以直接在类里面定义
	bool Empty()
	{
		return top = 0;
	}
};
