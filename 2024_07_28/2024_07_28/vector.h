#pragma once
#include <iostream>
#include <assert.h>
using namespace std;


namespace Vector
{
	template<class T>
	class vector
	{
	public:
		//vector的迭代器是一个原生指针
		typedef T* iterator;
		typedef const T* const_iterator;

		//构造和销毁
		vector() :_start(nullptr), _finish(nullptr), _endOfStorage(nullptr)
		{}

		vector(size_t n, const T& value = T()) :_start(nullptr), _finish(nullptr), _endOfStorage(nullptr)
		{
			reserve(n);
			while (n--)
			{
				push_back(value);
			}
			
		}


		/*
		* 理论上将，提供了vector(size_t n, const T& value = T())之后
		* vector(int n, const T& value = T())就不需要提供了，但是对于：
		* vector<int> v(10, 5);
		* 编译器在编译时，认为T已经被实例化为int，而10和5编译器会默认其为int类型
		* 就不会走vector(size_t n, const T& value = T())这个构造方法，
		* 最终选择的是：vector(InputIterator first, InputIterator last)
		* 因为编译器觉得区间构造两个参数类型一致，因此编译器就会将InputIterator实例化为int
		* 但是10和5根本不是一个区间，编译时就报错了
		* 故需要增加该构造方法
		*/

		vector(int n, const T& value = T()):_start(new T[n]),_finish(_start+n),_endOfStorage(_finish)
		{
			for (int i = 0; i < n; ++i)
			{
				_start[i] = value;
			}
			
		}


		//若使用iterator做迭代器，会导致初始化的迭代器区间[first,last)只能是vector的迭代器
		//重新声明迭代器，迭代器区间[first,last)可以是任意容器的迭代器
		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		
		vector(const vector<T>& v):_start(nullptr),_finish(nullptr),_endOfStorage(nullptr)
		{
			reserve(v.capacity());
			iterator it = begin();
			const_iterator vit = v.cbegin();
			while (vit != v.cend())
			{
				*it++ = *vit++;
			}
			_finish = it;
	
		}


		vector<T>& operator=(vector<T> v)
		{
			swap(v);
			return *this;
		}

		~vector()
		{
			if (_start)
			{
				delete[]_start;
				_start = _finish = _endOfStorage = nullptr;
			}
		}


		//迭代器相关
		iterator begin()
		{
			return _start;
		}
		
		iterator end()
		{
			return _finish;
		}

		const_iterator cbegin() const
		{
			return _start;
		}

		const_iterator cend() const
		{
			return _finish;
		}


		//容量相关
		size_t size() const
		{
			return _finish - _start;
		}

		size_t capacity() const
		{
			return _endOfStorage - _start;
		}

		bool empty() const
		{
			return _start == _finish;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t oldSize = size();
				//1.开辟新空间
				T* tmp = new T[n];
				//2.拷贝元素
				//直接用memcpy是错误的，在板书中详解
			/*	if (_start)
				{
					memcpy(tmp, _start, sizeof(T) * size);
					delete[]_start;
				}*/

				if (_start)
				{
					for (size_t i = 0; i < oldSize; ++i)
						tmp[i] = _start[i];
						//3.释放旧空间
						delete[]_start;
					

				}
				_start = tmp;
				_finish = _start + oldSize;
				_endOfStorage = _start + n;
			}

		}

		void resize(size_t n, const T& value = T())
		{
			//1.如果n小于当前的size，则数据个数缩小到n
			if (n <= size())
			{
				_finish = _start + n;
				return;
			}

			//2.空间不够就扩容
			if (n > capacity())
				reserve(n);
			
			//3.将size扩大到n
			iterator it = _finish;
			_finish = _start + n;
			while (it != _finish)
			{
				*it = value;
				++it;
			}
		}


		//元素访问
		T& operator[](size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}

		const T& operator[](size_t pos)const
		{
			assert(pos < size());
			return _start[pos];
		}

		T& front()
		{
			return *_start;
		}

		T& back()
		{
			return *(_finish - 1);
		}

		const T& front() const
		{
			return *_start;
		}

		const T& back() const
		{
			return *(_finish - 1);
		}



		//vector修改操作
		void push_back(const T& x)
		{
			insert(end(), x);
		}

		void pop_back()
		{
			erase(end() - 1);
		}

		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endOfStorage, v._endOfStorage);
		}

		iterator insert(iterator pos, const T& x)
		{
			assert(pos <= _finish);
			//空间不够，先进行增容
			if (_finish == _endOfStorage)
			{
				size_t newCapacity = (0 == capacity()) ? 1 : capacity() * 2;
				reserve(newCapacity);

				//如果发生了增容，需要重置pos
				pos = _start + size();
			}

			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}
			*pos = x;
			++_finish;
			return pos;
		}


		//返回删除数据的下一个数据
		//方便解决：一边遍历一边删除的迭代器失效问题
		iterator erase(iterator pos)
		{
			//挪动数据进行删除
			iterator begin = pos + 1;
			while (begin != _finish)
			{
				*(begin - 1) = *begin;
				++begin;
			}

			--_finish;
			return pos;
		}

	private:
		iterator _start ; //指向数据块的开始
		iterator _finish ;//指向有效数据的末尾
		iterator _endOfStorage ;//指向存储容量的末尾
	};
}


