#include "Sales_data.h"
#include<string>
#include<iostream>

using namespace std;

int main(){
	Sales_data total;
	if(read(cin,total)){
		Sales_data trans;
		while(read(cin,trans)){
			if(total.isbn()==trans.isbn())
				total.combine(trans);
			else{
				print(cout,total)<<endl;
				total = trans;
			}
		}
		print(cout,trans);			///print the last
	}
	else
		cerr << "No data?!"<<endl;
	return 0;
}
