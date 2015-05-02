/*
测试类的构造函数
*/

#include<iostream>
#include<string>
#include"complex.h"
using namespace std;


int main(){
	Complex c1;
//	Complex c2=Complex();
	Complex c3(1,2);
	Complex c4(4);
	Complex c5(c3);
	cout << "c1:";c1.print(); cout<<endl;
//	cout << "c2:";c2.print(); cout<<endl;
	cout << "c3:";c3.print(); cout<<endl;
	cout << "c4:";c4.print(); cout<<endl;
	cout << "c5:";c5.print(); cout<<endl;
	return 0;
}
