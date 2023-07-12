#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	vector<int> v;

	//reserve() -> 수용량 변경
	v.reserve(100);

	for (int i = 0; i < 100; i++)
	{
		//push_back() -> 가장 마지막 위치에 데이터 삽입
		v.push_back(i);
	}

	//pop_back() -> 가장 마지막 데이터를 뺌
	v.pop_back();
	cout << "------------------------------------------" << endl;

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";

	}
	cout << endl;
	cout << "------------------------------------------" << endl;
	//반복자 : 포인터와 비슷하다. 그러나 구현은 클래스로 되어있다.
	//begin() -> 첫번째 주소를 가르킨다.
	vector<int>::iterator it = v.begin();
	cout << *it << endl;

	cout << "------------------------------------------" << endl;

	//end() -> 반복자의 끝부분을 리턴해준다 == 벡터의 끝 부분이 어딘지 알려준다.
	//it -> 현재 it의 위치
	for (; it != v.end();it++)
	{
		cout << *it << "	 ";
	}

	cout << endl;
	cout << "------------------------------------------" << endl;

	// 벡터의 처음부터 끝까지 조사하여 10을 가지고 있는 인자를 찾아라 -> 찾으면 10의 위치의 주소를 리턴
	vector<int>::iterator findIt = find(v.begin(), v.end(), 10);
	if (findIt != v.end()) cout << *findIt << endl;

	
	//erase -> 반복자 위치에 있는 값을 삭제한다. 지운 위치의 다음 위치(반복자) == 11 를 리턴한다.
	v.erase(findIt);


	cout << "------------------------------------------" << endl;
	//end를 리턴한다. 10을 지웠기 떄문이다.
	vector<int>::iterator findIt2 = find(v.begin(), v.end(), 10);

	if (findIt2 != v.end()) cout << *findIt2 << endl;

	cout << "------------------------------------------" << endl;

	for (int i = 0; i < v.size(); i++) cout << v[i] << endl;
	//clear() - >벡터의 모든 원소를 지워버린다.
	v.clear();

	cout << "------------------------------------------" << endl;

	//insert v시작 위치에서 v2의 시작부터 끝까지 있는 원소들을 넣어준다.
	vector<int> v2{ 1,2,3,4,5 };
	v.insert(v.begin(), v2.begin(), v2.end());
	for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";
	cout << endl;
	cout << "------------------------------------------" << endl;

	//반복자 현재 위치에 10을 넣는다.
	v.insert(v.begin(), 10);
	for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";
	cout << endl;
	cout << "------------------------------------------" << endl;

	//sort - > 정렬 알고리즘
	sort(v.begin(),v.end());
	for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";
	cout << endl;
	cout << "------------------------------------------" << endl;

	//reverse -> 원소를 거꾸로 배열

	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";
	cout << endl;
	cout << "------------------------------------------" << endl;


	//과제 1. 반복문을 이용하여 v3안의 10을 모두 지우기
	vector<int> v3 = { 0 , 1 ,2 , 10, 23,23,1, 2, 10, 10, 33, 3 };

	//int index = 0;


	//for (int i = 0; i < v3.size(); i++)
	//{
	//	vector<int>::iterator vTemp = find(v3.begin(), v3.end(), 10);

	//	v3.erase(vTemp);
	//}

	//for (int i = 0; i < v.size(); i++) cout << v[i] << "	 ";

	cout << endl;
	cout << "------------------------------------------" << endl;

	return 0;
}