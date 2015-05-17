/*
Exercise 12.06
ex12_06.cc
create by zhoudaxia. 17/05/15
Copyright (c) 2015 zhoudaxia. ALl rights reserverd.
*/

#include<iostream>
#include<vector>

using namespace std;

vector<int>* new_vint(){
	return new vector<int>;
}

vector<int>* cin_vint(istream &ci,vector<int> *pvi){
	int tmp;
	while(ci>>tmp)
		pvi->push_back(tmp);
	return pvi;
}

void cout_vint(vector<int> *pvi){
	for(vector<int>::iterator viter = pvi->begin(); viter != pvi->end(); ++viter)
	cout<< *viter<<endl;
	delete pvi;
}
int main(){
	vector<int> *pvint = new_vint();
	pvint = cin_vint(cin,pvint);
	cout_vint(pvint);
	return 0;

}
