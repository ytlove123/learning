#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//���캯����
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//       _year = year;
//       _month = month;
//       _day = day;
//    }
// void Print()
// {
//	 cout << _year << "-" << _month << "-" << _day << endl;
// }
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.Init(2022, 7, 5);
//	d1.Print();
//	Date d2;
//	d2.Init(2022, 7, 6);
//	d2.Print();
//	return 0;
//}

//class Date
//{
//public:
//	// 1.�޲ι��캯��
//	Date()
//	{}
//
//	// 2.���ι��캯��
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void TestDate()
//{
//	Date d1; // �����޲ι��캯��
//	Date d2(2015, 1, 1); // ���ô��εĹ��캯��
//
//	// ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
//	// ���´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
//	// warning C4930: ��Date d3(void)��: δ����ԭ�ͺ���(�Ƿ��������ñ��������?)
//	Date d3();
//}


//class Date
//{
//public:
//	
//	// ����û���ʽ�����˹��캯��������������������
//	//Date(int year, int month, int day)
//	//{
//	//_year = year;
//	//_month = month;
//	//_day = day;
//	//}
//	
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	// ��Date���й��캯�����κ󣬴������ͨ�����룬��Ϊ������������һ���޲ε�Ĭ�Ϲ��캯��
//	// ��Date���й��캯���ſ����������ʧ�ܣ���Ϊһ����ʽ�����κι��캯��������������������
//	// �޲ι��캯�����ſ��󱨴�error C2512: ��Date��: û�к��ʵ�Ĭ�Ϲ��캯������
//	Date d1;
//	return 0;
//}



//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	// ��������(��������)
//	int _year;
//	int _month;
//	int _day;
//	// �Զ�������
//	Time _t;
//};
//int main()
//{
//	Date d;
//	return 0;
//}



//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	// ��������(��������)
//	int _year = 1970;
//	int _month = 1;
//	int _day = 1;
//	// �Զ�������
//	Time _t;
//};
//int main()
//{
//	Date d;
//	return 0;
//}



class Date
{
public:
	Date()
	{
		_year = 1900;
		_month = 1;
		_day = 1;
	}
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
// ���²��Ժ�����ͨ��������
void Test()
{
	Date d1;
}