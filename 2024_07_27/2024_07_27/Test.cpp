#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//
//int main()
//{
//	vector<int> v{ 1,2,3,4,5,6 };
//
//	auto it = v.begin();
//
//	// 将有效元素个数增加到100个，多出的位置使用8填充，操作期间底层会扩容
//	// v.resize(100, 8);
//
//	// reserve的作用就是改变扩容大小但不改变有效元素个数，操作期间可能会引起底层容量改变
//	// v.reserve(100);
//
//	// 插入元素期间，可能会引起扩容，而导致原空间被释放
//	// v.insert(v.begin(), 0);
//	// v.push_back(8);
//
//	// 给vector重新赋值，可能会引起底层容量改变
//	v.assign(100, 8);
//
//	/*
//	出错原因：以上操作，都有可能会导致vector扩容，也就是说vector底层原理旧空间被释放掉，
//   而在打印时，it还使用的是释放之间的旧空间，在对it迭代器操作时，实际操作的是一块已经被释放的
//   空间，而引起代码运行时崩溃。
//	解决方式：在以上操作完成之后，如果想要继续通过迭代器操作vector中的元素，只需给it重新
//   赋值即可。
//	*/
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}




//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	// 使用find查找3所在位置的iterator
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//	// 删除pos位置的数据，导致pos迭代器失效。
//	v.erase(pos);
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << *pos << endl; // 此处会导致非法访问
//	return 0;
//}




//int main()
//{
//	vector<int> v{ 1, 2, 3, 4 };
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//			v.erase(it);
//		++it;
//	}
//
//
//
//	vector<int> v1{ 1, 2, 3, 4 };
//	auto it = v1.begin();
//	while (it != v1.end())
//	{
//		if (*it % 2 == 0)
//			it = v1.erase(it);
//		else
//			++it;
//	}
//
//
//	return 0;
//}




//// 1. 扩容之后，迭代器已经失效了，程序虽然可以运行，但是运行结果已经不对了
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	for (size_t i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	auto it = v.begin();
//	cout << "扩容之前，vector的容量为: " << v.capacity() << endl;
//	// 通过reserve将底层空间设置为100，目的是为了让vector的迭代器失效 
//	v.reserve(100);
//	cout << "扩容之后，vector的容量为: " << v.capacity() << endl;
//
//	// 经过上述reserve之后，it迭代器肯定会失效，在vs下程序就直接崩溃了，但是linux下不会
//	// 虽然可能运行，但是输出的结果是不对的
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}




//// 2. erase删除任意位置代码后，linux下迭代器并没有失效
//// 因为空间还是原来的空间，后序元素往前搬移了，it的位置还是有效的
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	vector<int>::iterator it = find(v.begin(), v.end(), 3);
//	v.erase(it);
//	cout << *it << endl;
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}




//// 3: erase删除的迭代器如果是最后一个元素，删除之后it已经超过end
//// 此时迭代器是无效的，++it导致程序崩溃
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	// vector<int> v{1,2,3,4,5,6};
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//			v.erase(it);
//		++it;
//	}
//	for (auto e : v)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}




void TestString()
{
	string s("hello");
	auto it = s.begin();
	// 放开之后代码会崩溃，因为resize到20会string会进行扩容
	// 扩容之后，it指向之前旧空间已经被释放了，该迭代器就失效了
	// 后序打印时，再访问it指向的空间程序就会崩溃
	//s.resize(20, '!');
	while (it != s.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
	it = s.begin();
	while (it != s.end())
	{
		it = s.erase(it);
		// 按照下面方式写，运行时程序会崩溃，因为erase(it)之后
		// it位置的迭代器就失效了
		// s.erase(it); 
		++it;
	}
}