#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	ifstream in_file("1033.txt");
	ofstream out1("1.txt");
	ofstream out2("2.txt");
	
	istream_iterator<int> in_iter(in_file);
	istream_iterator<int> eof;
	ostream_iterator<int> out_iter1(out1," ");
	ostream_iterator<int> out_iter2(out2,"\n");
	while(in_iter != eof){
		if(*in_iter%2==0)
			out_iter1 = *in_iter;
		else
			out_iter2 = *in_iter;
		++in_iter;
	}
}
