#include<string>
#include<iostream>

using namespace std;

//声明函数
bool lengthCompare(const string &, const string &);

//typedef bool lengthCompare(const string &, const string &);
typedef decltype(lengthCompare) *FuncP2;

//声明一个用函数指针作为行参的函数
void useBigger(const string&, const string&, bool (*pf)(const string &, const string &));


//声明一个用函数指针作为行参的函数
void useBigger2(const string&, const string&, FuncP2);

int main(){
	bool (*pf)(const string&, const string&);	//声明未初始化的函数指针
	//将函数名赋给函数指针
	pf = lengthCompare;
	pf = &lengthCompare;
	bool b1 = pf("hello", "goodbye");
	bool b2 = (*pf)("hello", "goodbye");
	useBigger("hello","goodbye",pf);
	cout <<endl;	
	useBigger2("hello","Goodbye",pf);

}

bool lengthCompare(const string &s1, const string &s2){
	return s1.size()>s2.size();
}

void useBigger(const string &s1, const string &s2, bool (*pf)(const string &s1, const string &s2)){
	if(pf(s1,s2))
		cout << s1;
	else
		cout <<s2;

}


void useBigger2(const string &s1, const string &s2, bool (*lengthCompare)(const string &s1, const string &s2)){
	if(lengthCompare(s1,s2))
		cout << s1;
	else
		cout <<s2;

}
