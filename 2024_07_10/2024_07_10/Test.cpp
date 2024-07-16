#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//class A
//{
//public:
//	void PrintA()
//	{
//		std::cout << "PrintA()" << std::endl;
//		//std::cout << _a << std::endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();
//	return 0;
//}


//int& ret1(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int ret2(int& a, int& b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	std::cout << ret1(1, 5) << std::endl;
//	int t = 5;
//	int y = 5;
//	std::cout << ret2(t, y) << std::endl;
//	return 0;
//}


//class Time
//{
//public:
//	~Time()
//	{
//		std::cout << "~Time()" << std::endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _seconds;
//};
//class Date
//{
//public:
//private:
//	int _year;
//	int _month;
//	int _day;
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
//		_hour = 1;
//		_minute = 32;
//		_second = 41;
//	}
//	Time(const Time& t)
//	{
//		_hour = t._hour;
//		_minute = t._minute;
//		_second = t._second;
//		std::cout << "Time(const Time& t)" << std::endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//public:
//	Date()
//	{
//		_year = 2024;
//		_month = 7;
//		_day = 12;
//	}
//	/*Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		std::cout << "Date(const Date& d)" << std::endl;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//
//
//int main()
//{
//	Date d;
//	Date d1(d);
//}

//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity=10)
//	{
//		_arr = (DataType*)malloc(capacity * sizeof(DataType));
//		if (_arr == nullptr)
//		{
//			perror("malloc fail!");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(const DataType& data)
//	{
//		_arr[_size] = data;
//		_size++;
//	}
//	~Stack()
//	{
//		if (_arr)
//		{
//			free(_arr);
//			_arr = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	DataType* _arr;
//	size_t _capacity;
//	size_t _size;
//};
//
//int main()
//{
//	Stack s;
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	s.Push(4);
//	Stack s1(s);
//	return 0;
//}


class Date
{
	friend std::ostream& operator<<(std::ostream& _cout, const Date& d);
	friend std::istream& operator>>(std::istream& _cin, const Date& d);
public:
	Date(int year = 2024, int month = 7, int day = 13)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._month;
	}
	~Date()
	{}
	Date& operator=(/*Date* this*/const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	Date& operator++()//前置++
	{
		_day += 1;
		return *this;
	}
	Date operator++(int)//后置++
	{
		Date temp(*this);
		_day += 1;
		return temp;
	}
private:
	int _year;
	int _month;
	int _day;
};
std::ostream& operator<<(std::ostream& _cout, const Date& d)
{
	return _cout;
}
std::istream& operator>>(std::istream& _cin, const Date& d)
{
	return _cin;
}



//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity=10)
//	{
//		_arr = (DataType*)malloc(capacity * sizeof(DataType));
//		if (_arr == nullptr)
//		{
//			perror("malloc fail!");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(const DataType& data)
//	{
//		_arr[_size] = data;
//		_size++;
//	}
//	~Stack()
//	{
//		if (_arr)
//		{
//			free(_arr);
//			_arr = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//	//赋值运算符重载，深拷贝
//	Stack& operator=(const Stack& ss)
//	{
//		if (this != &ss)
//		{
//			if (this != &ss)
//			{
//				if (_arr)
//				{
//					free(_arr);
//					_arr = nullptr;
//					_capacity = 0;
//					_size = 0;
//				}
//				_arr = (DataType*)malloc(ss._capacity * sizeof(DataType));
//				if (_arr = nullptr)
//				{
//					perror("malloc fail...");
//					return *this;
//				}
//				memcpy(_arr, ss._arr, ss._size * sizeof(DataType));
//				_capacity = ss._capacity;
//				_size = ss._size;
//			}
//			return *this;
//		}
//		
//	}
//private:
//	DataType* _arr;
//	size_t _capacity;
//	size_t _size;
//};
//
//int main()
//{
//	Stack s;
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	s.Push(4);
//	Stack s1;
//	s1 = s;
//	return 0;
//}