#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
class Person
{
	friend ostream& operator<<(ostream& out, Person p);
public:
	Person(int a);
	Person& operator--();

	Person operator--(int);

private:
	int m_A;
};

ostream& operator<<(ostream& out, Person p);
