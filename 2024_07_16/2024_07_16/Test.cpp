#include <iostream>
#include <stack>
//交换函数模板
////template<typename T>
//template<class T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//
//}





//template<typename T>
//T Add(const T& x,const T& y)
//{
//	return x + y;
//}
//int main()
//{
//	int a1 = 10;
//	int a2 = 20;
//	double d1 = 10.0;
//	double d2 = 12.0;
//	Add(a1, a2);
//	Add(d1, d2);
//	/*Add(a1, d2);
//	*/
//	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
//	Add(a1, (int)d1); //用户自己来强制转化
//
//	Add<int>(a1,d1); //使用显式实例化
//	return 0;
//}



////专门处理int型的add函数
//int Add(int a, int b)
//{
//	std::cout << "int Add()" << std::endl;
//	return a + b;
//	
//}
//
//template<class T>
//T Add(const T& c, const T& d)
//{
//	std::cout << "T Add()" << std::endl;
//	return c + d;
//	
//}
//
//int main()
//{
//	//Add(1, 2);       // 与非模板函数匹配，编译器不需要特化
//	Add<int>(1, 2); // 调用编译器特化的Add版
//
//
//
//	return 0;
//}




////专门处理int型的add函数
//int Add(int a, int b)
//{
//	std::cout << "int Add()" << std::endl;
//	return a + b;
//
//}
////通用模板函数
//template<class T1, class T2>
//T1 Add(T1 a, T2 b)
//{
//	std::cout << "T1 Add()" << std::endl;
//	return a + b;
//}
//
//int main()
//{
//	Add(1, 2); // 与非函数模板类型完全匹配，不需要函数模板实例化
//	Add(1, 2.0); // 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数
//	return 0;
//}
//
//
//template <class T1, class T2=double>
//void div(T1 a)
//{
//	T2 b = 10;
//	std::cout << a / b;
//}
//int main()
//{
//	div(2);
//	return 0;




//类模板

//template <class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//		:_a(new T[capacity])
//		, _size(0)
//		,_capacity(capacity)
//	{}
//	~Stack()
//	{
//		if (_a)
//		{
//			delete[] _a;
//			_size = 0;
//			_capacity = 0;
//		}
//	}
//private:
//	T* _a;
//	size_t _capacity;
//	size_t _size;
//};
//
//int main()
//{
//	Stack<int>s1;
//}




//
//template <class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//		:_a(new T[capacity])
//		, _size(0)
//		, _capacity(capacity)
//	{}
//	~Stack();
//private:
//	T* _a;
//	size_t _capacity;
//	size_t _size;
//};
//
//
//template <class T>
//Stack<T>::~Stack()
//{
//	if (_a)
//	{
//		delete[] _a;
//		_size = 0;
//		_capacity = 0;
//	}
//}
//int main()
//{
//	Stack<int>s1;
//}





//
//template<class T, int N=10>
//class array
//{
//public:
//
//private:
//	T _array[N];
//	
//};
//int main()
//{
//	array<int> a;
//}

//class Date 
//{
//public:
//	Date(int year, int month,int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	~Date()
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//// 函数模板 -- 参数匹配
//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}
//int main()
//{
//	std::cout << Less(1, 2) <<std::endl; // 可以比较，结果正确
//	Date d1(2022, 7, 7);
//	Date d2(2022, 7, 8);
//	std::cout << Less(d1, d2) <<std::endl; // 可以比较，结果正确
//	Date* p1 = &d1;
//	Date* p2 = &d2;
//	std::cout << Less(p1, p2) << std::endl; // 可以比较，结果错误
//	return 0;
//}





//class Date 
//{
//public:
//	Date(int year, int month,int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	~Date()
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//bool& operator<(const Date& d1,const Date& d2)
//{
//
//}
//// 函数模板 -- 参数匹配
//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}
//
//// 对Less函数模板进行特化
//template<>
//bool Less<Date*>(Date* left, Date* right)
//{
//	return *left < *right;
//}
//
//int main()
//{
//	std::cout << Less(1, 2) << std::endl;
//	Date d1(2022, 7, 7);
//	Date d2(2022, 7, 8);
//	std::cout << Less(d1, d2) << std::endl;
//	Date* p1 = &d1;
//	Date* p2 = &d2;
//	std::cout << Less(p1, p2) << std::endl; // 调用特化之后的版本，而不走模板生成了
//	return 0;
//}



//template<class T1, class T2>
//class Data
//{
//public:
//	Data() { std::cout << "Data<T1, T2>" << std::endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
////全特化
//template<>
//class Data<int, char>
//{
//public:
//	Data() { std::cout << "Data<int, char>" << std::endl; }
//private:
//	int _d1;
//	char _d2;
//};
//void TestVector()
//{
//	//Data<int, int> d1;
//	Data<int, char> d2;
//}
//int main()
//{
//	TestVector();
//	return 0;
//}




template<class T1, class T2>
class Data
{
public:
	Data() { std::cout << "Data<T1, T2>" << std::endl; }
private:
	T1 _d1;
	T2 _d2;
};
// 将第二个参数特化为int
template <class T1>
class Data<T1, int>
{
public:
	Data() { std::cout << "Data<T1, int>" << std::endl; }
private:
	T1 _d1;
	int _d2;
};
void Test()
{
	Data<double, double>d1;
	Data<double, int>d2;
}

//两个参数偏特化为指针类型
template <class T1, class T2>
class Data <T1*, T2*>
{
public:
	Data() { std::cout << "Data<T1*, T2*>" << std::endl; }

private:
	T1 _d1;
	T2 _d2;
};
//两个参数偏特化为引用类型
template <class T1, class T2>
class Data <T1&, T2&>
{
public:
	Data(const T1& d1, const T2& d2)
		: _d1(d1)
		, _d2(d2)
	{
		std::cout << "Data<T1&, T2&>" << std::endl;
	}

private:
	const T1& _d1;
	const T2& _d2;
};
void Test1()
{
	Data<double, int> d1; // 调用特化的int版本
	Data<int, double> d2; // 调用基础的模板 
	Data<int*, int*> d3; // 调用特化的指针版本
	Data<int&, int&> d4(1, 2); // 调用特化的引用版本
}



int main()
{
	//Test();
	Test1();
	return 0;
}