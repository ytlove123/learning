#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cassert>
using namespace std;
//传统版写法的String类
//class String
//{
//public:
//	//构造函数
//	String(const char* str = "")
//	{
//		if (str == nullptr)
//		{
//			assert(false);
//			return;
//		}
//		_str = new char[strlen(str) + 1];
//		strcpy(_str, str);
//	 }
//	//拷贝构造
//	String(const String& s)
//		:_str(new char[strlen(s._str) + 1])
//	{
//		strcpy(_str, s._str);
//	}
//	String& operator=(const String& s)
//	{
//		if (this != &s)
//		{
//			char* pStr = new char[strlen(s._str) + 1];
//			strcpy(pStr, s._str);
//			//必须先释放后指向，否则_str无人管理会内存泄漏
//			delete[]_str;
//			_str = pStr;
//		}
//		return *this;
//	}
//	//析构
//	~String()
//	{
//		if (_str)
//		{
//			delete[]_str;
//			_str = nullptr;
//		}
//	}
//private:
//	char* _str;
//};
//
//
//
//现代版写法的string类
class String
{
public:
	//构造
	String(const char* str = "")
	{
		if (nullptr == str)
		{
			assert(false);
			return;
		}
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}
	//拷贝构造
	String(const String& s)
		:_str(nullptr)
	{
		String strTmp(s._str);
		swap(_str, strTmp._str);
	}
	String& operator=(String s)
	{
		swap(_str, s._str);
		return *this;
	}
	~String()
	{
		if (_str)
		{
			delete[]_str;
			_str = nullptr;
		}
	}
private:
	char* _str;
};


//class String
//{
//public:
//	String(const char*str)
//		:_str(str)
//	{}
//private:
//	char* _str;
//};