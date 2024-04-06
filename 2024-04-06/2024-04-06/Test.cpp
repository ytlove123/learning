#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <time.h>
using namespace std;


//缺省参数复习
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	Func(); // 没有传参时，使用参数的默认值
//	Func(10); // 传参时，使用指定的实参
//	return 0;
//}

//全缺省参数
//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	Func();
//	return 0;
//}


//半缺省参数
//void Func(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	Func(1);
//	Func(1,4);
//	Func(1,4,6);
//	return 0;
//}

//半缺省参数必须从右往左依次来给出，不能间隔着给
//void Func(int a = 9, int b, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//int main()
//{
//	//Func();
//	//Func(1);
//	//Func(1,4);
//	//Func(1,4,6);
//	return 0;
//}

//int d = 1;
//void Func(int a=d, int b=3, int c=3)
//{
//	cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;
//}
//int main()
//{
//	Func();
//	return 0;
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//函数重载

// 1、参数类型不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1.0, 2.0);
//	return 0;
//}

//// 2、参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
// cout << "f(int a)" << endl;
//}
//int main()
//{
//	//f();
//	f(1);
//	return 0;
//}


// 3、参数类型顺序不同
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//int main()
//{
//	f(3, 'e');
//	f('e', 3);
//	return 0;
//}

//构成重载，在不传参数的时候调用会存在二义性
//void fun()
//{
//	cout << "fun()" << endl;
//}
//void fun(int a)
//{
//	cout << "fun(int a)" << endl;
//}
//void fun(int a=0)
//{
//	cout << "fun(int a)" << endl;
//}
//int main()
//{
//	fun();
//	return 0;
//}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////




//引用

//void TestRef()
//{
//	int a = 10;
//	int& ra = a;//<====定义引用类型
//	printf("%p\n", &a);
//	printf("%p\n", &ra);
//	printf("%d\n", a);
//	printf("%d\n", ra);
//}

//void TestRef()
//{
//	int a = 10;
//	int b = 9;
//    //int& ra; // 该条语句编译时会出错
//	int& ra = a;
//	int& ra = b;
//	int& rra = a;
//	printf("%p %p %p\n", &a, &ra, &rra);
//}
//int main()
//{
//	TestRef();
//	return 0;
//}

//常引用
//void TestConstRef()
//{
//	const int a = 10;
//	//int& ra = a;   // 该语句编译时会出错，a为常量
//	const int& ra = a;
//	// int& b = 10; // 该语句编译时会出错，b为常量
//	const int& b = 10;
//	double d = 12.34;
//	//int& rd = d; // 该语句编译时会出错，类型不同
//	const int& rd = d;
//}

//做参数
//void Swap(int* left, int* right)
//{
//	int temp = *left;
//	*left = *right;
//	*right = temp;
//}
//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//int main()
//{
//	int a = 4;
//	int b = 9;
//	Swap(&a,&b);
//	Swap(a, b);
//	return 0;
//}
//
//做返回值
//int Add1(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int& Add2(int a, int b)
//{
//	static int c = a + b;
//	return c;
//}
//
//int main()
//{
//	Add1(1, 2);
//	int& ret = Add2(1, 2);
//	cout << "Add(1, 2) is :"<<ret << endl;
//}


////出了函数作用域，返回对象就销毁了，不能引用返回，否则结果是不确定的
//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = Add(1, 2);
//	Add(3, 4);
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
//}

//传值、传引用效率比较

//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}


////值和引用作为返回值的性能比较
//struct A { int a[10000]; };
//A a;
//// 值返回
//A TestFunc1() { return a; }
//// 引用返回
//A& TestFunc2() { return a; }
//void TestReturnByRefOrValue()
//{
//	// 以值作为函数的返回值类型
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//	// 以引用作为函数的返回值类型
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// 计算两个函数运算完成之后的时间
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestReturnByRefOrValue();
//	return 0;
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////



//引用和指针的区别

//auto关键字
//int TestAuto()
//{
//	return 10;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	//auto e; 无法通过编译，使用auto定义变量时必须对其进行初始化
//	return 0;
//}


//auto与指针和引用结合起来使用
//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	*a = 20;
//	*b = 30;
//	c = 40;
//	return 0;
//}

//在同一行定义多个变量
//void TestAuto()
//{
//	auto a = 1, b = 2;
//	auto c = 3, d = 4.0; // 该行代码会编译失败，因为c和d的初始化表达式类型不同
//}


// auto不能作为函数的参数
// 此处代码编译失败，auto不能作为形参类型，因为编译器无法对a的实际类型进行推导
//void TestAuto(auto a)
//{}


// auto不能直接用来声明数组
//void TestAuto()
//{
//	int a[] = { 1,2,3 };
//	auto b[] = { 4，5，6 };
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////

//范围for

//void TestFor1()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//		array[i] *= 2;
//	for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
//		cout << *p << endl;
//}
//void TestFor2()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//	for (auto& e : array)
//		e *= 2;
//	for (auto e : array)
//		cout << e << " ";
//}

//void TestFor(int array[])
//{
//	for (auto& e : array)
//		cout << e << endl;
//}



//nullptr

void f(int)
{
	cout << "f(int)" << endl;
}
void f(int*)
{
	cout << "f(int*)" << endl;
}
int main()
{
	f(0);
	f(NULL);
	f((int*)NULL);
	return 0;
}