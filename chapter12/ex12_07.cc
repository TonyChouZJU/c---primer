/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015

#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/c++_primer/chapter12\ex12_07.cc
#       @Last modified         :2015-05-17 15:31
#       @Description    :C++ primer 12.07
=============================================================================*/
#include<iostream>
#include<vector>
#include<memory>


using namespace std;
shared_ptr<vector<int>> new_sptr(){
	return make_shared<vector<int>>();
}

shared_ptr<vector<int>> cin_sptr(shared_ptr<vector<int>> sptr){
	int tmp;
	while(cin>>tmp)
		sptr->push_back(tmp);
	cout <<"in cin_sptr,sptr 引用："<<sptr.use_count()<<endl;		//2
	return sptr;
}

void cout_sptr(shared_ptr<vector<int>> sptr){
	for(auto i:*sptr)
		cout<< i<<endl;
}
int main(){
	shared_ptr<vector<int>> sptr = new_sptr();
	cout<<"sptr 引用："<<sptr.use_count()<<endl;			//1
	sptr = cin_sptr(sptr);	
	cout<<"函数返回后 sptr 引用："<<sptr.use_count()<<endl;			//1
	cout_sptr(sptr);
	cout<<"cout 滞后 sptr引用：" <<sptr.use_count()<<endl;
	return 0;
}
