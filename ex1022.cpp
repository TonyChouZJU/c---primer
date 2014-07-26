#include <stddef.h>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}
string make_plural(size_t ctr, const string &word,
				const string &ending)
{
	return (ctr > 1) ? word+ending : word;
}

void my_elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz,	
		ostream &os = cout, char c =' ')
{
	my_elimDups(words);
	//The lambda expression can also be replaced by a function
	stable_sort(words.begin(), words.end(),
			[](const string &a, const string &b)
			{return a.size() < b.size();});
	//get the first iterator whose size is bigger than sz
	/*auto wc = find_if(words.begin(), words.end(),
			[sz](const string &a)
			{return a.size() >= sz;});*/
	auto wc = find_if(words.begin(), words.end(),
			bind(check_size, _1, sz));
	//count the number of elements which satisfy size >=sz
	auto count = words.end() -wc;
	cout << count << " " << make_plural(count, "word", "s")
		<<" of length " << sz << " or longer" <<endl;
	for_each(wc, words.end(),
		[&os, c](const string &s) { os << s << c;});
	cout << endl;
        
	for_each(wc, words.end(),
		[](const string &s) {cout << s << " ";});
	cout << endl;
}

int main()
{
	vector<string> vs;
	string ss;
	while(cin >> ss)
		vs.push_back(ss);
	biggies(vs, 5);
}

