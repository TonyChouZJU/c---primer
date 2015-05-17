/*
测试动态内存初始化
*/
#include<iostream>
using namespace std;
int *pi = new int;
int* new_int(){
	return (new int);
}
int main(){
	int *pj = new int;
	cout <<"全局对象pi:"<< *pi <<endl;
	cout <<"局部对象pj:"<< *pj <<endl;
	cout <<"函数内对象pf:"<<*new_int()<<endl;
	string *ps1 = new string("direct initialize");
	string *ps2 = new string{"list initialize"};
	cout <<"直接初始化"<<*ps1<<endl;
	cout <<"列表初始化"<<*ps2<<endl;
	return 0;

}
