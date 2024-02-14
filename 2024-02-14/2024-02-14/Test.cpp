#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <list>
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
//private:
//	int _year;
//	int _month;
//	int _day;
//};


//class Date
//{
//public:
//	Date(int year, int month, int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};



//namespace bit
//{
//    class Date
//    {
//    public:
        //Date(int year, int month, int day)
        //{
        //    // 函数体内初始化
        //    _year = year;
        //    _month = month;
        //    _day = day;

        //    //_ref = year;
        //    //_n = 1;
        //}

        //Date(int year, int month, int day)
        //    :_year(year)
        //    ,_month(month)
        //    ,_day(day)
        //    ,_ref(year)
        //    ,_n(1)
        //{
        //    // 初始化列表
        //    // 
        //}

//        Date(int year, int month, int day)
//           :_year(2)
//           ,_ref(year)
//           ,_n(1)
//           ,_aa(10)
//        {
//            // 剩下3个成员没有在初始化列表显示写出来定义
//            // 但是他也会定义，只是内置类型默认给的随机值
//            // 如果是自定义类型成员会去调用它的默认构造函数
//            
//            // 函数体内初始化
//            _year = year;
//            _month = month;
//            _day = day;
//        }
//
//    private:
//        // 声明
//        int _year = 1; // 缺省值
//        int _month = 1;
//        int _day;
//
//        A _aa;        // 定义类型成员(且该类没有默认构造函数时)
//
//        int& _ref;	  // 引用 ： 必须在定义的时候初始化
//        const int _n; // const ： 必须在定义的时候初始化
//    };
//}



//class Time
//{
//public:
//    Time(int hour = 0)
//        :_hour(hour)
//    {
//        cout << "Time()" << endl;
//    }
//private:
//    int _hour;
//};
//class Date
//{
//public:
//    Date(int day)
//    {}
//private:
//    int _day;
//    Time _t;
//};
//int main()
//{
//    Date d(1);
//}




//// 成员变量在类中声明次序就是其在初始化列表中的初始化顺序，与其在初始化列表中的先后次序无关
//class A
//{
//public:
//    A(int a)
//        :_a1(a)
//        , _a2(_a1)
//    {}
//
//    void Print() {
//        cout << _a1 << " " << _a2 << endl;
//    }
//private:
//    int _a2;
//    int _a1;
//};
//int main() {
//    A aa(1);
//    aa.Print();// 1  随机值
//}



//class Date
//{
//public:
//    // 1. 单参构造函数，没有使用explicit修饰，具有类型转换作用
// // explicit修饰构造函数，禁止类型转换---explicit去掉之后，代码可以通过编译
//    //explicit Date(int year)
//    //  //Date(int year)
//    //    :_year(year)
//    //{}
//    
//    // 2. 虽然有多个参数，但是创建对象时后两个参数可以不传递，没有使用explicit修饰，具有类型转换作用
//    // explicit修饰构造函数，禁止类型转换
// /*   explicit Date(int year, int month = 1, int day = 1)
//    : _year(year)
//    , _month(month)
//    , _day(day)
//    {}*/
//     Date(int year, int month = 1, int day = 1)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {}
//   
//    Date& operator=(const Date& d)
//    {
//        if (this != &d)
//        {
//            _year = d._year;
//            _month = d._month;
//            _day = d._day;
//        }
//        return *this;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//void Test()
//{
//    Date d1(2022);
//    // 用一个整形变量给日期类型对象赋值
//    // 实际编译器背后会用2023构造一个无名对象，最后用无名对象给d1对象进行赋值
//    d1 = 2023;
//    // 将1屏蔽掉，2放开时则编译失败，因为explicit修饰构造函数，禁止了单参构造函数类型转换的作用
//}
//
//int main()
//{
//    Test();
//    return 0;
//}



