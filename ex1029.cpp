/*
*使用迭代器读取一个文本文件
*存入一个vector中的string
*/

#include<iostream>
#include<fstream>
#include<iterator>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

	ifstream in_file("infile.txt");
	ofstream out_file("outfile.txt");
	if(!in_file||!out_file){
		cout << "failed to opon file!\n";
		return -1;
	}
	istream_iterator<string> in_iter(in_file);
	istream_iterator<string> eof;
	vector<string> vec(in_iter,eof);
	ostream_iterator<string> out_iter(out_file," ");
	copy(vec.cbegin(),vec.cend(),out_iter);
	cout << " finished!" <<endl;
}
