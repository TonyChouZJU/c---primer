#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() < sz;
}

void my_dump(vector<string> &words)
{
	sort(words.begin(),words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies_partition(vector<string> &words,string::size_type sz)
{
	my_dump(words);
	stable_sort(words.begin(), words.end(),[](const string &a,const string &b)
						{return a.size() < b.size();});
	auto end_partition = partition(words.begin(), words.end(), bind(check_size, _1, sz));
	cout << " Those words' length are smaller than " << sz << ":" << endl;
	for_each(words.begin(),end_partition,
		[](const string &s){cout << s << " ";});
	cout << endl;
}

int main()
{
	vector<string> vs;
	string s;
	while(cin >> s)
		vs.push_back(s);
	biggies_partition(vs,4);
}
