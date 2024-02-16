#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//	A& operator=(const A& aa)
//	{
//		cout << "A& operator=(const A& aa)" << endl;\
//			if (this != &aa)
//			{
//				_a = aa._a;
//			}
//		return *this;
//	}
//
//	~A()
//	{
//		cout << "~A()" << endl;
//
//	}
//private:
//	int _a;
//};

//void func1(A aa)
//{
//
//}
//
//int main()
//{
//	A aa1 = 1;
//	const A& aa2 = 2;
//
//	func1(A(3));
//	func1(4);
//
//	return 0;
//}

// 现在的编译基本一定会做
// 同一个表达式，连续
// 构造 + 拷贝构造 -> 构造
// 拷贝构造 + 拷贝构造 -> 拷贝构造
// 
// 新编译器可能还会跨表达优化，把中间一些不必要对象也优化掉（不同的编译器可能不同）

//A func2()
//{
//	A aa(1);
//	return aa;
//}

//A func3()
//{
//	A aa1(1);
//	A aa2 = aa1;
//	A aa3 = aa2;
// 
//	return aa3;
//}

//int main()
//{
//	A ret1 = func2();
//	//func2();
//
//	//A ret2 = func3();
//
//	return 0;
//}

//int main()
//{
//	//const char* const p1 ="abcd";
//	//const char* p1 这里的const修饰的是*p1
//	// 而char* const p1 修饰的才是p1
//	//p1++;
//	//(*p1)++; 
//
//	/*cout << p1 << endl;
//	char* p2 = (char*)p1;
//	p2[0]++;
//	cout << p2 << endl;*/
//
//	const int n = 10;
//	//n++;
//	int* p = (int*)&n;
//	return 0;
//}

//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}

//
//class A
//{
//public:
//	A(int a = 0)
//		: _a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//
//private:
//	int _a;
//};
//
//struct ListNode
//{
//	int _val;
//	ListNode* _next;
//
//	ListNode(int val)
//		:_val(val)
//		, _next(nullptr)
//	{}
//};
//
//int main()
//{
//	// 内置类型的对象申请释放，new和malloc除了用法上，没有区别
//	int* p1 = new int;//动态申请一个int类型的空间
//	int* p2 = new int[10];//动态申请10个int类型的空间
//
//	int* p3 = new int(10);// 动态申请一个int类型的空间并初始化为10
//	int* p4 = new int[10]{1,2,3};//动态申请10个int类型的空间，并初始化为1，2，3，0....0
//
//	delete p1;
//	delete[] p2;
//	delete p3;
//	delete[] p4;
//
//	// malloc不方便解决动态申请的自定义类型对象的初始化问题
//	// new的本质：开空间+调用构造函数初始化
//	// delete的本质：调用析构函数+释放空间
//	//A* p5 = (A*)malloc(sizeof(A));
//	A* p6 = new A;
//	A* p7 = new A(1);
//
//	ListNode* n1 = new ListNode(1);
//	ListNode* n2 = new ListNode(2);
//	ListNode* n3 = new ListNode(3);
//
//	A aa1(1);
//	A aa2(1);
//	A aa3(1);
//
//	A* p8 = new A[3]{ aa1, aa2, aa3 };
//	A* p9 = new A[3]{A(2), A(2), A(2) };
//	A* p10 = new A[3]{ 3, 3, 3 };
//
//	// 析构函数+释放空间
//	delete p6;
//	delete[] p10;
//
//	return 0;
//}


//void func()
//{
//	char* p1 = new char[1024 * 1024 * 1024];
//	cout << (void*)p1 << endl;
//
//	char* p2 = new char[1024 * 1024 * 1024];
//	cout << (void*)p2 << endl;
//}
//
//int main()
//{
//	try
//	{
//		func();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//}


class Stack
{
public:
	Stack(int capacity = 4)
	{
		cout << "Stack(int capacity = 4)" << endl;
		_a = new int[capacity];
		_top = 0;
		_capacity = capacity;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;

		delete[] _a;
		_a = nullptr;
		_top = 0;
		_capacity = 0;
	}
private:
	int* _a;
	int _top;
	int _capacity;
};

class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A(int a=0)" << endl;
	}
	~A()
	{
		cout << "~A" << endl;
	}
private:
	int _a;
};

//int main()
//{
//	Stack s1;
//
//	Stack* p1 = new Stack;
//	delete p1;
//
//
//	Stack* p2 = (Stack*)operator new(sizeof(Stack));
//	operator delete(p2);
//
//	printf("%p\n", p1);
//
//
//
//	Stack* p3 = new Stack[10];
//	delete[] p3;
//	//delete p3;
//
//
//	A* p4 = new A[10];
//	delete[] p4;
//	//delete p4;
//	//free (p4);
//
//
//	//	// new/delete  new[]/delete[] malloc/free
//	// 一定要配对使用，否则结果是未定义
//
//
//	//	//int* p5 = new int[10];
//	//free(p5);
//	return 0;
//}


int main()
{
	// 构造函数自动调用
	A aa1;

	// A* p2 = new A(1);

	A* p1 = (A*)operator new(sizeof(A));

	// 不能这么显示调用构造函数
	//p1->A(1);
	// 但是可以用定位new显示调用构造函数
	new(p1)A(1);

	// 析构函数可以显示调用
	p1->~A();
	operator delete(p1);

	return 0;
}