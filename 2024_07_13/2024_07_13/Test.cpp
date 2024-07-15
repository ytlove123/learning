#include <iostream>
#include <iterator>

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

//void Test(char char2[])
//{
//	//std::cout << *char2<< std::endl;
//	std::cout << char2<< std::endl;
//	
//
//}
//int main()
//{
//	char char2[] = "abcd";
//	//Test("abcd");
//	/*std::cout << *char2 << std::endl;
//	printf("%c\n", *char2);
//	std::cout << char2 << std::endl;
//	printf("%p\n", char2);
//	std::cout << &char2 << std::endl;
//	std::cout << &char2[0] << std::endl;
//	std::cout << char2[0] << std::endl;*/
//	Test(& char2[0]);
//	Test(& char2[1]);
//
//	
//	return 0;
//}

//int main()
//{
//	int* ptr = (int*)malloc(10 * sizeof(int));
//
//	int* ptr1 = (int*)calloc(10,sizeof(int));
//
//	int* ptr2 = (int*)realloc(ptr, 20 * sizeof(int));//修改malloc后的
//	int* ptr3 = (int*)realloc(ptr1, sizeof(long));//修改calloc后的
//
//	free(ptr);
//	free(ptr1);
//	free(ptr2);
//	free(ptr3);
//}


//int main()
//{
//	//动态申请一个int类型的空间
//	int* ptr = new int;
//	//动态申请一个double类型的空间，并初始化位1.00
//	double* ptr1 = new double(1.00);
//	//动态申请5个int类型的空间
//	int* ptr2 = new int[5];
//
//	//释放单个空间
//	delete ptr;
//	delete ptr1;
//	//释放连续多个空间
//	delete[] ptr2;
//
//
//
//	
//}


//class A
//{
//public:
//	A(int a) :_a(a)
//	{
//		std::cout << "A(int a)" << std::endl;
//	}
//	~A()
//	{
//		std::cout << "~A()" << std::endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* aa = new A(1);
//	A* bb = new A[3]{1,2,3};
//	delete aa;
//
//}


//int main()
//{
//	int* ptr1 = (int*)malloc(10 * sizeof(int));
//	int* ptr2 = (int*)operator new(10 * sizeof(int));
//
//	free(ptr1);
//	operator delete(ptr2);
//}


//int main()
//{
//	//内置类型
//    //new-> operator new ->malloc
//	int* ptr = new int;
//	//delete-> operator delete -> free
//	delete ptr;
//
//	//自定义类型
//	//new-> operator new ->malloc ->构造函数
//	A* pa = new A;
//	//析构函数-> delete-> operator delete -> free
//	delete pa;
//}

//class ListNode
//{
//public:
//	void* operator new(size_t n)
//	{
//		//采用内存池的方式
//		std::cout << "operator new" << std:: endl;
//		std::allocator<ListNode> alloc; //空间配置器
//		return alloc.allocate(1);
//	}
//
//	void operator delete(void* ptr)
//	{
//		std::cout << "operator delete" << std::endl;
//		std::allocator<ListNode> alloc;//空间配置器
//		alloc.deallocate((ListNode*)ptr, 1);
//	}
//private:
//	int _data = 0;
//	ListNode* _next = nullptr;
//};
//
//void test()
//{
//	ListNode* node = new ListNode;
//	delete node;
//}
//int main()
//{
//	test();
//	return 0;
//}

//class A
//{
//public:
//	A(int a) :_a(a)
//	{
//		std::cout << "A()" << std::endl;
//	}
//	~A()
//	{
//		std::cout << "~A()" << std::endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* a1 = (A*)malloc(sizeof(A));
//	//对已经存在的空间初始化
//	new(a1)A;//这是构造函数不存在参数的情况，当其构造函数有参数时，需要传参
//	//显示调用析构函数
//	a1->~A();
//	free(a1);
//
//
//	A* a2 = (A*)operator new(sizeof(A));
//	//对已经存在的空间初始化
//	new(a2)A(5);
//	//显示调用析构函数
//	a2->~A();
//	operator delete(a2);
//	return 0;
//}



//void Test()
//{
//	// 1.内存申请了忘记释放
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p2 = new int;
//
//	// 2.异常安全问题
//	int* p3 = new int[10];
//
//	Func(); // 这里Func函数抛异常导致 delete[] p3未执行，p3没被释放.
//
//	delete[] p3;
//}

int main()
{
	int* ptr1 = (int*)malloc(sizeof(int));
	//int* prt2 = new int;
	_CrtDumpMemoryLeaks();//该函数只在调试模式下有效
	return 0;
}