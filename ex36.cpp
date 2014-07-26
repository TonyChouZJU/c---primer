#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line;
	cout <<"输入字符串并以ENTER结束"<<endl;
	while(getline(cin,line))
		cout << line <<endl;
	for(auto &c : line)
		c = 'X';
	cout << line <<endl;
}	
