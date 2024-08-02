#define _CRT_SECURE_NO_WARNINGS 1
#include <stack>
#include <queue>
#include <iostream>
#include <deque>
#include <list>
using namespace std;

//int main()
//{
//	//stack<int> s;
//	//if (s.empty())
//	//{
//	//	cout << "it is empty";
//	//}
//	//else
//	//{
//	//	cout << "it is not empty";
//	//}
//	//
//
//
//	//deque<int> d(3, 10);
//	//stack<int> s;
//	//stack<int> s1(d);
//	//stack<int, deque<int>>s2(d);
//	//cout << s.size() << endl;
//	//cout << s1.size() << endl;
//	//cout << s2.size() << endl;
//	//
//
//
//	//deque<int> d(3, 10);
//	//stack<int> s(d);
//	//cout << s.top();
//
//
//	/*stack<int> myStack;
//	myStack.push(1);
//	myStack.push(2);
//	myStack.push(3);
//
//	while (!myStack.empty()) {
//		cout << myStack.top() << " ";
//		myStack.pop();
//	}
//	cout << endl;*/
//	stack<int> s;
//	s.push(1);
//	s.push(2);
//	cout << s.top() << " ";
//	s.pop();
//
//	return 0;
//}




//int main()
//{
//	//queue<int> q;
//	/*if (q.empty())
//	{
//		cout << "it is empty";
//	}
//	else
//	{
//		cout << "it is not empty";
//	}*/
//	//deque<int> d(3, 5);
//	//list<int>  l(6, 8);
//	//queue<int> q;
//	//queue<int> q1(d);
//	//queue<int, deque<int>> qd(d);
//	//queue<int, list<int>> ql(l);
//
//	//cout << q.size() << endl;
//	//cout << qd.size() << endl;
//	//cout << ql.size() << endl;
//
//
//
//	//queue<int> q;
//	//q.push(1);
//	//q.push(2);
//	//q.push(3);
//	//q.push(4);
//	//while (!q.empty())
//	//{
//	//	cout << q.front() << " ";
//	//	q.pop();
//	//}
//
//
//	queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//
//	cout << "头元素为: "<<q.front() << endl;
//	cout << "尾元素为：" << q.back() << endl;
//	return 0;
//}



int main()
{
	////构造一个空对象，并查看类型
	//priority_queue<int> pq;//默认是大堆
	//cout << typeid(pq).name()<< endl;
	//vector<char> v= { 'a','b','c','d','e' };
	////现在改成小堆pq1
	////priority_queue<char, deque<char>, greater<char>> pq1(v.begin(), v.end());
	//priority_queue<char, vector<char>, less<char>> pq2(v.begin(), v.end());
	////priority_queue<char> pq2(v.begin(), v.end());
	//cout << typeid(pq2).name() << endl;	//查看类型
	//while (!pq2.empty())
	//{
	//	cout << pq2.top() << " ";
	//	pq2.pop();
	//}

	//vector<int> v = { 1,2,3,4,5 };
	//priority_queue<int> pq(v.begin(),v.end());
	priority_queue<int> pq;
	pq.push(1);
	pq.push(5);
	pq.push(3);
	pq.push(2);
	pq.push(7);
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}

}