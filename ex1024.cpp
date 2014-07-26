#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const int &a,string::size_type sz)
{
	return a > sz;
}

int main()
{
	vector<int> vs;
	int a;
	string s;
	while(cin >> a)
		vs.push_back(a);
	cin.clear();
	cin.sync();
	cin >> s;
	auto as = find_if(vs.begin(), vs.end(), bind(check_size,_1,s.size()));
	cout << *as <<endl;
	
}

