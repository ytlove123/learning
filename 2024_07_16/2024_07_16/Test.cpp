#include <iostream>
#include <stack>
//��������ģ��
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
//	// ��ʱ�����ִ���ʽ��1. �û��Լ���ǿ��ת�� 2. ʹ����ʽʵ����
//	Add(a1, (int)d1); //�û��Լ���ǿ��ת��
//
//	Add<int>(a1,d1); //ʹ����ʽʵ����
//	return 0;
//}



////ר�Ŵ���int�͵�add����
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
//	//Add(1, 2);       // ���ģ�庯��ƥ�䣬����������Ҫ�ػ�
//	Add<int>(1, 2); // ���ñ������ػ���Add��
//
//
//
//	return 0;
//}




////ר�Ŵ���int�͵�add����
//int Add(int a, int b)
//{
//	std::cout << "int Add()" << std::endl;
//	return a + b;
//
//}
////ͨ��ģ�庯��
//template<class T1, class T2>
//T1 Add(T1 a, T2 b)
//{
//	std::cout << "T1 Add()" << std::endl;
//	return a + b;
//}
//
//int main()
//{
//	Add(1, 2); // ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����
//	Add(1, 2.0); // ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add����
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




//��ģ��

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
//// ����ģ�� -- ����ƥ��
//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}
//int main()
//{
//	std::cout << Less(1, 2) <<std::endl; // ���ԱȽϣ������ȷ
//	Date d1(2022, 7, 7);
//	Date d2(2022, 7, 8);
//	std::cout << Less(d1, d2) <<std::endl; // ���ԱȽϣ������ȷ
//	Date* p1 = &d1;
//	Date* p2 = &d2;
//	std::cout << Less(p1, p2) << std::endl; // ���ԱȽϣ��������
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
//// ����ģ�� -- ����ƥ��
//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}
//
//// ��Less����ģ������ػ�
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
//	std::cout << Less(p1, p2) << std::endl; // �����ػ�֮��İ汾��������ģ��������
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
////ȫ�ػ�
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
// ���ڶ��������ػ�Ϊint
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

//��������ƫ�ػ�Ϊָ������
template <class T1, class T2>
class Data <T1*, T2*>
{
public:
	Data() { std::cout << "Data<T1*, T2*>" << std::endl; }

private:
	T1 _d1;
	T2 _d2;
};
//��������ƫ�ػ�Ϊ��������
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
	Data<double, int> d1; // �����ػ���int�汾
	Data<int, double> d2; // ���û�����ģ�� 
	Data<int*, int*> d3; // �����ػ���ָ��汾
	Data<int&, int&> d4(1, 2); // �����ػ������ð汾
}



int main()
{
	//Test();
	Test1();
	return 0;
}