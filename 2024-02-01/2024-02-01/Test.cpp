#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <assert.h>


//typedef int DataType;
//struct Stack
//{
//	void Init(size_t capacity)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(const DataType& data)
//	{
//		// 扩容
//		_array[_size] = data;
//		++_size;
//	}
//	DataType Top()
//	{
//		return _array[_size - 1];
//	}
//	void Destroy()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//	DataType* _array;
//	size_t _capacity;
//	size_t _size;
//};
//int main()
//{
//	Stack s;
//	s.Init(10);
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	cout << s.Top() << endl;
//	s.Destroy();
//	return 0;
//}


//class Person
//{
//public:
//	void PrintPersonInfo();
//public:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//// 这里需要指定PrintPersonInfo是属于Person这个类域
//void Person::PrintPersonInfo()
//{
//	cout << _name << " " << _gender << " " << _age << endl;
//}
//
//
//int main()
//{
//	//Person._age = 100;      // 编译失败：error C2059: 语法错误:“.”
//	Person person;
//	person._age = 10;
//	cout << person._age << endl;
//	return 0;
//}



////如何计算类对象的大小
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	char _a;
//};


//// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//// 类中什么都没有---空类
// //	// 无成员变量的类，对象大小开一个字节，这个字节不存储有效数据
//	// 标识定义的对象存在过
//class A3
//{};
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	
//	return 0;
//}


// 类中既有成员变量，又有成员函数

//要进行内存对齐
// 1、第一个成员在与结构体偏移量为0的地址处。
// 2、 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。VS中默认的对齐数为8

//3、结构体总大小为：最大对齐数（所有变量类型最大者与默认对齐参数取最小）的整数倍。
//4、如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
//   体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
//class A1 {
//public:
//	void f1() {}
//private:
//	char _a;
//	int _b;
//};
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//}


//this指针


//Date类中有 Init 与 Print 两个成员函数，函数体中没有关于不同对象的区分，那当d1调用 Init 函
//数时，该函数是如何知道应该设置d1对象，而不是设置d2对象呢？？
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//	d1.Init(2023, 1, 11);
//	d2.Init(2022, 1, 12);
//	d1.Print();
//	d2.Print();
//	return 0;
//}



//// 不能显示写this相关实参和形参
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print(Date* this)
//	{
//		cout <<this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1, d2;
//	d1.Init(2023, 1, 11);
//	d2.Init(2022, 1, 12);
//	d1.Print(&d1);
//	d2.Print(&d2);
//	return 0;
//}