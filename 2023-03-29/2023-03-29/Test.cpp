#include "Test.h"

Person::Person(int a)
{
	m_A = a;
}
Person& Person::operator--()
{
	m_A--;
	return *this;
}
Person Person::operator--(int)
{
	Person temp = *this;
	m_A--;
	return temp;

}

ostream& operator<<(ostream& out, Person p)
{
	cout << p.m_A; 
	return cout;
}
