/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015

#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/c++_primer/chapter12\ex12_19.cc
#       @Last modified         :2015-05-31 13:10
#       @Description    :
=============================================================================*/

#include"ex12_19.h"
#include<iostream>
#include<string>
#include<memory>

using namespace std;
void StrBlob::check(size_type i, const string &msg) const{
	if(i >= data->size())
		throw out_of_range(msg);
}

StrBlobPtr StrBlob::begin(){
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end(){
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}
void StrBlob::pop_back(){
	check(0,"pop_back on emepty StrBlob");
	data->pop_back();
}

string& StrBlob::front(){
	check(0,"front on empty Strblob");
	return data->front();
}

string& StrBlob::back(){
	check(0,"back on empty StrBlob");
	return data->back();
}

shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i,const std::string& msg) const{
	auto ret = wptr.lock();
	if(!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if(i > ret->size())
		throw std::out_of_range(msg);
	return ret;	//否则返回指向vector的shared_ptr
}

string& StrBlobPtr::deref() const{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr(){
	check(curr,"increment past end of StrBlobPtr");
	++curr;
	return *this;
}


int main(){
	StrBlob vint;
	vint.push_back("hello");
	vint.push_back("world");
	cout <<"front:"<<vint.front()<<endl;
	StrBlobPtr vint_ptr(vint);
	cout <<"StrBlobPtr deref:"<<vint_ptr.deref()<<endl;
	vint.pop_back();vint.pop_back();
	cout <<"vint pop_back twice"<<endl;
	cout <<"vint size:"<<vint.size()<<endl;
	cout <<"StrBlobPtr deref:(0)"<<vint_ptr.deref()<<endl;
	return 0;

}
