/*
*initialize 2
*by zhoudaxia
*see c++ primer(5th) p302
*从list<int>初始化一个vector<double>
*从vector<int>初始化vector<double>
*/

#include<vector>
#include<list>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	list<int> li{1,2,3,4,5};
	
	vector<double> vd(li.begin(),li.end());
	cout << "vector<double> vd :"<<endl;
	for_each(vd.begin(),vd.end(),
		[](const double &v){cout << v <<endl;});
	
	
	list<double> li2{1.1,2.2,3.3,4.4,5.5};
	
	vector<int> vd2(li2.begin(),li2.end());
	cout << "vector<double> vd2 :"<<endl;
	for_each(vd2.begin(),vd2.end(),
		[](const int &v){cout << v <<endl;});

	vector<int> vi3{5,4,3,2,1};
	vector<double> vd3(vi3.begin(),vi3.end());
	cout << "vector<double> vd3 :"<<endl;
	for_each(vd3.begin(),vd3.end(),
		[](const double &v){cout << v <<endl;});
}
