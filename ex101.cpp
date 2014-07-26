#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> a;
	int b;
	int nums_of_b;
	while(cin >> b)
		a.push_back(b);
	cin.clear();
	cin:sync();
	cout <<"Input the number that to be counted"<<endl;
	cin >>b;
	nums_of_b = count(a.begin(),a.end(),b);
	cout <<"There are " <<nums_of_b<<" in vector a"<<endl;
}
