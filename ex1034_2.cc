#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
	istream_iterator<string> in_iter(cin);	
	istream_iterator<string>  eof;
	vector<string> vs(in_iter,eof);
	for(vector<string>::const_reverse_iterator cr_iter = vs.crbegin();
		cr_iter != vs.crend(); ++cr_iter)
			cout << *cr_iter <<endl;

}
