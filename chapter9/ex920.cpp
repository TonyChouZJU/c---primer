/*
*list deque copy
*by zhoudaxia
*see c++ primer(5th) p309
*从一个list拷贝元素到两个deque中
*值为偶的放到一个,奇的放到另一个
*/

#include<list>
#include<deque>
#include<iostream>

using namespace std;


int main()
{
	list<int> li;
	deque<int> di_odd;
	deque<int> di_even;
	int v;
	while(cin >> v)
		li.push_back(v);
	for(auto &i : li)
		if( i%2 )
		di_odd.push_back(i);
		else
		di_even.push_back(i);
	cout << "odd elements in li are:" <<endl;
	for(auto i : di_odd)
		cout << i << endl;
	cout << "even elements in li are:" <<endl;
	for(auto i : di_even)
		cout << i <<endl;
}
