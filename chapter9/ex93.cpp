/*
*iterator
*by zhoudaxia
*see c++ primer(5th) p297
×编写函数，接受一对指向vector<int>的迭代器
×和一个int值。在两个迭代器制定的范围中查找
×给定的值，返回一个bool值来指出是否找到
*/
#include <vector>
#include <iostream>
//#include <iterator>

using namespace std;

bool my_find(vector<int>::iterator iter1,vector<int>::iterator iter2,int iter_int)
{
	int finder = 0;
	for(;iter1 != iter2; ++iter1)
		if(*iter1 == iter_int)
		finder = 1;
	if(finder)		
	return false;
	else 
	return true;
}
int main()
{
	vector<int> vi;
	int v;
	bool result;
	while(cin >> v)
		vi.push_back(v);
	cin.clear();
	cin.sync();
	cout << "Please input the number to look for:"<<endl;
	cin >> v;
	result = my_find(vi.begin(),vi.begin(),v);
//	cout << ((result==true) ? "true":"false")<<endl;
	cout << result <<endl;
}


