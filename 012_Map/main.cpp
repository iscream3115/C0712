#include <iostream>
#include <map>
using namespace std;


int main()
{

	//map <key,value> -> key�� �̿��ؼ� value�� ã��
	map<string, int> m;

	//key�� ���ڿ�,�Ǽ����̿��� ����
	m["10"] = 10;
	cout << m["10"] << endl;

	map<int, int> m2;
	m2[12] = 20;
	cout << m2[12] << endl;

	//map �ݺ���
	map<int, int>::iterator it = m2.begin();

	cout <<"first(key) : " << it->first << endl;
	cout <<"first(value) : " << it->second << endl;

	//erase,clear �� ���Ϳ� ���� �ʵ� ���� ��ɵ��� ����� �� �ִ�.

	return 0;
}