#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <cstdlib>
using namespace std;


//for (DataType element : container)
//{
//	//处理element
//}

//for (DataType& element : container)
//{
//	//处理element
//}


//int main()
//{
//	/*list<int> li = {1,2,3,4,5,6,7,8,9};
//	list<int>::iterator it = li.begin();
//	for (it; it != li.end(); it++)
//	{
//		cout << *it<<" ";
//	}*/
//
//
//	/*list<int> li = { 1,2,3,4,5,6,7,8,9 };
//	for (auto e : li)
//	{
//		cout << e << " ";
//	}*/
//
//	/*for (int e : li)
//	{
//		cout << e << " ";
//	}*/
//	
//
//
//	//list<int> li = { 1,2,3,4,5,6,7,8,9 };
//
//	//// 打印原始列表  
//	//cout << "Original list: ";
//	//for (auto e : li) {
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//
//	//// 尝试修改每个元素  
//	//for (auto e : li) {
//	//	e = 10; // 尝试修改  
//	//}
//
//	//// 再次打印列表，验证它没有被修改  
//	//cout << "List after attempted modification: ";
//	//for (auto e : li) {
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//
//
//
//
//	//list<int> li = { 1,2,3,4,5,6,7,8,9 };
//
//	//// 打印原始列表  
//	//cout << "Original list: ";
//	//for (auto &e : li) {
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//
//	//// 修改每个元素  
//	//for (auto &e : li) {
//	//	e = 10; // 尝试修改  
//	//}
//
//	//// 再次打印列表，验证它被修改  
//	//cout << "List after attempted modification: ";
//	//for (auto &e : li) {
//	//	cout << e << " ";
//	//}
//	//cout << endl;
//
//
//	//list<int> li = { 1,2,3,4,5,6,7,8,9 };  
//	//for (const auto &e : li) {
//	//	cout << e << " ";
//	//}
//
//
//
//
//	return 0;
//}






  

//int main() 
//{
//    //map<int, std::string> myMap = {
//    //    {1, "Apple"},
//    //    {2, "Banana"},
//    //    {3, "Cherry"}
//    //};
//
//    //// 使用基于迭代器的for循环遍历map  
//    //for (auto it = myMap.begin(); it != myMap.end(); ++it) {
//    //    // 使用迭代器访问键值对  
//    //    cout << "Key: " << it->first << ", Value: " << it->second << endl;
//    //}
//    //cout << endl;
//    //for (auto &e : myMap)
//    //{
//    //    cout << "Key: " << e.first << ", Value: " << e.second << endl;
//
//    //}
//
//
//    std::set<int> mySet = { 1, 2, 3, 4, 5 };
//    for (auto& elem : mySet) {
//        elem = 10; // 
//    }
//
//    // 打印修改后的set  
//    for (const auto& elem : mySet) {
//        std::cout << elem << " ";
//    }
//    std::cout << std::endl;
//
//
//
//    //map<int, std::string> myMap = {
//    //    {1, "Apple"},
//    //    {2, "Banana"},
//    //    {3, "Cherry"}
//    //};
//    //for (auto &e : myMap)
//    //{
//    //    cout << "Key: " << e.first++<< ", Value: " << e.second << endl;
//
//    //}
//
//
//    return 0;
//}






list<int> li = { 1, 2, 3, 4, 5, 6 };
list<int>& Mylist()
{
    cout << "Mylist" << endl;
    return li;
}

int main()
{
    for (auto e : Mylist())
    {
        cout << e << " ";
    }
    cout << endl;
    return 0;
}

