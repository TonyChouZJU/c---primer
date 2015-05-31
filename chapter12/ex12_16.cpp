/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015

#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/c++_primer/chapter12\ex12_16.cpp
#       @Last modified         :2015-05-21 21:46
#       @Description    :   copy or assign unique_ptr; Observe all the errors and explain why
=============================================================================*/
#include<iostream>
#include<memory>

using namespace std;

unique_ptr<int> clone(int s){

	return unique_ptr<int>(new int(s));
}
int main(){
	
	//直接初始化unique_ptr
	unique_ptr<int> p1;
	unique_ptr<int> p2(new int);
	unique_ptr<int> p3{new int(3)};
//	unique_ptr<int> p4(p3);
	unique_ptr<int> p4 = clone(4);
//	cout << "p1:"<<*p1<<endl;
	cout << "p2:"<<*p2<<endl;
	cout << "p3:"<<*p3<<endl;
	cout << "p4:"<<*p4<<endl;
	return 0;
}
