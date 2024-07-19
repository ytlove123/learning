#define _CRT_SECURE_NO_WARNINGS 1
#include "vector.h"


/// 对模拟实现的vector进行严格测试
void TestBitVector1()
{
	Vector::vector<int> v1;
	Vector::vector<int> v2(10, 5);

	int array[] = { 1,2,3,4,5 };
	Vector::vector<int> v3(array, array + sizeof(array) / sizeof(array[0]));

	Vector::vector<int> v4(v3);

	for (size_t i = 0; i < v2.size(); ++i)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	auto it = v3.begin();
	while (it != v3.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : v4)
	{
		cout << e << " ";
	}
	cout << endl;
}

void TestBitVector2()
{
	Vector::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	cout << v[0] << endl;
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.pop_back();
	v.pop_back();
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.insert(v.begin(), 0);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.erase(v.begin() + 1);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

//int main()
//{
//	TestBitVector1();
//	TestBitVector2();
//	return 0;
//}




//动态二维数组

// 以杨慧三角的前n行为例：假设n为5
void test2vector(size_t n)
{
	// 使用vector定义二维数组vv，vv中的每个元素都是vector<int>
	Vector::vector<Vector::vector<int>> vv(n);

	// 将二维数组每一行中的vecotr<int>中的元素全部设置为1
	for (size_t i = 0; i < n; ++i)
		vv[i].resize(i + 1, 1);
	// 给杨慧三角出第一列和对角线的所有元素赋值
	for (int i = 2; i < n; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
		}
	}
}