#define _CRT_SECURE_NO_WARNINGS 1

#include "Date.h"

void TestDate1()
{
	Date d1(2023, 10, 24);
	d1.Print();

	Date ret1 = d1 - 100;
	ret1.Print();

	Date ret2 = d1 - 10000;
	ret2.Print();

	Date ret3 = d1 + 100;
	ret3.Print();

	Date ret4 = d1 + 10000;
	ret4.Print();
}

void TestDate2()
{
	Date d1(2023, 10, 24);
	d1.Print();

	// �﷨��ƣ��޷��߼��ջ�����ô��ʱ��ֻ�����⴦��
	// ���⴦��
	++d1;
	d1.operator++();
	d1.Print();

	d1++;
	d1.operator++(10);
	d1.operator++(1);
	d1.Print();
}

void TestDate3()
{
	Date d1(2023, 10, 24);
	d1.Print();

	Date d2(2024, 5, 5);
	d2.Print();


	Date d3(2024, 8, 1);
	d3.Print();

	cout << d2 - d1 << endl;
	cout << d1 - d3 << endl;

}

void TestDate4()
{
	Date d1(2023, 10, 24);
	d1 += -100;

	d1.Print();
}

int main()
{
	TestDate1();
	TestDate2();
	TestDate3();
	TestDate4();


	return 0;
}