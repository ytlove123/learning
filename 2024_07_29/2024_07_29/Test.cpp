#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

//int main()
//{
//	//list<int> li;
//	//list<int>::iterator lit = li.begin();
//	//while (lit != li.end())
//	//{
//	//	cout << "it is not empty";
//	//	cout << *lit << " ";
//	//	
//	//}
//	///*for (auto e : li)
//	//{
//	//	cout << e;
//	//}*/
//
//
//
//
//	//list<int> li(5, 10);
//	//for (auto e : li)
//	//{
//	//	cout << e<<" ";
//	//}
//
//
//	//list<int> li1 = { 1,2,3,4,5,6 };
//	//list<int>li2(li1.begin(), li1.end());
//	//for (auto e : li2)
//	//{
//	//	cout << e << " ";
//	//}
//
//	//list<int> li1 = { 1,2,3,4,5,6 };
//	//list<int>li2(li1.begin(), li1.end());
//	//list<int>li3(li2);
//	//for (auto e : li3)
//	//{
//	//	cout << e << " ";
//	//}
//
//
//	//list<int> li = { 1,2,3,4,5,6 };
//	//list<int>::iterator lit1 = li.begin();
//	//for (lit1; lit1 != li.end(); ++lit1)
//	//{
//	//	cout << *lit1<<" ";
//	//}
//	//cout << endl;
//	//list<int>::reverse_iterator lit2 = li.rbegin();
//	//while (lit2 != li.rend())
//	//{
//	//	cout << *lit2<<" ";
//	//	++lit2;
//	//}
//	
//	//list<int> li;
//	//if (li.empty())
//	//{
//	//	cout << "it is empty";
//	//}
//	//else
//	//{
//	//	cout << "it is not empty";
//	//}
//
//	//list<int> li(5, 8);
//	//cout << li.size()<<endl;
//	//cout << li.max_size();
//
//
//	//list<int> li = { 1,2,3,4,5,6 };
//	//cout << li.front()<<endl;
//	//cout << li.back();
//
//
//	//list<int> li;
//	//li.push_front(1);
//	//li.push_front(2);
//	//li.push_front(3);
//	//cout << "插入的值为: ";
//	//for (auto e : li)
//	//{
//	//	cout << e << " ";
//	//}
//	//li.pop_front();
//	//cout << endl;
//	//cout << "删除第一个值，还剩下: ";
//	//for (auto e : li)
//	//{
//	//	cout << e << " ";
//	//}
//
//	//list<int> li;
//	//li.push_back(1);
//	//li.push_back(2);
//	//li.push_back(3);
//	//cout << "插入的值为: ";
//	//for (auto e : li)
//	//{
//	//	cout << e << " ";
//	//}
//	//li.pop_back();
//	//cout << endl;
//	//cout << "删除最后一个值，还剩下: ";
//	//for (auto e : li)
//	//{
//	//	cout << e << " ";
//	//}
//
//
//
//
//	//int array1[] = { 1, 2, 3 };
//	//list<int> L(array1, array1 + sizeof(array1) / sizeof(array1[0]));
//
//	//// 获取链表中第二个节点
//	//auto pos = ++L.begin();
//	//cout << *pos << endl;
//
//	//// 在pos前插入值为4的元素
//	//L.insert(pos, 4);
//	//
//	//// 在pos前插入5个值为5的元素
//	//L.insert(pos, 5, 5);
//	//
//	//// 在pos前插入[v.begin(), v.end)区间中的元素
//	//vector<int> v{ 7, 8, 9 };
//	//L.insert(pos, v.begin(), v.end());
//	//
//	//// 删除pos位置上的元素
//	//L.erase(pos);
//
//	//// 删除list中[begin, end)区间中的元素，即删除list中的所有元素
//	//L.erase(L.begin(), L.end());
//
//
// //   //list<int> li={ 1,2,3,4,5 };
// //   list<int> li{ 1,2,3,4,5 };
//	//list<int> li1{ 8,8,8,8,8 };
//	//li.swap(li1);
//	//cout << "交换后li: ";
//	//for (auto e : li)
//	//{
//	//	cout << e<<" ";
//	//}
//	//cout << endl;
//	//cout << "此时的li1：";
//	//for (auto e : li1)
//	//{
//	//	cout << e << " ";
//	//}
//
//
//    list<int> li{ 1,2,3,4,5 };
//    list<int> li1{ 8,8,8,8,8 };
//	cout << "清空 li、li1 ";
//	li.clear();
//	li1.clear();
//	for (auto e : li)
//	{
//		cout << e << " ";
//	}
//	for (auto e : li1)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}



//void TestListIterator1()
//{
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
//	auto it = l.begin();
//	while (it != l.end())
//	{
//		// erase()函数执行后，it所指向的节点已被删除，因此it无效，在下一次使用it时，必须先给其赋值
//			l.erase(it);
//		++it;
//	}
//}
//int main()
//{
//	TestListIterator1();
//}


// 改正
void TestListIterator()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
	auto it = l.begin();
	while (it != l.end())
	{
		//l.erase(it++);
		it = l.erase(it);
		++it;
	}
}
int main()
{
	TestListIterator();
}