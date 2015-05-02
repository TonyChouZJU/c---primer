/*
测试c++11新标准中的类内初始值
*/

#include<iostream>

using namespace std;

class inclass;

class inclass{
	private:
		double  height = 0.0;
		int num =0;
		char c =' ';
	/*	double  height ;
		int num ;
		char c;*/
	public:
		inclass(){};
		inclass(double heig,int n):height(heig),num(n){}
		void show(){cout << "height:"<<height<<",num:"<<num<<",c:"<<c<<endl;}
};

int main(){
	inclass c1;
	inclass c2(1.1,5);
	c1.show();
	c2.show();
	return 0;
}
