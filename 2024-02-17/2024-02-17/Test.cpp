#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;




//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//
//
//void Swap(double& left, double& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//
//
//void Swap(char& left, char& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}

//...


//泛型编程:编写与类型无关的通用代码，是代码复用的一种手段。模板是泛型编程的基础。



//template<typename T>
////template<class T>
//void Swap(T& left, T& right)
//{
//	T tmp = left;
//	left = right;
//	right = tmp;
//
//}
//int main()
//{
//	double d1= 2.2;
//	double d2 = 3.4;
//	cout << d1 << " " << d2 << endl;
//	Swap(d1, d2);
//	cout << d1 << " " << d2 << endl;
//
//
//	int d3 = 2;
//	int d4 = 3;
//	cout << d3 << " " << d4 << endl;
//	Swap(d3, d4);
//	cout << d3 << " " << d4 << endl;
//	return 0;
//
//}


//模板参数实例化分为：隐式实例化和显式实例化。


//1. 隐式实例化：让编译器根据实参推演模板参数的实际类型
//
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//	/*
//	该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
//	通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有一个T，
//	编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//	注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅
//	Add(a1, d1);
//	*/
//
//	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
//
//	// 用户自己来强制转化
//	Add(a1, (int)d2);
//	cout << Add(a1, (int)d2) << endl;
//
//
//	// 2.显式实例化
//	Add<int>(a1, d2);
//	cout << Add<int>(a1, d2) << endl;
//
//	return 0;
//}

//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//// 通用加法函数
//template<class T>
//T Add(T left, T right)
//{
//	return left + right;
//}
//void Test1()
//{
//	Add(1, 2); // 与非模板函数匹配，编译器不需要特化
//	Add<int>(1, 2); // 调用编译器特化的Add版本
//}
//
//void Test2()
//{
//	Add(1, 2); // 与非函数模板类型完全匹配，不需要函数模板实例化
//	Add(1, 2.0); // 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数
//}
//int main()
//{
//	Test1();
//	Test2();
//
//}


// 模板参数语法 很类似函数参数，函数参数定义的形参对象，模板参数定义的是类型
//template<class X,class Y>
//void func(const X& x, const Y& y)
//{
//	cout << x << y << endl;
//}
//
//template<class T>
//T* f(int n)
//{
//	T* p = new T[n];
//	return p;
//
//}


//int main()
//{
//	// 推演实例化
//	// 函数参数传递，推出模板参数的类型，生成对应的函数
//	//func(1, 2);
//	//func(1.1, 2.2);
//	//func(1.1, 2);
//
//	cout << Add(1, (int)2.2) << endl;
//
//	// 显式实例化
//	cout << Add<int>(1, 2.2) << endl;
//	cout << Add<double> (1, 2.2) << endl;
//
//	// 只能显示实例化调用
//	double* p = f<double>(10);
//
//	return 0;
//}


//类模板
template<class T>
class Stack
{
public:
	Stack(int capacity = 4)
	{
		cout << Stack(int capacity = 4) << endl;
		_a = new T[capacity];
		_top = 0;
		_capacity = capacity;
	}
	~Stack()
	{
		cout << ~Stack() << endl;
		delete[] _a;
		_a = nullptr;
		_top = 0;
		_capacity = 0;
	}
private:
	T* _a;
	int _top;
	int _capacity;

};

int main()
{
	//显示实例化
	Stack<int> st1; //int 
	Stack<double> st2; //double
	//Stack是类名，而Stack<int>才是类型

}