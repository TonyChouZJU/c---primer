/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015

#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/c++_primer/chapter12\ex12_10.cc
#       @Last modified         :2015-05-17 16:19
#       @Description    c++ primer Ex12.10
=============================================================================*/

#include<iostream>
#include<memory>
#include<vector>

using namespace std;

void process(shared_ptr<int> sptr){
	cout <<"in the process function,sptr count："<<sptr.use_count()<<endl;
}

int main(){
	shared_ptr<int> p = make_shared<int>(100);
	process(shared_ptr<int>(p));

	cout<<"show the count change:"<<endl;
	cout<<"p count:"<<p.use_count()<<endl;
	shared_ptr<int> q = p;
	cout<<"After copy,p count:"<<p.use_count()<<endl;
	cout <<"p value:"<<*p<<endl;
	return 0;

}
