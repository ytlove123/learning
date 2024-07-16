#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
using namespace std;

//void Swap(int& a,int& b);
//void STLPushBack(SLTNode*& phead, int x);

//int main()
//{
//	int a = 0;
//	int& b = a;
//	a++;
//	//b++;
//
//	int x = 0;
//	int y = 1;
//	printf("%d %d", a, b);
//	printf("\n");
//	printf("%d %d", x, y);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	//引用必须初始化
//	//int& b；
//
//	int& c = a;
//	int d = 1;
//
//	//c变成d的别名？还是d赋值给c？
//	c = d;
//
//	//一个队形可以有多个别名，可以别名继续取别名
//	int& e = a;
//	int& f = e;
//
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	int b = 1;
//	int& c = a;
//	c = b;
//
//	cout << a << " "<<b<<" " << c;
//	/*cout << b << endl;
//	cout << c << endl;*/
//	return 0;
//}



//引用的好处
// 1：提高效率
#include <time.h>
struct A { int a[10000]; };

void TestFunc1(A aa)
{
	//...
}

void TestFunc2(A& aa)
{
	//...
}

void TestRsfAndValue()
{
	A a;
	//以值作为函数参数
	size_t begin1 = clock();

	for (size_t i = 0;i < 10000;i++)
		TestFunc1(a);
	size_t end1 = clock();

	//以引用作为函数参数
	size_t begin2 = clock();
	for (size_t i = 0;i < 10000;i++)
		TestFunc2(a);
	size_t end2 = clock();

	//分别计算两个函数运行结束后的时间
	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
	cout << "TestFunc2(&A)-time:" << end2 - begin2 << endl;

}


A a;
// 值返回
A  TestFunc1() { return a; }
// 引用返回
A& TestFunc2() { return a; }

void TestReturnByRefOrValue()
{
	// 以值作为函数的返回值类型
	size_t begin1 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc1();
	size_t end1 = clock();

	// 以引用作为函数的返回值类型
	size_t begin2 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc2();
	size_t end2 = clock();

	// 计算两个函数运算完成之后的时间
	cout << "TestFunc1 time:" << end1 - begin1 << endl;
	cout << "TestFunc2 time:" << end2 - begin2 << endl;
}


int main()
{
	//TestRsfAndValue();
	TestReturnByRefOrValue();

	return 0;
}

