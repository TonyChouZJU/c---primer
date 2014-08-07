/*
*initialize
*by zhoudaxia
*see c++ primer(5th) p299
*对6种创建和初始化vector对象的方法，每一种都给出
*一个实例，解释每个vector包含什么值
*/

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1;
	cout << "1:C c 默认构造函数" <<endl;
	for_each(v1.begin(),v1.end(),[](const int &vv1){cout << vv1 <<endl;});

	vector<int> v2{1,2,3,4,5,6};
	cout << "2:C c1{a,b,c,d,...}初始化为初始化列表中元素的拷贝 " <<endl;	
	for_each(v2.begin(),v2.end(),[](const int &vv1){cout << vv1 <<endl;});
	
	vector<int> v3(v2);
	cout << "3:C c1(c2) c1初始化为c2的拷贝 " <<endl;		
	for_each(v3.begin(),v3.end(),[](const int &vv1){cout << vv1 <<endl;});
        /*
	vector<int> v4=v2;
	cout << "4:C c1=c2 c1初始化为c2的拷贝 " <<endl;
	for_each(v4.begin(),v4.end(),[](const int &vv1){cout << vv1 <<endl;});
	*/
	vector<int> v4(v2.begin(),v2.end()-2);
	cout << "4:C c(b,e) c初始化为迭代器b和e制定范围中元素的拷贝。"<<endl; 
	for_each(v4.begin(),v4.end(),[](const int &vv1){cout << vv1 <<endl;});
	
	vector<int> v5(5);
	cout << "5:C seq(n) seq包含n个元素，这些元素进行值初始化" <<endl;
	for_each(v5.begin(),v5.end(),[](const int &vv1){cout << vv1 <<endl;});
	
	vector<int> v6(5,1);
	cout << "6:C seq(n,t) seq初始化为n个t" <<endl;
	for_each(v6.begin(),v6.end(),[](const int &vv1){cout << vv1 <<endl;});
	
}
