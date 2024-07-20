#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
////using namespace std;
////
////int main()
////{
////	//1、string()默认构造函数
////	//std::string();
////	//std::cout << std::string() << std::endl;
////
////	//2、string(const string& str)拷贝构造
////	/*std::string str("STL-String");
////	std::string str1(str);
////	std::string str2 = str;
////	std::cout << str1 << std::endl;
////	std::cout << str2 << std::endl;*/
////
////	//3、string(const string& str, size_t pos, size_t len = npos) 重载构造函数
////	/*std::string str("hello STL_String");
////	std::string str1(str, 2, 12);
////	std::string str2(str, 2, std::string::npos);
////	std::string str3(str, 2, -1);
////	std::string str4(str, 2, 30);
////	std::string str5(str, 2);
////	std::cout << str1 << std::endl;
////	std::cout << str2 << std::endl;
////	std::cout << str3 << std::endl;
////	std::cout << str4 << std::endl;
////	std::cout << str5 << std::endl;*/
////
////	////4、string(const char*s) 用C格式字符串构造string类对象s2
////	//std::string s("hello");// 用C格式字符串构造string类对象s2
////	//std::string s1 = "hello";
////	//std::cout << s << std::endl;
////	//std::cout << s1 << std::endl;
////
////	//5、string(const char*s,size_t n) 从s指向的字符数组中复制前n个字符。
////	/*std::string s("hello world", 2);
////	std::cout << s << std::endl;*/
////
////
////	////6、string(size_t n,char c)
////	//std::string str1(8,'h');
////	//std::cout << str1 << std::endl;
////
////
////	//operator<<
////	/*std::string s1("hello ");
////	std::string s2("STL-String");
////	std::cout << s1 << s2 << std::endl;*/
////
////	////opreator>>
////	//std::string s1;
////	//std::cin >> s1;
////	//std::cout << s1;
////
////
////	/*std::string s;
////	getline(std::cin,s);*/
////
////	//std::string s("hello world \0 STL");//这行代码本身就是不正确的
////	////std::string s = "hello world \0 STL";//这行代码本身就是不正确的
////	//std::cout << s.std::string::c_str() << std::endl;
////	//std::cout << s << std::endl;
////
////
////	std::string s = "hello world \0 STL"; // 注意：这里的\0是字符串字面量中的一部分  //这行代码本身就是不正确的
////	// 遍历字符串并打印每个字符  
////	for (size_t i = 0; i < s.size(); ++i) {
////		// 如果字符是'\0'，则特殊表示  
////		if (s[i] == '\0') {
////			std::cout << "sssss"; // 使用转义序列来表示'\0'  
////		}
////		else {
////			std::cout << s[i];
////		}
////	}
////	std::cout << std::endl;
////
////	// 另一种方式，使用范围for循环（C++11及以后）  
////	/*for (char c : s) {
////		if (c == '\0') {
////			std::cout << "\\0";
////		}
////		else {
////			std::cout << c;
////		}
////	}
////	std::cout << std::endl;*/
//// 
////	return 0;
////}
//
//#include <iostream>  
//#include <string>  
//
//int main() {
// /*   std::string s = "hello world";
//    s += '\0';
//    s += ' ';
//    s += "csdn";*/
//    //std::cout << s;
//    //
//    /*std::cout << s.size() << std::endl;
//    std::cout << s << std::endl;*/
//    //std::string s = "hello world \0 csdn";//这行代码本身就是不正确的
//    //for (size_t i = 0; i < s.size(); ++i) {
//    //    if (s[i] == '\0') {
//    //        std::cout << "\\0"; // 使用转义序列来表示'\0'  
//    //    }
//    //    else {
//    //        std::cout << s[i];
//    //    }
//    //}
//    std::cout << std::endl;
//
//    return 0;
//}




//int main()
//{
//	/*std::string s("hello world");
//	std::cout << s.c_str() << std::endl;*/
//
//
//	/*std::string s("hello STL");
//	std::cout << s.size() << "\n" << s.length() <<std::endl;*/
//
//
//
//	/*std::string s("hello STL");
//	std::cout << s.max_size() << std::endl;
//	std::cout << s.capacity() << std::endl;*/
//
//
//
//	//std::string s("hello STL");
//	///*s.resize(3);
//	//std::cout << s;*/
//	////s.resize(13, '*');
//	//int _size = s.size();
//	//s.resize(_size + 1, '+');
//	//std::cout << s; 
//
//
//
//	//std::string s1;
//	//std::cout << s1.capacity() << std::endl;
//	//s1.reserve(10);
//	//std::cout << s1.capacity() << std::endl;
//
//	//std::string s2("hello worldxxxxxxx");
//	//std::cout << s2.capacity() << std::endl;
//	//s2.reserve(100);
//	//std::cout << s2.capacity() << std::endl;
//
//	return 0;





int main()
{
	//try
	//{
	//	std::string s1;
	//	std::string s2("hello worldxxxxxxxxxxxxx");
	//	// 确定需要多少空间，提前开好空间即可
	//	s1.reserve(500);

	//	size_t old = s1.capacity();
	//	std::cout << old << std::endl;


	//	for (size_t i = 0; i < 500; i++)
	//	{
	//		s1.push_back('x');
	//		if (old != s1.capacity())
	//		{
	//			std::cout << s1.capacity() << std::endl;
	//			old = s1.capacity();
	//		}
	//	}
	//}
	//catch (const std::exception& e)
	//{
	//	std::cout << e.what() << std::endl;
	//}



	//std::string s1;
	//std::cout << s1.capacity() << std::endl;
	//s1.reserve(10);
	//std::cout << s1.capacity() << std::endl;

	//
	//std::string s2("hello worldxxxxxxxxxxxxx");
	//std::cout << s2.capacity() << std::endl;
	//s2.reserve(10);
	//std::cout << s2.capacity() << std::endl;





	//std::string s1("hello world!");
	//std::cout << s1 << std::endl;
	//s1.clear();
	//std::cout << "-----------" << std::endl;
	//std::cout << s1 << std::endl;






	/*std::string s("hello world");
	if (!s.empty())
	{
		std::cout << "s is not empty" << std::endl;
	}*/







	std::string str(100, 'x');
	//std::cout << str;
	std::cout << "1. capacity of str: " << str.capacity() << std::endl;

	str.resize(10);
	std::cout << "2. capacity of str: " << str.capacity() << std::endl;

	str.shrink_to_fit();
	std::cout << "3. capacity of str: " << str.capacity() << std::endl;




	return 0;
}