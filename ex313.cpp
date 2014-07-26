//列出下列vector对象各包含多少个元素
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> v1;
	for(auto c : v1)
		cout << c << " ";
	cout <<endl;
	vector<int> v2(10);
	for(auto c : v2)
		cout << c << " ";
	cout << endl;
	vector<int> v3(10,42);
	for(auto c : v3)
		cout << c << " ";
	cout << endl;
	vector<int> v4{10};
	for(auto c : v4)
		cout << c << " ";
	cout << endl;
	vector<int> v5{10, 42};
	for(auto c : v5)
		cout << c << " ";
	cout << endl;
	vector<string> v6{10};
	for(auto c : v6)
		cout << c << " ";
	cout << endl;
	vector<string> v7{10,"hi"};
	for(auto c : v7)
		cout << c << " ";
	cout << endl;
}
