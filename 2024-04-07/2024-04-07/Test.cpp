#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//类和对象复习(1)


//typedef int DataType;
//struct Stack
//{
//	void Init(size_t capacity)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//	void Push(const DataType& data)
//	{
//		// 扩容
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
//// 类体：由成员函数和成员变量组成
//
//};// 一定要注意后面的分号

//1.声明和定义全部放在类体中

//class Person
//{
//public:
//	//显示基本信息
//	void showinfo()
//	{
//		cout << _name << " " << _sex << " " << _age << endl;
//	}
//public:
//	char* _name;//姓名
//	char* _sex;//性别
//	int _age;//年龄
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
//// 这里需要指定PrintPersonInfo是属于Person这个类域
//void Person::PrintPersonInfo()
//{
//	cout << _name << " " << _gender << " " << _age << endl;



////类的实例化
//int main()
//{
//	Person p;
//	p._age = 100; // 编译失败：error C2059: 语法错误:“.”
//	return 0;
//}


//如何计算类对象的大小
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





//// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//
//
//// 类中什么都没有---空类
//class A3
//{};//1、
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//}


//// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
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


//// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
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
		// 编译器会自动添加一个不可修改指向的this指针，不允许人为添加
		// 这样就解决了找不到对象的问题。
	{
		cout << this << endl;  // 无法修改但可以读
		this->_age = age;      // 自动隐式添加
		this->_tall = tall;    // 自动隐式添加，这里只是人为显示
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