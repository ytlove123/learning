#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

//int main()
//{
//	//创建一个空的整型的顺序表
//	//vector<int> v;
//
//	//构造并初始化n个val
//	//vector<int> v(5, 10);
//	//vector<int>::iterator it = v.begin();
//	//while (it != v.end())
//	//{
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	 
//	 
//	
//	//cout << endl;
//	////使用迭代器进行初始化构造
//	//vector<int> v1(v.begin(), v.end());
//	//for (auto e : v1)
//	//{
//	//	cout << e << " ";
//	//}
//
//	//拷贝构造
//	//vector<char> v = { 'a','b','c' };
//	//vector<char> v1(v);
//	//for (auto e : v1)
//	//{
//	//	cout << e << " ";
//	//}
//
//
//	//vector<int> foo(3, 0);
//	//vector<int> bar(5, 0);
//
//	//bar = foo;
//	//foo = std::vector<int>();
//
// //   cout << "Size of foo: " << int(foo.size()) << endl;
//	//cout << "Size of bar: " << int(bar.size()) << endl;
//
//	//vector<char> v = {'a','b','c'};
//	//vector<char>::iterator it = v.begin();
//	//while (it != v.end())
//	//{
//	//	cout << *it << " ";
//	//	++it;
//	//}
//	//cout << endl;
//	//vector<char>::reverse_iterator rit = v.rbegin();
//	//while (rit != v.rend())
//	//{
//	//	cout << *rit << " ";
//	//	++rit;
//	//}
//
//
//	//vector<char> v = {'a','b','c'};
//	//cout << v.size();
//
//	/*vector<int> v (5.9);
//	cout << v.size();*/
//
//	/*vector<int> v(100,2);
//	cout << v.capacity();*/
//
//
//	std::vector<int> myvector;
//	
//	for (int i = 0; i < 100; i++) myvector.push_back(i);
//
//	std::cout << "size: " << (int)myvector.size() << '\n';
//	std::cout << "capacity: " << (int)myvector.capacity() << '\n';
//	std::cout << "max_size: " << (int)myvector.max_size() << '\n';
//	return 0;
//}




//void TestVectorExpand()
//{
//	size_t sz;
//	vector<int> v;
//	sz = v.capacity();
//	cout << "making v grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}
//int main()
//{
//	TestVectorExpand();
//	return 0;
//}


//int main()
//{
//	/*vector<int> v(100, 9);
//	cout << v.capacity();*/
//
//
//	//扩大
//	//vector<int> v = { 1,2,3,4,5,6,7,8 };
//	//cout << "before change value: ";
//	//for (auto e : v)
//	//{
//	//	cout<< e << " ";
//	//}
//	//cout << endl;
//	//cout << "before change: " << v.size() << endl;
//	//v.resize(10,10);
//	//cout << "after change value: ";
//	//for (auto e : v)
//	//{
//	//	 cout<< e << " ";
//	//}
//	//cout << endl;
//	//cout << "after change: " << v.size() << endl;
//	
//
//
//	////缩小
//	//vector<int> v = { 1,2,3,4,5,6,7,8 };
//	//cout << "before change value: ";
//	//for (auto e : v)
//	//{
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//	//cout << "before change: " << v.size() << endl;
//	//v.resize(6);
//	//cout << "after change value: ";
//	//for (auto e : v)
//	//{
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//	//cout << "after change: " << v.size() << endl;
//
//
//
//	//vector<int> v = { 1,2,3,4,5,6,7,8 };
//	//cout << v.capacity() << endl;
//	//v.reserve(1);
//	//cout << v.capacity();
//
//
//
//	//vector<int> v;
//	//if (v.empty())
//	//{
//	//	cout << "v is empty";
//	//}
//
//
//
//
//
//	return 0;
//}

// 如果已经确定vector中要存储元素大概个数，可以提前将空间设置足够
// 就可以避免边插入边扩容导致效率低下的问题了
//void TestVectorExpandOP()
//{
//	vector<int> v;
//	size_t sz = v.capacity();
//	v.reserve(100); // 提前将容量设置好，可以避免一遍插入一遍扩容
//	cout << "making bar grow:\n";
//	for (int i = 0; i < 100; ++i)
//	{
//		v.push_back(i);
//		if (sz != v.capacity())
//		{
//			sz = v.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//}

//
//int main()
//{
//	//vector<int> v;
//	//v.push_back(1);
//	//v.push_back(2);
//	//v.push_back(3);
//	//v.push_back(4);
//	//v.push_back(5);
//	//for (auto e : v)
//	//{
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//	//v.pop_back();
//	//for (auto e : v)
//	//{
//	//	cout << e << " ";
//	//}
//
//
//
//	//vector<int> v;
//	//v.push_back(1);
//	//v.push_back(2);
//	//v.push_back(3);
//	//v.push_back(4);
//	//v.push_back(5);
//	//for (int i = 0; i < v.size(); i++)
//	//{
//	//	cout << v[i]<<" ";
//	//}
//
//
//	/*vector<int> v1 = { 9,8,7 };
//	vector<int> v2 = { 1,2,3,4,5,6 };*/
//	//v1.swap(v2);
//	//cout << "v1 now: ";
//	//for (auto e : v1)
//	//{
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//	//cout << "v2 now: ";
//	//for (auto e : v2)
//	//{
//	//	cout << e << " ";
//	//}
//
//
//	vector<int> v1 = { 9,8,7 };
//	vector<int>::iterator vit = v1.begin();
//	v1.erase(v1.begin(), v1.end());
//	for (auto e : v1)
//	{
//		cout << e << " ";
//	}
//	/*v1.erase(vit+1);
//	for (auto e : v1)
//	{
//		cout << e << " ";
//	}*/
//	return 0;
//}




#include <algorithm>
int main()
{
	vector<char> v = { 'h','e','l','l','o',' ','w','o','r','l','d' };
	vector<char>::iterator vit = v.begin();
	vit = find(v.begin(), v.end(), 'l');
	cout << *vit;
}