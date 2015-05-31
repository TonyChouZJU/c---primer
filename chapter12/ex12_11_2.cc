/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015

#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/c++_primer/chapter12\ex12_11.cc
#       @Last modified         :2015-05-17 16:33
#       @Description    c++ primer Ex12.11
=============================================================================*/

#include<iostream>
#include<memory>
#include<vector>

using namespace std;

void process(shared_ptr<int> sptr){
	cout <<"in the process function,sptr count："<<sptr.use_count()<<endl;
	cout <<*sptr<<endl;
}

int main(){
	shared_ptr<int> p = make_shared<int>(100);
	process(shared_ptr<int>(p.get()));
        cout <<"exit main"<<endl;
	return 0;

}
