#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
//
//template <class T>
//T* func(int n)
//{
//	return new T[n];
//
//}
//
////普通函数
//int Add(int left, int right)
//{
//	return left + right;
//}

//函数模板
//template<class T>
//T Add(T left,T right)
//{
//	return left + right;
//}
//
//int main()
//{
//	func<double> (10);
//
//	// 匹配调用原则：
//	// 1、合适匹配的情况下，有现成的就吃现成
//	// 2、没有就将就吃
//	// 3、有更合适就吃更合适的，哪怕要自己现做
//	Add(1, 2);
//	Add(1.1, 2.2);
// 
//	return 0;
//}

//template <class T>
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		cout << Stack(int n = 4) << endl;
//		_a = new T[capacity];
//		_top = 0;
//		_capacity = n;
//	}
//	~Stack()
//	{
//		cout << ~Stack() << endl;
//	}
//private:
//	T* _a;
//	int _top;
//	int _capacity;
//};


// 注意：类模板中函数放在类外进行定义时，需要加模板参数列表
//template <class T>
//class Stack
//{
//public:
//	Stack(int n = 4);
//	
//	~Stack()
//	{
//		cout << ~Stack() << endl;
//	}
//private:
//	T* _a;
//	int _top;
//	int _capacity;
//};
//
//template<class T>
//Stack<T>::Stack(int n)
//{
//	cout << "Stack(int n = 4)" << endl;
//
//	_a = new T[n];
//	_top = 0;
//	_capacity = n;
//}


///////////////////////////////////////////////////////////////////////////



//int main()
//{
//	const char* s = "abc";
//	string s0("hello world");
//	cout << s0 << endl;
//
//	string s1; //(1)
//	cout << s1 << endl;
//
//	string s2(s0); //(2)
//	//等价于 string s2=s0;
//	cout << s2 << endl;
//
//	string s3(s0, 2, 5); //(3)
//	cout << s3 << endl;
//	string a1(s0, 1, 100);
//	cout << a1 << endl;
//
//	string s4(s);//(4)
//	cout << s4 << endl;
//
//	string s5(s, 1);//(5)
//	cout << s5 << endl;
//
//	string s6(10, 'x');
//	cout << s6 << endl;
//
//
//	s1 = s0;
//	cout << s1 << endl;
//
//	s1 = "world";
//	cout << s1 << endl;
//
//
//	s1 = "x";
//	cout << s1 << endl;
//
//	return 0;
//}



namespace bit
{
	class string
	{
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}


//遍历和访问
//int main()
//{
//	string s1("hello world");

	/*cout << s1.size() << endl;
	cout << s1.length() << endl;*/

	/*cout << s1.operator[](1) << endl;
	cout << s1.operator[](3) << endl;*/

	//for (size_t i = 0; i < s1.size(); i++)
	//{
	//	//cout << s1.operator[](i);
	//	cout << s1[i];
	//}

	//cout << endl;
	//s1[0] = 'x';
	//cout << s1 << endl;

	//// string给逆置一下
	//size_t begin = 0, end = s1.size() - 1;
	//while (begin < end)
	//{
	//	/*char tmp = s1[begin];
	//	s1[begin] = s1[end];
	//	s1[end] = tmp;*/
	//	swap(s1[begin], s1[end]);
	//	++begin;
	//	--end;
	//}
	//cout << s1 << endl;


	// iterator用法像指针
	//string::iterator it = s1.begin();
	//while (it != s1.end())
	//{
	//	//*it += 1;
	//	cout << *it << " ";
	//	++it;
	//}

	//string::const_iterator it = s1.begin();
	//while (it != s1.end())
	//{
	//	*it += 1;
	//	cout << *it << " ";
	//	++it;
	//}
	//cout << endl;
	//reverse(s1.begin(), s1. end());//逆置
	//cout << s1 << endl;


	/*vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	vector<int>::iterator it(v.begin());
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	reverse(v.begin(), v.end());
	it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;*/

//	list<int> l;
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//	l.push_back(4);
//	l.push_back(5);
//
//	list<int>::iterator it(l.begin());
//	while (it != l.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	reverse(l.begin(), l.end());
//	it = l.begin();
//	while (it != l.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//
//}


//int main()
//{
//	string s1("hello world");
//	const string s2("hello world");
//	//s1[0] = 'x';
//	////s2[0] = 'x';
//	//cout << s2[0] << endl;
//
//	//string::const_iterator it = s2.begin();
//	//while (it != s2.end())
//	//{
//	//	//*it += 1;
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	//cout << endl;
//
//	
//	for (auto e : s1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

int main()
{
	vector<const char*> v= {"hello world"};
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		cout << *it<<endl;
	}
	for (auto e : v)
	{
		cout << e << endl;
	}
}