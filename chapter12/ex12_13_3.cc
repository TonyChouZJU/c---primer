/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015

#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/c++_primer/chapter12\ex12_13.cc
#       @Last modified         :2015-05-17 17:14
#       @Description    :
=============================================================================*/
#include<iostream>
#include<memory>

using namespace std;

int main(){
	auto deleter = [](int*p){
	cout <<"deleter called"<<endl; delete p;
};
	shared_ptr<int> sp(new int, deleter);
	auto p = sp.get();
	cout << sp.use_count()<<endl;
	delete p;		
//	cout <<"9999"<<flush;
	cerr <<"888"<<endl;
	return 0;
}
