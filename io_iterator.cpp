/*
*iostream
*/
#include <iterator>
#include <list>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	istream_iterator<int> int_iter(cin);
	istream_iterator<int> eof;
	vector<int> vec;
	while(int_iter != eof)
		//后置递增运算读取流，返回迭代器的旧值
		//解引用迭代器，获得从流读取的前一个值
		vec.push_back(*int_iter++);
	for_each(vec.cbegin(),vec.cend(),[](const int &s){cout << s << ' ';});
	cout <<endl;
}
