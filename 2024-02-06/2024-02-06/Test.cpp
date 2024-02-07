#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << "Print()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//	void Print() const
//	{
//		cout << "Print()const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//void Test()
//{
//	Date d1(2023, 1, 13);
//	d1.Print();
//	const Date d2(2022, 1, 13);
//	d2.Print();
//}
//int main()
//{
//	Test();
//	return 0;
//}



//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	} 
//private:
//	int _a2;
//	int _a1;
//};
//int main() {
//	A aa(1);
//	aa.Print();
//}




//class Date
//{
//public:
//    // 如果用户显式定义了构造函数，编译器将不再生成
//    Date(int year = 1, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//
//    // d1 = d3;
//  /*  Date& operator=(const Date& d)
//    {
//        if (this != &d)
//        {
//            _year = d._year;
//            _month = d._month;
//            _day = d._day;
//        }
//
//        return *this;
//    }*/
//
//    void Print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//// operator= 我们不写，编译器会生成默认的operator =
//// 跟拷贝构造的行为类似，内置类型值拷贝，自定义类型调用他的赋值
//// Date MyQueue 也可以不写，默认生成operator =就可以用
//// Stack必须自己实现operator=,实现深拷贝
//
//int main()
//{
//    Date d1(2023, 10, 24);
//    Date d2(2022, 1, 1);
//
//    // 一个已经存在的对象去拷贝初始化另一个对象
//    Date d3(d1);
//
//    // 两个已经存在的对象拷贝
//    d2 = d1 = d3;
//    d1 = d1;
//    d1 == d1;
//
//    int i, j;
//    i = j = 10;
//
//	return 0;
//}


//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		cout << "Stack()" << endl;
//
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//
//		_size = 0;
//		_capacity = capacity;
//	}
//
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//class MyQueue
//{
//
//private:
//	Stack _pushst;
//	Stack _popst;
//};

//int main()
//{
//	MyQueue q;
//
//	return 0;
//}

#include "Date.h"

void TestDate1()
{
	Date d1(2023, 10, 24);
	d1.Print();

	Date ret1 = d1 - 100;
	ret1.Print();

	Date ret2 = d1 - 10000;
	ret2.Print();

	Date ret3 = d1 + 100;
	ret3.Print();

	Date ret4 = d1 + 10000;
	ret4.Print();
}

void TestDate2()
{
	Date d1(2023, 10, 24);
	d1.Print();

	// 语法设计，无法逻辑闭环，那么这时就只能特殊处理
	// 特殊处理
	++d1;
	d1.operator++();
	d1.Print();

	d1++;
	d1.operator++(10);
	d1.operator++(1);
	d1.Print();
}

void TestDate3()
{
	Date d1(2023, 10, 24);
	d1.Print();

	Date d2(2024, 5, 5);
	d2.Print();
	Date d3(2024, 8, 1);
	d3.Print();

	cout << d2 - d1 << endl;
	cout << d1 - d3 << endl;

}

void TestDate4()
{
	Date d1(2023, 10, 24);
	d1 += -100;

	d1.Print();
}

int main()
{
	TestDate4();

	return 0;
}