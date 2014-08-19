#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;
	list<int> li(in_iter, eof);
	list<int>::const_reverse_iterator li_iter = find(li.crbegin(),li.crend(),0);
	for_each(li_iter.base(),li.cend(),[](const int &s){cout << s << ' ';});
	cout <<endl;
}
