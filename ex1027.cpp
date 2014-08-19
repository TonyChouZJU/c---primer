/*
*使用unique_copy将一个vector中不重复的元素拷贝到
*一个初始为空的list中
*/
#include <list>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main(){
	list<int> li;
	list<int> li2;
	list<int> li3;
	vector<int> vi{1,2,2,3,4,5,6,7};
	unique_copy(vi.cbegin(),vi.cend(),front_inserter(li));
	for_each(li.cbegin(),li.cend(),[](const int &s){cout << s <<' ' ;});
	cout << endl;

	unique_copy(vi.cbegin(),vi.cend(),inserter(li2,li2.begin()));
	for_each(li2.cbegin(),li2.cend(),[](const int &s){cout << s <<' ' ;});
	cout << endl;

	unique_copy(vi.cbegin(),vi.cend(),back_inserter(li3));
	for_each(li3.cbegin(),li3.cend(),[](const int &s){cout << s <<' ' ;});
	cout << endl;
}
