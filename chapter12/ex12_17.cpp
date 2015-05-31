/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015

#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/c++_primer/chapter12\ex12_17.cpp
#       @Last modified         :2015-05-21 22:01
#       @Description    :
=============================================================================*/
#include<iostream>
#include<memory>

using namespace std;

int main(){

	int i =10;
//	int *newj = new int(20);
//	unique_ptr<int> pi(&i);
//	unique_ptr<int> pj(newj);
//	cout <<*pi<<endl;
	
//	cout <<*pj<<endl;
	unique_ptr<int> p(new int(10));
	unique_ptr<int> p2(p.get());
	cout <<*p<<endl;
	cout <<*p2<<endl;
	return 0;
}
