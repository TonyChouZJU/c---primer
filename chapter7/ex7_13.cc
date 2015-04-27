/*
ex7_13.cc
Exercise 7.13

created by zhoudaxia on 27/4/15
CopyRight (c) 2015 zhoudaxia. All rights reserved.

*/
#include "ex7_12.h"
#include<string>
#include<iostream>

using namespace std;

int main(){
	Sales_data total(cin);
	if(!total.isbn().empty()){
		istream &is = cin;
		while(is){
			Sales_data trans(is);
			if(total.isbn()==trans.isbn())
				total.combine(trans);
			else{
				print(cout,total)<<endl;
				total = trans;
			}
		}
		print(cout,total);			///print the last
	}
	else
		cerr << "No data?!"<<endl;
	return 0;
}
