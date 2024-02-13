#pragma once

#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1);

	void Print() const;
	int GetMonthDay(int year, int month);

	bool operator==(const Date& y) const;
	bool operator!=(const Date& y) const;
	bool operator>(const Date& y) const;
	bool operator<(const Date& y) const;
	bool operator>=(const Date& y) const;
	bool operator<=(const Date& y) const;

	int operator-(const Date& d) const;
	Date& operator+=(int day);
	Date operator+(int day) const;
	Date& operator-=(int day);
	Date operator-(int day) const;

	Date& operator++();
	Date operator++(int);

	Date& operator--();
	Date operator--(int);

	//void operator<<(ostream& out);

	Date* operator&()
	{
		cout << "Date* operator&()" << endl;

		//return this;
		//return nullptr;
		return (Date*)0x12233222;
	}

	const Date* operator&()const
	{
		cout << "const Date* operator&()const" << endl;

		//return this;
		return nullptr;
	}

	// 友元函数
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);

// 重载操作符必须有一个类类型参数->不能通过重载运算，改变内置类型的运算规则
// int operator+(int i, int j)