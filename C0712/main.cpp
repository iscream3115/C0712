#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	vector<int> v;

	////reserve() -> ���뷮 ����
	//v.reserve(100);

	//for (int i = 0; i < 100; i++)
	//{
	//	//push_back() -> ���� ������ ��ġ�� ������ ����
	//	v.push_back(i);
	//}

	////pop_back() -> ���� ������ �����͸� ��
	//v.pop_back();
	//cout << "------------------------------------------" << endl;

	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << " ";

	//}
	//cout << endl;
	//cout << "------------------------------------------" << endl;
	////�ݺ��� : �����Ϳ� ����ϴ�. �׷��� ������ Ŭ������ �Ǿ��ִ�.
	////begin() -> ù��° �ּҸ� ����Ų��.
	//vector<int>::iterator it = v.begin();
	//cout << *it << endl;

	//cout << "------------------------------------------" << endl;

	////end() -> �ݺ����� ���κ��� �������ش� == ������ �� �κ��� ����� �˷��ش�.
	////it -> ���� it�� ��ġ
	//for (; it != v.end();it++)
	//{
	//	cout << *it << "	 ";
	//}

	//cout << endl;
	//cout << "------------------------------------------" << endl;

	//// ������ ó������ ������ �����Ͽ� 10�� ������ �ִ� ���ڸ� ã�ƶ� -> ã���� 10�� ��ġ�� �ּҸ� ����
	//vector<int>::iterator findIt = find(v.begin(), v.end(), 10);
	//if (findIt != v.end()) cout << *findIt << endl;

	//
	////erase -> �ݺ��� ��ġ�� �ִ� ���� �����Ѵ�. ���� ��ġ�� ���� ��ġ(�ݺ���) == 11 �� �����Ѵ�.
	//v.erase(findIt);


	//cout << "------------------------------------------" << endl;
	////end�� �����Ѵ�. 10�� ������ �����̴�.
	//vector<int>::iterator findIt2 = find(v.begin(), v.end(), 10);

	//if (findIt2 != v.end()) cout << *findIt2 << endl;

	//cout << "------------------------------------------" << endl;

	//for (int i = 0; i < v.size(); i++) cout << v[i] << endl;
	////clear() - >������ ��� ���Ҹ� ����������.
	//v.clear();

	//cout << "------------------------------------------" << endl;

	////insert v���� ��ġ���� v2�� ���ۺ��� ������ �ִ� ���ҵ��� �־��ش�.
	//vector<int> v2{ 1,2,3,4,5 };
	// 
	//v.insert(v.begin(), v2.begin(), v2.end());
	//for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";
	//cout << endl;
	//cout << "------------------------------------------" << endl;

	////�ݺ��� ���� ��ġ�� 10�� �ִ´�.
	//v.insert(v.begin(), 10);
	//for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";
	//cout << endl;
	//cout << "------------------------------------------" << endl;

	////sort - > ���� �˰���
	//sort(v.begin(),v.end());
	//for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";
	//cout << endl;
	//cout << "------------------------------------------" << endl;

	////reverse -> ���Ҹ� �Ųٷ� �迭

	//reverse(v.begin(), v.end());
	//for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";
	//cout << endl;
	//cout << "------------------------------------------" << endl;


	//���� 1. �ݺ����� �̿��Ͽ� v3���� 10�� ��� �����
	vector<int> v3 = { 0 , 1 ,2 , 10, 23,23,1, 2, 10, 10, 33, 3 };


	for (int i = 0; i < 3; i++)
	{
		vector<int>::iterator vTemp = find(v3.begin(), v3.end(), 10);

		v3.erase(vTemp);
	}

	for (int i = 0; i < v3.size(); i++) cout << v3[i] << "	 ";

	cout << endl;
	cout << "------------------------------------------" << endl;

	return 0;
}