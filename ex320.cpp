//读入一组整数并把他们存入一个vector对象，将每对相邻的和输出出来。
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n;
	vector<int> vn;
	while(cin >> n)
		vn.push_back(n);
	for(decltype(vn.size()) i =0;
	   i+1 <= vn.size()-1; i=i+2)
		cout << vn[i] + vn[i+1] << " ";
	if(vn.size()%2!=0)
		cout << vn[vn.size()-1] <<endl;
	else 
		cout <<endl;
}
