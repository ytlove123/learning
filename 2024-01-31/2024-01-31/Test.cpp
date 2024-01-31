#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

//int main()
//{
//	f(10);
//	func();
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = a;
//	auto c = a;
//	auto d = &a;
//	auto* e = &a;
//	auto& f = a;
//	f++;
//
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(e).name() << endl;
//	cout << typeid(f).name() << endl;
//
//	return 0;
//}

#include<vector>
#include<string>

// 不能做参数，不能做返回值
//void func(auto e)
//{
//
//}

//auto func(auto e)
//{
//
//}

//int main()
//{
//  auto意义定义对象时，类型较长，用它比较方便
//	vector<string> v;
//	//vector<string>::iterator it = v.begin();
//	auto it = v.begin();
//	// 不可以
//	//auto x;
//
//	//func(5);
//
//	return 0;
//}

//int main()
//{
//	//auto ret = func();
//
//	return 0;
//}

//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//		array[i] *= 2;
//
//	for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
//		cout << *p << endl;
//
//	// 依次取数组中数组赋值给e
//	// 自动判断结束，自动++往后走
//	//for (int e : array)
//	for (auto& e : array)
//	{
//		e++;
//		cout << e << " ";
//	}
//	cout << endl;
//
//	for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//void TestFor(int array[])
//{
//    for (auto& e : array)
//        cout << e << endl;
//}

//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//int main()
//{
//	//int* ptr = NULL;
//	int* ptr = nullptr;
//
//	f(0);
//	//f(NULL);
//	f(nullptr);
//
//	return 0;
//}

// c
//struct Stack
//{
//	int* a;
//	int top;
//	int capacity;
//};
//
//void StackInit(struct Stack* ps);
//void StackPush(struct Stack* ps, int x);

// C++兼容c语言struct的所有用法
// struct同时升级成了类
// 1、类名就是类型，Stack就是类型，不需要加struct
// 2、类里面定义函数
//struct Stack
//{
//	int* a;
//	int top;
//	int capacity;
//
//	void Init()
//	{
//		a = 0;
//		top = 0;
//		capacity = 0;
//	}
//
//	void Push(int x)
//	{
//		//...
//	}
//};
//
//struct Queue
//{
//	// ...
//
//	void Init()
//	{
//
//	}
//};
//
////struct ListNode
////{
////	ListNode* next;
////	int val;
////};
//


//int main()
//{
//	//Stack s2;
//
//	Stack s1;
//	s1.Init();
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	s1.Push(4);
//
//	/*struct Stack s1;
//	StackInit(&s1);
//	StackPush(&s1, 1);
//	StackPush(&s1, 2);
//	StackPush(&s1, 3);*/
//
//	return 0;
//}

//class Stack
//{
//private:
//	int* a;
//	int top;
//	int capacity;
//
//public:
//	void Init()
//	{
//		a = 0;
//		top = 0;
//		capacity = 0;
//	}
//
//	void Push(int x)
//	{
//		//...
//	}
//
//	bool Empty()
//	{
//		return top == 0;
//	}
//};
//


//int main()
//{
//	Stack s1;
//	s1.Init();
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	s1.Push(4);
//
//	//if(s1.top == 0)
//	if (s1.Empty())
//	{
//
//	}
//
//	//s1.a = 0;
//
//	/*
//	struct Stack s1;
//	StackInit(&s1);
//	StackPush(&s1, 1);
//	StackPush(&s1, 2);
//	StackPush(&s1, 3);*/
//	//if (s1.top == 0)
//	/*if (!StackEmpty(&s))
//	{}*/
//
//	return 0;
//}

// 20:12继续
//int main()
//{
//	Stack s1;
//	s1.Init();
//	s1.Push(1);
//	s1.Push(2);
//	s1.Push(3);
//	s1.Push(4);
//
//	return 0;
//}

//class Date 
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	/*int year_;
//	int m_year;
//	int mYear;*/
//
//	int _year;
//	int _month;
//	int _day;
//};


//int main()
//{
//	Date d;
//	d.Init(2023, 10, 17);
//
//	//int x = 0;
//	//while (x > 0)
//	//{
//	//	int n = 0;
//	//}
//	//n++;
//
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
////private:
//	// 声明
//	int _year;
//	int _month;
//	int _day;
//};
//
//class A
//{
//private:
//	char _ch;
//	int _a;
//};
//
//class B
//{};
//
//class C
//{
//public:
//	void f()
//	{};
//};
//
////   类  和 对象   1v多
//// 设计图   房子
//int main()
//{
//	Date d1;
//	Date d2;
//	Date d3;
//	d1.Init(2023, 10, 7);
//	d2.Init(2022, 10, 7);
//	d1._year++;
//	d2._year++;
//
//
//	cout << sizeof(d1) << endl;
//	cout << sizeof(A) << endl;
//
//	B b1;
//	B b2;
//
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;
//
//	// 无成员变量的类，对象大小开一个字节，这个字节不存储有效数据
//	// 标识定义的对象存在过
//	cout << &b1 << endl;
//	cout << &b2 << endl;
//
//	return 0;
//}

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	//void Print(Date* this)
	//{
	//	cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	//}
private:
	int _year;
	int _month;
	int _day;
};

class A
{
private:
	char _ch;
	int _a;
};

int main()
{
	Date d1;
	Date d2;

	d1.Init(2023, 10, 7);
	d2.Init(2022, 10, 7);

	// 不能显示写this相关实参和形参
	d1.Print();
	d2.Print();

	//d1.Print(&d1);
	//d2.Print(&d2);

	return 0;
}