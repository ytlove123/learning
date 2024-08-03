﻿#pragma once
#include <deque>

namespace Stack
{
	template<class T, class Container = std::deque<T>>
	//template<class T, class Container = vector<T>>
	//template<class T, class Container = list<T>>
	class stack
	{
		
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}

		void pop()
		{
			_con.pop_back();
		}

		const T& top()
		{
			return _con.back();
		}

		size_t size()
		{
			return _con.size();
		}
		bool empty()
		{
			return _con.empty();
		}


	private:
		Container _con;
	};
}