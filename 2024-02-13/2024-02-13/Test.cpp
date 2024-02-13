#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//#include"Date.h"
//
//void TestDate1()
//{
//	Date d1(2023, 10, 31);
//	Date d2(2023, 11, 31);
//	//d1.Print();
//
//	cout << d1 << d2 << endl;
//	//d1 << cout;
//
//	cin >> d1 >> d2;
//	cout << d1 << d2 << endl;
//
//	int i = 0;
//	//i << 10;
//
//	/*double d = 1.1;
//	int i = 2;
//
//	cout << i;
//	cout << d;*/
//}
//
//struct A
//{
//	int* _p;
//	int _a;
//};
//
//class MyClass {
//public:
//	void MyFunction(int x) {
//		// 成员函数的实现
//	}
//};

////int main()
////{
////	int i = 0;
////	A aa1;
////	aa1._p = &i;
////
////	//cout << aa1.*_p << endl;
////
////	// 两个运算符
////	cout << *(aa1._p) << endl;
////
////	MyClass obj;
////
////	// 声明一个成员函数指针
////	void (MyClass:: * functionPtr)(int) = &MyClass::MyFunction;
////
////	// 使用 .* 运算符来调用成员函数
////	(obj.*functionPtr)(42);
////
////
////	//TestDate1();
////
////	return 0;
////}
//
//int main()
//{
//	// const对象和非const对象都可以调用const成员函数
//	const Date d1(2023, 10, 31);
//	d1.Print();
//
//	Date d2(2023, 1, 1);
//	d2.Print();
//
//	d1 < d2;
//	d2 < d1;
//
//	d1.operator&();
//
//	cout << &d1 << endl;
//	cout << &d2 << endl;
//
//	return 0;
//}

//class A
//{
//public:
//    A(int a)
//        :_a(a)
//    {
//        cout << "A(int a = 0)" << endl;
//    }
//private:
//    int _a;
//};
//
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

// 初始化列表解决的问题：
// 1、必须在定义的地方显示初始化  引用  const   没有默认构造自定义成员
// 2、有些自定义成员想要显示初始化，自己控制
// 尽量使用初始化列表初始化
// 构造函数能不能只要初始化列表，不要函数体初始化
// 不能，因为有些初始化或者检查的工作，初始化列表也不能全部搞定
// 80-100%初始化列表搞定，还有需要用函数体，他们可以混着用
//class Stack
//{
//public:
//    Stack(int n = 2)
//        :_a((int*)malloc(sizeof(int)* n))
//        , _top(0)
//        , _capacity(n)
//    {
//        //...
//        //cout << "Stack(int n = 2)" << endl;
//        if (_a == nullptr)
//        {
//            perror("malloc fail");
//            exit(-1);
//        }
//
//        memset(_a, 0, sizeof(int) * n);
//    }
//
//    //...
//
//    int* _a;
//    int _top;
//    int _capacity;
//};
//
//
//class MyQueue
//{
//public:
//    MyQueue(int n1 = 10, int n2 = 20)
//        :_s1(n1)
//        , _s2(n2)
//    {}
//
//private:
//    Stack _s1;
//    Stack _s2;
//
//    int _size = 0;
//};

//int main()
//{
//    // 定义：对象整体定义
//    // 每个成员变量在什么地方定义呢？->初始化列表
//    bit::Date d1(2023, 10, 31);
//
//    //int& x;
//    //const int i;
//
//    MyQueue q1;
//    MyQueue q2(100, 100);
//
//
//    return 0;
//}

// **成员变量**在类中**声明次序**就是其在初始化列表中的**初始化顺序**，与其在初始化列表中的先后次序无关
// 建议声明顺序和初始化列表顺序保持一致，避免出现理解问题
class A
{
public:
    A(int a)
        :_a1(a)
        , _a2(_a1)
    {}

    void Print() {
        cout << _a1 << " " << _a2 << endl;
    }
private:
    int _a2;
    int _a1;
};
//
int main()
{
    //bit::Date dd(2023,12,23);
    A aa(1);
    //aa.Print();
}