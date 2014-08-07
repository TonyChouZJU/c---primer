/*
*assign
*by zhoudaxia
*see c++ primer(5th) p304
*将一个list中的char *指针（指向Ｃ风格字符串）
*赋值给一个vector中的string 
*/

#include<string>
#include<vector>
#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<const char *> li={"a","b","c","d","e"};	//li{1,2,3,4,5}
	vector<string> vs;
	vs.assign(li.begin(),li.end());
	for(auto i = vs.begin(); i != vs.end(); ++i)
		cout << *i <<endl;
}
