#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

void vec_display(vector<string> &v)
{	
	//The first method uses iterator to traversal
	for(vector<string>::const_iterator i = v.cbegin(); i != v.cend(); ++i)
	cout << *i <<" ";
	cout <<endl;
	//2nd method uses auto to traversal
	//for(auto i : v)
	//cout << i ;
	
	//3rd method uses ... 
}
void my_elimDups(vector<string> &words)
{
	vec_display(words);
	sort(words.begin(),words.end());
	vec_display(words);
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique,words.end());
	vec_display(words);
	//for(auto j : words)
	//cout <<endl;
}

int main()
{
	vector<string> vs;
	string s;
	while(cin >> s)
		vs.push_back(s);
	
	my_elimDups(vs);
	stable_sort(vs.begin(), vs.end(), isShorter);
	for(const auto &i : vs)
		cout << i << " ";
	cout <<endl;
}
