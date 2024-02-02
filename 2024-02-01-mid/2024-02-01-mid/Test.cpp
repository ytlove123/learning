#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//
//
//class Stack
//{
//public:
//	/*Stack(size_t capacity = 3)
//	{
//		cout << "Stack(size_t capacity = 3)" << endl;
//
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败!!!");
//		}
//
//		_capacity = capacity;
//		_top = 0;
//	}*/
//
//private:
//	int* _a;
//	int _capacity;
//	int _top;
//};
//
//// 两个栈实现一个队列
//class MyQueue
//{
//private:
//	Stack _pushst;
//	Stack _popst;
//	int _size;
//};
//
//int main()
//{
//	//Date d1;
//	//d1.Print();
//
//	Stack st1;
//	MyQueue mq;
//
//	return 0;
//}


//#include<iostream>
//#include<stdio.h>
//#include<string.h>
//using namespace std;
//class Student {
//	char name[20];
//	int grade;
//public:
//	void setname(char* n);
//	void getname(char* n);
//	void setgrade(int g);
//	int getgrade();
//	void show() {
//		cout << "name:" << name << "     " << "grade:" << grade << endl;
//		Student();
//	}
//	~Student();
//};
//Student::~Student()
//{
//	cout << "The destructor be called" << endl;
//}
//void Student::setname(char* n)
//{
//	strcpy(name, n);
//}
//void Student::getname(char* n)
//{
//	strcpy(n, name);
//}
//void Student::setgrade(int g)
//{
//	grade = g;
//}
//int Student::getgrade()
//{
//	return grade;
//}
//int main()
//{
//	Student student1;
//	Student* pstudent=nullptr;
//	char name[20] = "Zhang san";
//	student1.setname(name);
//	student1.setgrade(2);
//	//	student1.getname(name);
//	//	cout<<"name is:"<<name<<endl;
//	student1.show();
//	delete pstudent;
//	return 0;
//}

//class Date
//{
//public:
//	// 1.无参构造函数
//	Date()
//	{}
//
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate()
//{
//	Date d1; // 调用无参构造函数
//	Date d2(2015, 1, 1); // 调用带参的构造函数
//
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	Date d3();
//	// warning C4930: “Date d3(void)”: 未调用原型函数(是否是有意用变量定义的?)
//	
//}
//int main()
//{
//	void TestDate();
//}


//class Date
//{
//public:
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
//    //编译器生成了一个无参的默认构造函数
//	Date d1;
//	return 0;
//}




//class Date
//{
//public:
//
//	// 如果用户显式定义了构造函数，编译器将不再生成
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//
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
//
//int main()
//{
//	// 将Date类中构造函数屏蔽后，代码可以通过编译，因为编译器生成了一个无参的默认构造函数
//	// 将Date类中构造函数放开，代码编译失败，因为一旦显式定义任何构造函数，编译器将不再生成
//	
//	// 无参构造函数，放开后报错：error C2512: “Date”: 没有合适的默认构造函数可用
//	Date d1;
//	return 0;
//}


//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//private:
//	// 基本类型(内置类型)
//	int _year;
//	int _month;
//	int _day;
//	// 自定义类型
//	Time _t;
//};
//int main()
//{
//	Date d;
//	return 0;
//}




//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	//C++11 中针对内置类型成员不初始化的缺陷，又打了补丁，即：内置类型成员变量在
//	//类中声明时可以给默认值。
//	// 基本类型(内置类型)
//	int _year = 1970;
//	int _month = 1;
//	int _day = 1;
//	// 自定义类型
//	Time _t;
//};
//int main()
//{
//	Date d;
//	return 0;
//}


//class Date
//{
//public:
//	Date()
//	{
//		_year = 1900;
//		_month = 1;
//		_day = 1;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//// 以下测试函数能通过编译吗？-----不能
//
//// 够成函数重载，但是无参调用存在歧义，不能同时存在
//
//void Test()
//{
//	Date d1;
//}


//typedef int DataType;
//class Stack
//{
//public:
//	Stack(int capacity = 3)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc fail");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//
//	}
//	void Push(DataType data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	// 其他方法...
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	DataType* _array;
//	int _capacity;
//	int _size;
//
//};
//
//void TestStack()
//{
//	Stack s;
//	s.Push(1);
//	s.Push(2);
//}
//
//int main()
//{
//	TestStack();
//}



class Time
{
public:
	~Time()
	{
		cout << "~Time()" << endl;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	// 基本类型(内置类型)
	int _year = 1970;
	int _month = 1;
	int _day = 1;
	// 自定义类型
	Time _t;
};
int main()
{
	Date d;
	return 0;
}

// 注意：创建哪个类的对象则调用该类的析构函数，销毁那个类的对象则调用该类的析构函数