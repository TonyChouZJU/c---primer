//从cin读入一组词并把它们存入一个vector对象
//设法把所有的词都改写成大写，每个词占一行
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;
	vector<string> v_s;
	while(cin >> s)
		v_s.push_back(s);
	for(decltype(v_s.size()) vs_index = 0;
	   vs_index != v_s.size(); ++vs_index)
	{
		for(auto &c : v_s[vs_index])
			c = toupper(c);
		cout << v_s[vs_index] <<endl;
	}
}	
