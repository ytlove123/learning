#define _CRT_SECURE_NO_WARNINGS 1
#include "Test.h"
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}