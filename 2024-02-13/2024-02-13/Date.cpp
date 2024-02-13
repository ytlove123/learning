#define _CRT_SECURE_NO_WARNINGS 1

#include "Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;

	if (_year < 1 ||
		_month < 1 || _month > 12 ||
		_day < 1 || _day > GetMonthDay(_year, _month))
	{
		//assert(false);
		Print();
		cout << "日期非法" << endl;
	}
}

void Date::Print() const
{
	cout << _year << "/" << _month << "/" << _day << endl;
}

bool Date::operator==(const Date& y)  const
{
	return _year == y._year
		&& _month == y._month
		&& _day == y._day;
}

// d1 != d2
bool Date::operator!=(const Date& y) const
{
	return !(*this == y);
}

bool Date::operator>(const Date& y) const
{
	if (_year > y._year)
	{
		return true;
	}
	else if (_year == y._year && _month > y._month)
	{
		return true;
	}
	else if (_year == y._year && _month == y._month && _day > y._day)
	{
		return true;
	}

	return false;
}

bool Date::operator>=(const Date& y) const
{
	return *this > y || *this == y;
}

bool Date::operator<(const Date& y) const
{
	return !(*this >= y);
} 

bool Date::operator<=(const Date& y)  const
{
	return !(*this > y);
}

int Date::GetMonthDay(int year, int month)
{
	assert(year >= 1 && month >= 1 && month <= 12);

	int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31 };

	if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		return 29;

	return monthArray[month];
}

// d1 += 100
Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= (-day);
	}

	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);

		++_month;

		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}

	return *this;
}

Date Date::operator+(int day) const
{
	Date tmp(*this);
	tmp += day;

	return tmp;
}
// 
// d1 += 100 
//Date& Date::operator+=(int day)
//{
//	//Date d = *this + day;
//	//*this = d;
//
//	*this = *this + day;
//	return *this;
//}
//
//Date Date::operator+(int day)
//{
//	Date tmp(*this);
//
//	tmp._day += day;
//	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
//	{
//		tmp._day -= GetMonthDay(tmp._year, tmp._month);
//
//		++tmp._month;
//
//		if (tmp._month == 13)
//		{
//			tmp._year++;
//			tmp._month = 1;
//		}
//	}
//
//	return tmp;
//}

Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += (-day);
	}

	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}

		_day += GetMonthDay(_year, _month);
	}

	return *this;
}

Date Date::operator-(int day) const
{
	Date tmp(*this);
	tmp -= day;

	return tmp;
}


// ++d1
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

// d1++
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}

//--d
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

//d--
Date Date::operator--(int)
{
	Date tmp(*this);
	*this -= 1;

	return tmp;
}

// d1 - d2
int Date::operator-(const Date& d) const
{
	// 假设左大右小
	int flag = 1;
	Date max = *this;
	Date min = d;

	// 假设错了，左小右大
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;
	}

	int n = 0;
	while (min != max)
	{
		++min;
		++n;
	}

	return n * flag;
}

//void Date::operator<<(ostream& out)
//{
//	out << _year << "年" << _month << "月" << _day << "日" << endl;
//}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;

	return out;
}

istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;

	return in;
}
