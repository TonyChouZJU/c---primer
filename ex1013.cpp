#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool biggerThanfive(const string& s)
{
	return s.size() <5;
}

int main(void)
{
	vector<string> vs;
	string ss;
	while(cin >> ss)
		vs.push_back(ss);
	auto bigger_vs = partition(vs.begin(),vs.end(),biggerThanfive);
	for(auto i = bigger_vs; i != vs.end(); ++i)
		cout << *i << " ";
	cout << endl;

}