////实现一个类，计算程序中创建出了多少个类对象。
//class A
//{
//public:
//    A()
//    {
//        ++_scount; 
//        cout << "A()" << endl;
//    }
//    A(const A& t) 
//    {
//        ++_scount;
//        cout << "A(const A& t)" << endl;
//    }
//    ~A()
//    { 
//        cout << "~A()" << endl;
//    }
//    static int GetACount() { return _scount; }
//private:
//    static int _scount;
//};
//int A::_scount = 0;
//void TestA()
//{
//    //cout << A::GetACount() << endl;
//    A a1, a2;
//    A a3(a1);
//    A aa;  //为了调用而创建的，所以要-1
//	cout << aa.GetACount()-1 << endl;
//    //cout << A().GetACount() - 1 << endl;
//   // cout << A::GetACount() << endl;
//}
//int main()
//{
//    TestA();
//    return 0;
//
//}



//class A
//{
//public:
//	A() 
//	{
//		++count; 
//		cout << "A()" << endl;
//	}
//	A(const A& t) 
//	{
//		++count;
//		cout << "A(const A& t)" << endl;
//	}
//	~A() {
//		cout << "~A()" << endl;
//		//--count;
//	}
//
//	// 静态成员函数，特点：没有this指针
//	static int GetCount()
//	{
//		return count;
//	}
//
//private:
//	// 声明
//	static int count;
//	int _a = 0;
//};
//
//// 定义
//int A::count = 0;
//
//A func()
//{
//	A aa;
//	return aa;
//}
//
//int main()
//{
//	//A::count++;
//
//	//cout << sizeof(A) << endl;
//
//	//A aa;
//	func();
//
//	//A::count++;
//
//	// 公有
//	// 属于整个类，属于这个类所有对象
//	// 受访问限定符限制
//	//cout << A::count << endl;
//	//cout << aa.count << endl;
//
//	// A aa;有名对象
//	//A aa;  //为了调用而创建的，所以要-1
//	//cout << aa.GetCount()-1 << endl;
//
//	 //A() 这种写法叫做匿名对象，生命周期只在这一行
//	cout << A().GetCount() - 1 << endl;
//
//	//cout << A::GetCount() << endl;
//	//cout << A().GetCount() << endl;
//
//	// 总结一下：静态成员函数和静态成员变量，本质受限制的全局变量和全局函数
//	// 专属这个类，受类域和访问限定符的限制
//
//	return 0;
//}


//class Date
//{
//public:
//    Date(int year, int month, int day)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {}
//    // d1 << cout; -> d1.operator<<(&d1, cout); 不符合常规调用
//// 因为成员函数第一个参数一定是隐藏的this，所以d1必须放在<<的左侧
//    ostream& operator<<(ostream& _cout)
//    {
//        _cout << _year << "-" << _month << "-" << _day << endl;
//        return _cout;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};




//class Date
//{
//    friend ostream& operator<<(ostream& _cout, const Date& d);
//    friend istream& operator>>(istream& _cin, Date& d);
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {}
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//ostream& operator<<(ostream& _cout, const Date& d)
//{
//    _cout << d._year << "-" << d._month << "-" << d._day;
//    return _cout;
//}
//istream& operator>>(istream& _cin, Date& d)
//{
//    _cin >> d._year;
//    _cin >> d._month;
//    _cin >> d._day;
//    return _cin;
//}
//int main()
//{
//    Date d;
//    cin >> d;
//    cout << d << endl;
//    return 0;
//}




//class Time
//{
//    // 声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
//    friend class Date; 
//public:
//    Time(int hour = 0, int minute = 0, int second = 0)
//        : _hour(hour)
//        , _minute(minute)
//        , _second(second)
//    {}
//
//private:
//    int _hour;
//    int _minute;
//    int _second;
//};
//class Date
//{
//public:
//    Date(int year = 1900, int month = 1, int day = 1)
//        : _year(year)
//        , _month(month)
//        , _day(day)
//    {}
//
//    void SetTimeOfDate(int hour, int minute, int second)
//    {
//        // 直接访问时间类私有的成员变量
//        _t._hour = hour;
//        _t._minute = minute;
//        _t._second = second;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//    Time _t;
//};



