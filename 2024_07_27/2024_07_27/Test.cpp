#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//
//int main()
//{
//	vector<int> v{ 1,2,3,4,5,6 };
//
//	auto it = v.begin();
//
//	// ����ЧԪ�ظ������ӵ�100���������λ��ʹ��8��䣬�����ڼ�ײ������
//	// v.resize(100, 8);
//
//	// reserve�����þ��Ǹı����ݴ�С�����ı���ЧԪ�ظ����������ڼ���ܻ�����ײ������ı�
//	// v.reserve(100);
//
//	// ����Ԫ���ڼ䣬���ܻ��������ݣ�������ԭ�ռ䱻�ͷ�
//	// v.insert(v.begin(), 0);
//	// v.push_back(8);
//
//	// ��vector���¸�ֵ�����ܻ�����ײ������ı�
//	v.assign(100, 8);
//
//	/*
//	����ԭ�����ϲ��������п��ܻᵼ��vector���ݣ�Ҳ����˵vector�ײ�ԭ��ɿռ䱻�ͷŵ���
//   ���ڴ�ӡʱ��it��ʹ�õ����ͷ�֮��ľɿռ䣬�ڶ�it����������ʱ��ʵ�ʲ�������һ���Ѿ����ͷŵ�
//   �ռ䣬�������������ʱ������
//	�����ʽ�������ϲ������֮�������Ҫ����ͨ������������vector�е�Ԫ�أ�ֻ���it����
//   ��ֵ���ɡ�
//	*/
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}




//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	// ʹ��find����3����λ�õ�iterator
//	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
//	// ɾ��posλ�õ����ݣ�����pos������ʧЧ��
//	v.erase(pos);
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << *pos << endl; // �˴��ᵼ�·Ƿ�����
//	return 0;
//}




//int main()
//{
//	vector<int> v{ 1, 2, 3, 4 };
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//			v.erase(it);
//		++it;
//	}
//
//
//
//	vector<int> v1{ 1, 2, 3, 4 };
//	auto it = v1.begin();
//	while (it != v1.end())
//	{
//		if (*it % 2 == 0)
//			it = v1.erase(it);
//		else
//			++it;
//	}
//
//
//	return 0;
//}




//// 1. ����֮�󣬵������Ѿ�ʧЧ�ˣ�������Ȼ�������У��������н���Ѿ�������
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	for (size_t i = 0; i < v.size(); ++i)
//		cout << v[i] << " ";
//	cout << endl;
//	auto it = v.begin();
//	cout << "����֮ǰ��vector������Ϊ: " << v.capacity() << endl;
//	// ͨ��reserve���ײ�ռ�����Ϊ100��Ŀ����Ϊ����vector�ĵ�����ʧЧ 
//	v.reserve(100);
//	cout << "����֮��vector������Ϊ: " << v.capacity() << endl;
//
//	// ��������reserve֮��it�������϶���ʧЧ����vs�³����ֱ�ӱ����ˣ�����linux�²���
//	// ��Ȼ�������У���������Ľ���ǲ��Ե�
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}




//// 2. eraseɾ������λ�ô����linux�µ�������û��ʧЧ
//// ��Ϊ�ռ仹��ԭ���Ŀռ䣬����Ԫ����ǰ�����ˣ�it��λ�û�����Ч��
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	vector<int>::iterator it = find(v.begin(), v.end(), 3);
//	v.erase(it);
//	cout << *it << endl;
//	while (it != v.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	return 0;
//}




//// 3: eraseɾ���ĵ�������������һ��Ԫ�أ�ɾ��֮��it�Ѿ�����end
//// ��ʱ����������Ч�ģ�++it���³������
//int main()
//{
//	vector<int> v{ 1,2,3,4,5 };
//	// vector<int> v{1,2,3,4,5,6};
//	auto it = v.begin();
//	while (it != v.end())
//	{
//		if (*it % 2 == 0)
//			v.erase(it);
//		++it;
//	}
//	for (auto e : v)
//		cout << e << " ";
//	cout << endl;
//	return 0;
//}




void TestString()
{
	string s("hello");
	auto it = s.begin();
	// �ſ�֮�������������Ϊresize��20��string���������
	// ����֮��itָ��֮ǰ�ɿռ��Ѿ����ͷ��ˣ��õ�������ʧЧ��
	// �����ӡʱ���ٷ���itָ��Ŀռ����ͻ����
	//s.resize(20, '!');
	while (it != s.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
	it = s.begin();
	while (it != s.end())
	{
		it = s.erase(it);
		// �������淽ʽд������ʱ������������Ϊerase(it)֮��
		// itλ�õĵ�������ʧЧ��
		// s.erase(it); 
		++it;
	}
}