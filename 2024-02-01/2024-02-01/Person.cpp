#define _CRT_SECURE_NO_WARNINGS 1
#include "Person.h"

void Person::showInfo()
{
	cout << _name << "-" << _sex << "-" << _age << endl;
}