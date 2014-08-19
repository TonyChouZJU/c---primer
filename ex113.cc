/*
*编写自己的单词计数程序
*/
#include <map>
#include <set>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	map<string, size_t> word_count;
	set<string> exclude{"The", "But", "And", "Or", "An", "A",
				"the", "but", "and", "or", "an", "a"};
	string word;
	while(cin >> word)
		if(exclude.find(word) == exclude.end())
			++word_count[word];
	for(const auto &w: word_count)
		cout << w.first << " occurs " << w.second
			<< ((w.second>1) ? " times" : " time")<<endl;
}