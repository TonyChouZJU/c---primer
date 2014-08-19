/*
*istream_iterator
*ostream_iterator
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;
	vector<int> vec(in_iter,eof);
	sort(vec.begin(),vec.end());
	
	ostream_iterator<int> os(cout," ");
	copy(vec.cbegin(),vec.cend(),os);
	os = 10;

}
