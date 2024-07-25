#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
using namespace std;

int main()
{
	/*string s;
	s.push_back('a');
	s.push_back('b');
	s.push_back('c');
	cout << s;*/

	//string str1("to be question");
	//string str2("the ");
	//str1.insert(0, str2);
	//str1.insert(6, str2);
	//cout << str1;

	/*string str("hello ");
	string str1("STL-String");
	str.insert(0, str1, 1,10);
	cout << str;*/



	//string str("hello ");
	//str.insert(6, "world");
	//cout << str;

	//string str("hello ");
	//str.insert(6,"world !!!", 7);
	//cout << str;

	//string str("hello ");
	////str.insert(6, 3, '!');
	//string::iterator it;
	////it = str.insert(6, 3, '!');//err
	//it = str.insert(str.begin()+6, 3, '!');
	//cout << str;

	//string str("hello ");
	//string::iterator it;
	//it = str.insert(str.end(), '!');
	//cout << str;



	//string str("hello");
	//string str1(" world");
	//string::iterator it;
	//it = str.end();
	//str.insert(it,str1.begin(),str1.end());
	//cout << str;


	//string str("hello");
	//string::iterator it = str.begin();
	//str.insert(it + 5, { ' ', 'w', 'o', 'r','l','d' });
	//cout << str;

	/*string str("hello STL-String!");
	str.erase(0, 7);
	cout << str;*/

	/*string str("hello STL-String!");
	string::const_iterator it = str.begin();
	str.erase(it);
	cout << str;*/


	//string str("hello STL-String!");
	//string::const_iterator it = str.begin();
	//str.erase(it,it+str.size());
	////str.erase(str.begin(), str.end());
	//cout << str;



	//string str1("hello world");
	//cout << "str1 is:" << " " << str1 << endl;
	//string str2("hello STL-String");
	//cout << "str2 is:" << " " << str2 << endl;
	//str1.swap(str2);
	//cout << "after str1 is:" << " " << str1 << endl;
	//str2.swap(str1);
	//cout << "after str2 is:" << " " << str1 << endl;




	//string str("hello world");
	//str.pop_back();
	//cout << str;


	//string str("hello world");
	//cout << str.data();

	/*char s[20];
	string str("hello world");
	size_t m=str.copy(s, 5, 0);
	s[m] = '\0';
	 cout << s;*/


	/* string str("hello world Linutttt, I am a C++ and Linux learner hello");
	 string str1("and");
	 string str2("STL");
	 const char* s = "Linux";
	 char c = 'I';*/
	 /*cout << str.find(c)<<endl;
	 cout << str.find(c,0);*/


	 //size_t n6 = str.find(s,0,4);
	 //cout << n6;
	 /*size_t n4 = str.find(s);
	 size_t n5 = str.find(s,0);*/
	
	/* cout << n4 << endl;
	 cout << n5 << endl;*/
	 //size_t n1 = str.find(str1, 0);
	 //size_t n3 = str.find(str1);
	 //size_t n2= str.find(str2, 0);
	 //cout << n1 << endl;
	 //cout << n3 << endl;
	 //cout << n2 << endl;




	// string str = "Hello World";
	// string chars = "abcde";

	// // 在str中查找第一个出现在"abcde"中的字符
	//// size_t n = str.find_first_of(chars);
	// size_t n = str.find_last_of(chars);
	// cout << "最后一个字母出现在位置：" << n << endl;
	// cout << "字符为：" << str[n] << endl;


	///* cout << "第一个字母出现在位置：" << n << endl;
	// cout << "字符为：" << str[n] << endl;*/
      
    string str("hello I am substr,who are you");
	
	cout<<str.substr(6, 4);





	return 0;
}