#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//��Ͷ���ϰ(1)


//typedef int DataType;
//struct Stack
//{
//	void Init(size_t capacity)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc����ռ�ʧ��");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(const DataType& data)
//	{
//		// ����
//		_array[_size] = data;
//		++_size;
//	}
//	DataType Top()
//	{
//		return _array[_size - 1];
//	}
//	void Destroy()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//	DataType* _array;
//	size_t _capacity;
//	size_t _size;
//};
//int main()
//{
//	Stack s;
//	s.Init(10);
//	s.Push(1);
//	s.Push(2);
//	s.Push(3);
//	cout << s.Top() << endl;
//	s.Destroy();
//	return 0;
//}
//
//
//
//
//
//
//class className
//{
//
//// ���壺�ɳ�Ա�����ͳ�Ա�������
//
//};// һ��Ҫע�����ķֺ�

//1.�����Ͷ���ȫ������������

//class Person
//{
//public:
//	//��ʾ������Ϣ
//	void showinfo()
//	{
//		cout << _name << " " << _sex << " " << _age << endl;
//	}
//public:
//	char* _name;//����
//	char* _sex;//�Ա�
//	int _age;//����
//};

//class Person
//{
//public:
//	void PrintPersonInfo();
//public:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//// ������Ҫָ��PrintPersonInfo������Person�������
//void Person::PrintPersonInfo()
//{
//	cout << _name << " " << _gender << " " << _age << endl;



////���ʵ����
//int main()
//{
//	Person p;
//	p._age = 100; // ����ʧ�ܣ�error C2059: �﷨����:��.��
//	return 0;
//}


//��μ��������Ĵ�С
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	char _a;
//};





//// ���м��г�Ա���������г�Ա����
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// ���н��г�Ա����
//class A2 {
//public:
//	void f2() {}
//};
//
//
//// ����ʲô��û��---����
//class A3
//{};//1��
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//}


//// 1.�������������н���ǣ� A�����뱨�� B�����б��� C����������
//class A
//{
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}


//// 1.�������������н���ǣ� A�����뱨�� B�����б��� C����������
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();
//	return 0;
//}



class man
{
public:
	void manInit( int age, int tall)
		// ���������Զ����һ�������޸�ָ���thisָ�룬��������Ϊ���
		// �����ͽ�����Ҳ�����������⡣
	{
		cout << this << endl;  // �޷��޸ĵ����Զ�
		this->_age = age;      // �Զ���ʽ���
		this->_tall = tall;    // �Զ���ʽ��ӣ�����ֻ����Ϊ��ʾ
	}
public:
	int _age;
	int _tall;
};

int main()
{
	man li;
	man ikun;

	li.manInit(20, 165);
	ikun.manInit(25, 180);
	return 0;
}