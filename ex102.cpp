#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	vector<string> a;
	string b;
	int nums_of_b;
	while(cin >> b)
		a.push_back(b);
	cin.clear();
	cin:sync();
	cout <<"Input the string that to be counted"<<endl;
	cin >>b;
	nums_of_b = count(a.begin(),a.end(),b);
	cout <<"There are " <<nums_of_b<<" in vector a"<<endl;
}
