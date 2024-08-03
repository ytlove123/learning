#pragma once
#include <iostream>
using namespace std;
#include <vector>

namespace Priority_Queue
{
	template<class T>
	struct less
	{
		bool operator()(const T& left, const T& right)
		{
			return left < right;
		}
	};

	template<class T>
	struct greater
	{
		bool operator()(const T& left, const T& right)
		{
			return left > right;
		}
	};

	template<class T,class Container=std::vector<T>,class Compare=less<T>>
	class priority_queue
	{
	public:
		//创造空的优先级队列
		priority_queue():c(){}

		template<class Iterator>
		priority_queue(Iterator first, Iterator last) : c(first, last)
		{
			//将c中的元素调整成堆的结构
			int cout = c.size();
			int root = ((cout - 2) >> 1);
			for (; root >= 0; root--)
				AdjustDown(root);
		}

		void push(const T& data)
		{
			c.push_back(data);
			AdjustUP(c.size() - 1);
		}

		void pop()
		{
			if (empty())
				return;

			swap(c.front(), c.back());
			c.pop_back();
			AdjustDown(0);
		}

		size_t size()const
		{
			return c.size();
		}

		bool empty()const
		{
			return c.empty();
		}

		//堆顶元素不允许修改,因为:堆顶元素修改会破坏堆的特性
		const T& top()const
		{
			return c.front();
		}

	private:
		//向上调整
		void AdjustUP(int child)
		{
			int parent = ((child - 1) >> 1);
			while (child)
			{
				if (Compare()(c[parent], c[child]))
				{
					swap(c[child], c[parent]);
					child = parent;
					parent = ((child - 1) >> 1);
				}
				else
				{
					return;
				}
			}
		}


		//向下调整
		void AdjustDown(int parent)
		{
			size_t child = parent * 2 + 1;
			while (child < c.size())
			{
				//找以parent为根的较大孩子
				if (child + 1 < c.size() && Compare()(c[child], c[child + 1]))
					child += 1;

				//检测双亲是否满足情况
				if (Compare()(c[parent], c[child]))
				{
					swap(c[child], c[parent]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
					return;
			}
		}

	private:
		Container c;

	};

}