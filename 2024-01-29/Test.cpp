#include<iostream>
#include<assert.h>
using namespace std;

// void Swap(int& a, int& b)
// void SLTPushBack(SLTNode*& phead, int x)
//int main()
//{
//	int a = 0;
//	int& b = a;
//	a++;
//	b++;
//
//	int x = 0;
//	int y = 1;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//
//	// ���ñ����ʼ��
//	// int& b;
//
//	int& c = a;
//	int d = 1;
//
//	// c���d�ı���������d��ֵ��c��
//	c = d;
//
//	// һ����������ж�����������Ա�������ȡ����
//	int& e = a;
//	int& f = e;
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int& c = a;
//	c = b;
//
//	return 0;
//}

#include <time.h>
struct A { int a[10000]; };

void TestFunc1(A aa) {}

void TestFunc2(A& aa) {}

void TestRefAndValue()
{
	A a;
	// ��ֵ��Ϊ��������
	size_t begin1 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFunc1(a);
	size_t end1 = clock();

	// ��������Ϊ��������
	size_t begin2 = clock();
	for (size_t i = 0; i < 10000; ++i)
		TestFunc2(a);
	size_t end2 = clock();

	// �ֱ���������������н������ʱ��
	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
}


A a;
// ֵ����
A TestFunc1() { return a; }
// ���÷���
A& TestFunc2() { return a; }

void TestReturnByRefOrValue()
{
	// ��ֵ��Ϊ�����ķ���ֵ����
	size_t begin1 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc1();
	size_t end1 = clock();

	// ��������Ϊ�����ķ���ֵ����
	size_t begin2 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc2();
	size_t end2 = clock();

	// �������������������֮���ʱ��
	cout << "TestFunc1 time:" << end1 - begin1 << endl;
	cout << "TestFunc2 time:" << end2 - begin2 << endl;
}

//int main()
//{
//	//TestRefAndValue();
//	TestReturnByRefOrValue();
//
//	return 0;
//}

//int& Count()
//{
//	int n = 0;
//	n++;
//
//	return n;
//}
//
//int main()
//{
//	int ret = Count();
//	cout << ret << endl;
//
//	cout << ret << endl;
//
//	return 0;
//}

//int& Count()
//{
//	int n = 0;
//	n++;
//
//	return n;
//}
//
//int main()
//{
//	int& ret = Count();
//	cout << ret << endl;
//	cout << ret << endl;
//
//	Count();
//	cout << ret << endl;
//
//	return 0;
//}

// ���˺��������򣬷��ض���������ˣ����������÷��أ��������ǲ�ȷ��
//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//
//int main()
//{
//	int& ret = Add(1, 2);
//	cout << "Add(1, 2) is :" << ret << endl;
//
//	Add(3, 4);
//
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
//}

//int& Add(int a, int b)
//{
//	static int c;
//	c = a + b;
//
//	return c;
//}
//


//int main()
//{
//	int& ret = Add(1, 2);
//	cout << "Add(1, 2) is :" << ret << endl;
//
//	Add(3, 4);
//
//	cout << "Add(1, 2) is :" << ret << endl;
//	return 0;
//}

//void func1()
//{
//	int c = 0;
//	cout << &c << endl;
//}
//
//void func2()
//{
//	int a = 0;
//	cout << &a << endl;
//}
//
//int main()
//{
//	/*func();
//
//	func();*/
//
//	func1();
//
//	func2();
//
//	return 0;
//}

typedef struct SeqList
{
	int a[100];
	int size;
}SL;

void SLModify(SL* ps, int pos, int x)
{
	//...
	assert(ps);
	assert(pos < ps->size);
	ps->a[pos] = x;
}

// ����������ֵ�������޸ķ��ض���
//int& SLat(SL* ps, int pos)
//{
//	assert(ps);
//	assert(pos < ps->size);
//	
//	return ps->a[pos];
//}
//
//int main()
//{
//	SL s;
//	//...
//
//	SLat(&s, 3) = 10;
//
//	// ÿ��λ�õ�ֵ++
//	for (size_t i = 0; i < s.size; i++)
//	{
//		SLat(&s, i)++;
//	}
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////
// ������
//int main()
//{
//	// Ȩ�޲��ܷŴ�
//	const int a = 10;
//	//int& b = a;
//	const int& b = a;
//
//	// Ȩ�޿�����С
//	int c = 20;
//	const int& d = c;
//	const int& e = 10;
//
//	int i = 1;
//	double j = i;
//
//	const double& rj = i;
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//
//	//// �﷨��b�Ƿ񿪿ռ��ˣ�û��
//	//int& b = a;
//
//	//// �﷨��ptr���˿ռ�
//	//int* ptr = &a;
//
//	//char ch = 'x';
//	//char& r = ch;
//	//cout << sizeof(r) << endl;
//	return 0;
//}

//#define ADD(int x, int y) return x + y;
//#define ADD(x, y) return x + y;
//#define ADD(x, y) x + y;
//#define ADD(x, y) (x + y)
//#define ADD(x, y) (x) + (y)
//#define ADD(x, y) ((x) + (y));
#define ADD(x, y) ((x) + (y))

// ���ȱ��
// 1�����׳����﷨ϸ�ڶ�
// 2�����ܵ���
// 3��û�����Ͱ�ȫ�ļ��

//int main()
//{
//	// д���ˣ������滻����
//	int ret1 = ADD(2, 3)*5; // ��(2)+(3))*5
//
//	int a = 1, b = 2;
//	//int ret2 = ADD(a | b, a & b); // ((a | b) + (a & b))
//	//int ret2 = ((a | b) + (a & b));
//
//	return 0;
//}

// enum const inline �����
// enum const -> �곣��
// inline ->�꺯��

// ���Ե���
// Ч�ʸߣ���չ��
// ��д���﷨��
//inline int Add(int x, int y)
//{
//	int c = x + y;
//	return c;
//}
//
//int main()
//{
//	int ret1 = Add(1, 2);
//
//	// �ŵ㣺���ý���ջ֡�����Ч��
//	int ret2 = ADD(1, 2);
//
//	return 0;
//}

inline int Add(int x, int y)
{
	int c = x + y;
	int c1 = x + y;
	int c2 = x + y;
	int c3 = x + y;
	int c4 = x + y;
	int c5 = x + y;
	int c6 = x + y;
	int c7 = x + y;
	int c8 = x + y;
	int c9 = x + y * c8;
	int c10 = x + y;
	int c11 = x + y;
	return c1 + c10 - c9;
}

int main()
{
	int ret1 = Add(1, 2);
	int ret3 = Add(1, 2);


	// �ŵ㣺���ý���ջ֡�����Ч��
	int ret2 = ADD(1, 2);

	return 0;
}