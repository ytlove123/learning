#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include "stack.h"
#include "queue.h"
#include "priority_queue.h"


//int main()
//{
//	Stack::stack<int, deque<int>>s;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//
//	while (!s.empty())
//	{
//		cout << s.top() << " ";
//		s.pop();
//	}
//	cout << endl;
//
//	return 0;
//}



//int main()
//{
//	Queue::queue<int, deque<int>> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	q.push(5);
//	while (!q.empty())
//	{
//		cout << q.front() << " ";
//		q.pop();
//	}
//	cout << endl;
//
//	return 0;
//}




void TestQueuePriority()
{
	Priority_Queue::priority_queue<int> q1;
	q1.push(5);
	q1.push(1);
	q1.push(4);
	q1.push(2);
	q1.push(3);
	q1.push(6);
	cout << q1.top() << endl;

	q1.pop();
	q1.pop();
	cout << q1.top() << endl;

	vector<int> v{ 5,1,4,2,3,6 };
	Priority_Queue::priority_queue<int, vector<int>,
		Priority_Queue::greater<int>> q2(v.begin(), v.end());
	cout << q2.top() << endl;

	q2.pop();
	q2.pop();
	cout << q2.top() << endl;
}

int main()
{
	TestQueuePriority();
	return 0;
}