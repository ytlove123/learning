#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//int main()
//{
	//string s1("hello world");
	/*cout << s1[0] << endl;
	cout << s1.operator[](0) << endl;
	cout << s1.at(0) << endl;*/

	/*string s1("hello STL-String");
	for (int i = 0; i < s1.size(); i++)
	{
		cout << s1.at(i);
	}*/



	//string s1("hello STL-String");
	//s1.back()='!';
	//cout << s1;


	//string s1("hello STL-String");
	//cout<<s1.front();

	/*string s1("hello STL-String");
	s1.front() = 'H';
	cout << s1;*/



	//string str("hello STL-String!");
	//string::iterator it = str.begin();
	//while (it != str.end())
	//{
	//	//*it += 1;
	//	cout << *it << " ";
	//	++it;
	//}




//	return 0;
//}



//int main()
//{
//shiftChar 函数负责将字符按照给定的移位量进行循环移位，只针对字母字符有效。非字母字符保持不变。
//char shiftChar(char c, int shift) {
//	if (c >= 'a' && c <= 'z') {
//		return 'a' + (c - 'a' + shift) % 26;
//	}
//	else if (c >= 'A' && c <= 'Z') {
//		return 'A' + (c - 'A' + shift) % 26;
//	}
//	return c; // 非字母字符不变  
//}
//
//int main() {
//	string str = "hello STL-String!";
//	string::iterator it = str.begin();
//	int shift = 1; // 移位量  
//
//	while (it != str.end()) {
//		*it = shiftChar(*it, shift);
//		cout << *it;
//		++it;
//	}
//	cout << endl;
//
//	return 0;
//}





int main()
{
	//const string s("hello");
	//string::const_iterator it = s.begin();
	//while (it != s.end())
	//{
	//	//it += 1;
	//	cout << *it << " ";
	//	++it;
	//}


	/*string str("hello world!");
	string::reverse_iterator it = str.rbegin();
	while (it != str.rend())
	{
		cout << *it << " ";
		++it;
	}*/


	/*const string str("hello world!");
	string::const_reverse_iterator it = str.rbegin();
	while (it != str.rend())
	{
		cout << *it << " ";
		++it;
	}*/


	//string s("hello");
	//for (auto it = s.begin(); it != s.end(); it++)
	//{
	//	cout << *it << " ";
	//}
	/*for (auto e : s)
	{
		cout << e;
	}*/



	//string s("hello");
	//s += " ";
	//s += "wor";
	//s += "ld";
	//cout << s;


	//string str1("hello ");
	//string str2("world");
	//str1.append(str2);
	//cout << str1;


	//string str1("hello");
	//string str2("STL-String");
	//str1.append(str2,1, 5);
	//cout << str1;


	//string str("hello");
	//str.append("world",3);
	//cout << str;

	//string str("hello");
	//str.append(3, '!');
	//cout << str;

	string str("hello");

	return 0;
}