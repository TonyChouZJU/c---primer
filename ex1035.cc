#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main(){
	istream_iterator<string> in_iter(cin);
	istream_iterator<string> eof;
	vector<string> vs(in_iter,eof);
	for(vector<string>::const_iterator iter = vs.cend(); iter != vs.cbegin(); )
		cout << *(--iter) <<endl;
}
