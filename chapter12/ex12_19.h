/*=============================================================================
#       COPYRIGHT NOTICE
#       Copyright (c) 2015
#
#       @Author       :TonyChou
#       @Email         :whzyb1991@163.com
#       @Filename         :/home/zhoudaxia/program/c++_primer/chapter12\ex12_19.h
#       @Last modified         :2015-05-31 11:04
#       @Description    :
=============================================================================*/

#ifndef _STRBLOB_H_
#define _STRBLOB_H_
#include<string>
#include<vector>
#include<memory>
#include<iostream>

using namespace std;

class StrBlobPtr;
class StrBlob{
	friend class StrBlobPtr;
	public:
		typedef vector<string>::size_type size_type;
		//constructor
		StrBlob():data(make_shared<vector<string>>()){};
		StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){};
		size_type size() const {return data->size();}
		bool empty() {return data->empty();}
		//add and delete element
		void push_back(const string &t) {data->push_back(t);}
		void pop_back();
		//visit element
		string& front();
		string& back();
		int use_count();
		//返回指向首元素和尾后元素的StrBlobPtr
		StrBlobPtr begin();//	{return StrBlobPtr(*this);}
		StrBlobPtr end();//	{auto ret = StrBlobPtr(*this, data->size());return ret;}
	private:
		shared_ptr<vector<string>> data;
		//if data[i] is illegal, throw a exception
		void check(size_type, const string&) const;

};
//default constructor
//	StrBlob():data(make_shared<vector<string>>()){}
//	StrBlob(initializer_list<string> il):data(il){}
	
class StrBlobPtr{
	public:
		StrBlobPtr():	curr(0)	{ }
		StrBlobPtr(StrBlob &a, size_t sz = 0):
				wptr(a.data),	curr(sz) { }
		std::string& deref() const;
		StrBlobPtr& incr();	//前缀递增

	private:
		std::shared_ptr<std::vector<std::string>>
			check(std::size_t, const std::string&) const;
		//保存一个weak_ptr，意味着底层vector可能会被销毁
		std::weak_ptr<std::vector<std::string>>	wptr;
		std::size_t curr;	//在数组中的位置
};
#endif
