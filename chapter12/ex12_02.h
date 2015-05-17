/*
ex12_02.cpp
Exercise 12.2
create by zhoudaxia
Copyright (c) 2015 zhoudaxia.All rights reserved.
*/
#ifndef _STRBLOB_H_
#define _STRBLOB_H_
#include<string>
#include<vector>
#include<memory>
#include<iostream>

using namespace std;

class StrBlob;
class StrBlob{
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
		//const type
		const string& front() const;
		const string& back() const;
		int use_count();
	private:
		shared_ptr<vector<string>> data;
		//if data[i] is illegal, throw a exception
		void check(size_type, const string&) const;

};
//default constructor
//	StrBlob():data(make_shared<vector<string>>()){}
//	StrBlob(initializer_list<string> il):data(il){}
	
#endif
