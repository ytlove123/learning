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
//	int* ptr2 = (int*)realloc(ptr, 20 * sizeof(int));//�޸�malloc���
//	int* ptr3 = (int*)realloc(ptr1, sizeof(long));//�޸�calloc���
//
//	free(ptr);
//	free(ptr1);
//	free(ptr2);
//	free(ptr3);
//}


//int main()
//{
//	//��̬����һ��int���͵Ŀռ�
//	int* ptr = new int;
//	//��̬����һ��double���͵Ŀռ䣬����ʼ��λ1.00
//	double* ptr1 = new double(1.00);
//	//��̬����5��int���͵Ŀռ�
//	int* ptr2 = new int[5];
//
//	//�ͷŵ����ռ�
//	delete ptr;
//	delete ptr1;
//	//�ͷ���������ռ�
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
//	//��������
//    //new-> operator new ->malloc
//	int* ptr = new int;
//	//delete-> operator delete -> free
//	delete ptr;
//
//	//�Զ�������
//	//new-> operator new ->malloc ->���캯��
//	A* pa = new A;
//	//��������-> delete-> operator delete -> free
//	delete pa;
//}

//class ListNode
//{
//public:
//	void* operator new(size_t n)
//	{
//		//�����ڴ�صķ�ʽ
//		std::cout << "operator new" << std:: endl;
//		std::allocator<ListNode> alloc; //�ռ�������
//		return alloc.allocate(1);
//	}
//
//	void operator delete(void* ptr)
//	{
//		std::cout << "operator delete" << std::endl;
//		std::allocator<ListNode> alloc;//�ռ�������
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
//	//���Ѿ����ڵĿռ��ʼ��
//	new(a1)A;//���ǹ��캯�������ڲ�������������乹�캯���в���ʱ����Ҫ����
//	//��ʾ������������
//	a1->~A();
//	free(a1);
//
//
//	A* a2 = (A*)operator new(sizeof(A));
//	//���Ѿ����ڵĿռ��ʼ��
//	new(a2)A(5);
//	//��ʾ������������
//	a2->~A();
//	operator delete(a2);
//	return 0;
//}



//void Test()
//{
//	// 1.�ڴ������������ͷ�
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p2 = new int;
//
//	// 2.�쳣��ȫ����
//	int* p3 = new int[10];
//
//	Func(); // ����Func�������쳣���� delete[] p3δִ�У�p3û���ͷ�.
//
//	delete[] p3;
//}

int main()
{
	int* ptr1 = (int*)malloc(sizeof(int));
	//int* prt2 = new int;
	_CrtDumpMemoryLeaks();//�ú���ֻ�ڵ���ģʽ����Ч
	return 0;
}