#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

int main(){
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;
	vector<int> vec(in_iter,eof);
	sort(vec.begin(),vec.end());
	ostream_iterator<int> out_iter(cout," ");
	copy(vec.begin(),vec.end(),out_iter);
	cout <<endl;
	
}
