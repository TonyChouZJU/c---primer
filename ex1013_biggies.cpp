#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

string make_plural(size_t ctr, const string &word,
				const string &ending)
{
	return (ctr > 1) ? word+ending : word;
}
//display a vector which contains string
void my_disp(vector<string> &s)
{
	for(auto i : s)
		cout << i << " ";
	cout << endl;
}

void my_elimDups(vector<string> &words)
{
	my_disp(words);
	sort(words.begin(), words.end());
	my_disp(words);
	auto end_unique = unique(words.begin(), words.end());
	my_disp(words);
	words.erase(end_unique, words.end());
	my_disp(words);
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	my_elimDups(words);
	stable_sort(words.begin(), words.end(),
			[](const string &a, const string &b)
			{return a.size() < b.size();});
	//get the first iterator whose size is bigger than sz
	auto wc = find_if(words.begin(), words.end(),
			[sz](const string &a)
			{return a.size() >= sz;});
	//count the number of elements which satisfy size >=sz
	auto count = words.end() -wc;
	cout << count << " " << make_plural(count, "word", "s")
		<<" of length " << sz << " or longer" <<endl;
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
	biggies(vs, 3);
}