//class A
//{
//public:
//	//explicit A(int a) 
//	A(int a)
//		:_a(a)
//	{}
//
//	/*A(int* p)
//	{}*/
//
//	int _a = 0;
//};
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	//A aa1(1);
//	//A aa2(2);
//
//	// 内置类型对象 隐式转换成自定义类型对象
//	// 能支持这个转换，是有A的int单参数构造函数(支持传一个参数多参数带缺省也可以)支持
//	// 不想让隐式类型转换发生，构造函数加explicit
//	//A aa3 = 3;
//	//const A& ra = 3;
//
//	//int* p = NULL;
//	//A aa4 = p;
//
//	// 内置类型  整形和浮点 隐式互相转
//	int i = 0;
//	double d = i;
//	const double& r = i;
//
//	Date d1(2023, 11, 2);
//	Date d2 = (2023, 11, 3); // 等价于 Date d2 = 3;
//	Date d3 = 2023;
//
//	// C++11
//	Date d4 = { 2023, 11, 2 };
//	const Date& d5 = { 2023, 11, 2 };
//
//	//list<A> lt;
//	////void push_back(const A& aa);
//	//A aa1(1);
//	//lt.push_back(aa1);
//	//lt.push_back(A(2));
//	//lt.push_back(3);
//
//	//list<Date> lt1;
//	//Date d6(2023, 11, 2);
//	//lt1.push_back(d6);
//
//	//lt1.push_back(Date(2023, 11, 2));
//	//lt1.push_back({ 2023, 11, 2 });
//
//	return 0;
//}




//class A
//{
//private:
//    static int k;
//    //int h;
//public:
//    class B // B天生就是A的友元
//    {
//    public:
//        void foo(const A& a)
//        {
//            //cout << k << endl;//OK
//            //cout << a.h << endl;//OK
//        }
//    };
//};
//int A::k = 1;
//int main()
//{
//    A::B b;
//    b.foo(A());
//    cout << sizeof(A) << endl;
//    return 0;
//}


class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A(int a)" << endl;
	}

	A(const A& aa)
		:_a(aa._a)
	{
		cout << "A(const A& aa)" << endl;
	}

	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A& aa)" << endl;

		if (this != &aa)
		{
			_a = aa._a;
		}

		return *this;
	}

	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
};

//int main()
//{
//	// 1、先用1构造一个临时对象 2、再用临时对象拷贝构造aa1
//	// 3、同一个表达式中，连续构造+构造/构造+拷贝构造/拷贝构造+拷贝构造会合二为一
//	// a、构造+构造->构造
//	// b、构造+拷贝构造->构造
//	// c、拷贝构造+拷贝构造->拷贝构造
//	A aa1 = 1;  
//	const A& aa2 = 2;
//
//	return 0;
//}

//void func(A aa1)
//{
//
//}
////
//int main()
//{
//	// 构造
//	A aa(1);
//	// 拷贝构造
//	func(aa);
//
//	//构造+拷贝构造->构造 
//	func(A(2));
//
//	//构造+拷贝构造->构造 
//	func(3);
//
//	return 0;
//}

//A func()
//{
//	A aa;
//	return aa;
//}
//
//int main()
//{
//	// 拷贝构造+拷贝构造->拷贝构造
//	A aa1 = func();
//
//	A aa2;
//	aa2 = func();
//
//	return 0;
//}

int main()
{
	A aa1(1);   // 构造

	// 一个已经存在的对象拷贝初始化另一个要创建的对象，就是拷贝构造
	// 他们两是等价的
	A aa2(aa1);  // 拷贝构造
	A aa3 = aa1; // (拷贝构造√) or 赋值拷贝

	// 两个已经存在的对象拷贝，赋值拷贝
	aa2 = aa3;


	return 0;
}