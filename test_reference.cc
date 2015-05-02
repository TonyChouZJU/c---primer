/*
测试reference是否一定要初始化，以及
reference占用内存大小
*/

#include<iostream>

using namespace std;

int main(){
	int i = 1;
	int &j = i;
	int &k=j;
	cout <<"i:" <<i<<" j(refer to i )" <<j <<endl;
	cout <<"sizeof(j):" << sizeof(j)<<endl;
	cout <<"sizeof(k):" << sizeof(k) <<endl;
	return 0;
}
