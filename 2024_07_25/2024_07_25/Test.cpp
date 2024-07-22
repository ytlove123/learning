#define _CRT_SECURE_NO_WARNINGS 1
#include "string.h"
#include <string>

namespace bit
{
	void print_str(const string& s)
	{
		for (size_t i = 0; i < s.size(); i++)
		{
			//s[i]++;
			cout << s[i] << " ";
		}
		cout << endl;

		string::const_iterator it = s.begin();
		while (it != s.end())
		{
			// *it = 'x';

			cout << *it << " ";
			++it;
		}
		cout << endl;
	}

	void test_string1()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;

		string s2;
		cout << s2.c_str() << endl;

		for (size_t i = 0; i < s1.size(); i++)
		{
			s1[i]++;
		}
		cout << s1.c_str() << endl;

		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		
		for (auto ch : s1)
		{
			cout << ch << " ";
		}
		cout << endl;

		print_str(s1);
	}

	void test_string2()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;

		s1 += ' ';
		s1 += "xxxxxx";
		cout << s1.c_str() << endl;

		s1.insert(5, 'y');
		s1.insert(5, 'y');
		s1.insert(5, 'y');
		cout << s1.c_str() << endl;

		s1.insert(0, 'y');
		cout << s1.c_str() << endl;

		s1.insert(0, "zzzzzzz");
		cout << s1.c_str() << endl;
	}

	void test_string3()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;

		s1.erase(5, 4);
		cout << s1.c_str() << endl;

		s1.erase(5, 100);
		cout << s1.c_str() << endl;

		s1.erase(2);
		cout << s1.c_str() << endl;
	}

	void test_string4()
	{
		string s1("hello world");
		string s2("xxxx");
		std::swap(s1, s2);
		s1.swap(s2);
	}
	void test_string5()
	{
		string str("https://legacy.cplusplus.com/reference/string/string/substr/");
		string sub1, sub2, sub3;
		size_t pos1 = str.find(':');
		sub1 = str.substr(0, pos1 - 0);
		cout << sub1.c_str() << endl;

		size_t pos2 = str.find('/', pos1 + 3);
		sub2 = str.substr(pos1 + 3, pos2 - (pos1 + 3));
		cout << sub2.c_str() << endl;

		sub3 = str.substr(pos2 + 1);
		cout << sub3.c_str() << endl;
	}

	void test_string6()
	{
		string s1("hello world");
		string s2(s1);

		string s3("xxxx");
		s1 = s3;
	}

	void test_string7()
	{
		string s1("hello world");
		string s2(s1);

		string s3("xxxx");
		s1 = s3;

		cout << s1.c_str() << endl;
		cout << s1 << endl;

		cin >> s1;
		cout << s1 << endl;

		/*char ch1, ch2;
		cin >> ch1 >> ch2;*/

		cin >> s2;
		cout << s2 << endl;
	}

	void test_string8()
	{
		string s1("hello world");
		cout << s1.c_str() << endl;
		cout << s1 << endl;

		s1.clear();
		cout << s1.c_str() << endl;
		cout << s1 << endl;
	}

	void test_string9()
	{
		string s1("hello world");
		string s2(s1);

		cout << s1 << endl;
		cout << s2 << endl;

		string s3("xxxxxxxxxxxxxxxx");
		s1 = s3;
		cout << s1 << endl;
		cout << s3 << endl;
	}
}

int main()
{
	//bit::test_string1();
	//bit::test_string2();
	//bit::test_string3();
	//bit::test_string4();
	//bit::test_string5();
	//bit::test_string6();
	//bit::test_string7();
	//bit::test_string8();
	bit::test_string9();

	// atoi itoa
	//std::string str1 = std::to_string(123);
	//std::string str2 = std::to_string(123.222);
	//cout << str1 << endl;
	//cout << str2 << endl;

	//int i = stoi(str1);
	//cout << i << endl;

	return 0;
}

