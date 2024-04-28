#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class Date
//{
//public:
//	Date(int year=2024, int month=12, int day=12)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	
//	ostream& operator<<(ostream& _cout)
//	{
//		_cout << _year << "-" << _month << "-" << _day << endl;
//		return _cout;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	cin >> d;
//	d << cout;
//	// d<< cout; -> d.operator<<(&d1, cout); 不符合常规调用
//// 因为成员函数第一个参数一定是隐藏的this，所以d必须放在<<的左侧
//	cout << d << endl;
//	return 0;
//}


//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//	friend istream& operator>>(istream& _cin, Date& d);
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//istream& operator>>(istream& _cin, Date& d)
//{
//	_cin >> d._year;
//	_cin >> d._month;
//	_cin >> d._day;
//	return _cin;
//}
//int main()
//{
//	Date d;
//	cin >> d;
//	cout << d << endl;
//	return 0;




//
//
//class Time
//{
//	
//
//	friend class Date; // 声明日期类为时间类的友元类，则
//	                   //在日期类中就直接访问Time类中的私有成员变量
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//	friend ostream& operator<<(ostream& _cout, const Date& d);
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//	void SetTimeOfDate(int hour, int minute, int second)
//	{
//		// 直接访问时间类私有的成员变量
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//int main()
//{
//	Date d;
//	cout << d << endl;
//	return 0;
//}


//class A
//{
//private:
//	static int k;
//	//int h;
//public:
//	class B // B天生就是A的友元
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << k << endl;//OK
//			//cout << a.h << endl;//OK
//		}
//	};
//};
//int A::k = 1;
//int main()
//{
//	//A::B b;
//	//b.foo(A());
//	cout<<sizeof(A);
//	return 0;
//}





//class Time
//{
//	
//	//friend class Date; // 声明日期类为时间类的友元类，则
//	                   //在日期类中就直接访问Time类中的私有成员变量
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//
//
//
//	class Date
//	{
//		friend ostream& operator<<(ostream& _cout, const Time::Date& d);
//	public:
//		Date(int year = 1900, int month = 1, int day = 1)
//			: _year(year)
//			, _month(month)
//			, _day(day)
//		{}
//
//		void SetTimeOfDate(int hour, int minute, int second)
//		{
//			// 直接访问时间类私有的成员变量
//			 _t->_hour= hour;
//			_t->_minute= minute;
//			_t->_second = second;
//		}
//
//	private:
//		int _year;
//		int _month;
//		int _day;
//		//Time _t;
//		Time* _t;
//	};
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//ostream& operator<<(ostream& _cout, const Time::Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//int main()
//{
//	Time::Date d;
//	cout << d << endl;
//	return 0;
//}


class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A(int a)" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
};
class Solution {
public:
	int Sum_Solution(int n) {
		//...
		return n;
	}
};
int main()
{
	A aa1;
	// 不能这么定义对象，因为编译器无法识别下面是一个函数声明，还是对象定义
	//A aa1();
	// 但是我们可以这么定义匿名对象，匿名对象的特点不用取名字，
	// 但是他的生命周期只有这一行，我们可以看到下一行他就会自动调用析构函数
	A();
	A aa2(2);
	// 匿名对象在这样场景下就很好用，当然还有一些其他使用场景，这个我们以后遇到了再说
	Solution().Sum_Solution(10);
	return 0;
}