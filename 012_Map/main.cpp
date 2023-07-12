#include <iostream>
#include <map>
using namespace std;


int main()
{

	//map <key,value> -> key를 이용해서 value를 찾기
	map<string, int> m;

	//key가 문자열,실수형이여도 가능
	m["10"] = 10;
	cout << m["10"] << endl;

	map<int, int> m2;
	m2[12] = 20;
	cout << m2[12] << endl;

	//map 반복자
	map<int, int>::iterator it = m2.begin();

	cout <<"first(key) : " << it->first << endl;
	cout <<"first(value) : " << it->second << endl;

	//erase,clear 등 벡터와 같이 맵도 여러 기능들을 사용할 수 있다.

	return 0;
}