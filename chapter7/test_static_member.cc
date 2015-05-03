/*
静态成员变量属于全局变量，静态成员函数属于全局函数
静态成员函数只能访问静态成员变量
static关键字限定了存储方式为静态存储，作用域为类内
*/

#include<iostream>

using namespace std;

class CRect;
class CRect{
	private:
		int id;
		static int totalId;
	public:
		CRect(){id = 0;totalId+=id;cout << "Consturct"<<endl;}
		CRect(int i){id = i;totalId+=i;cout<<"Construct"<<totalId<<endl;}
		CRect(const CRect&){totalId+=id;cout <<"Copy Construct"<<endl;}
		~CRect(){totalId-=id;cout <<"Destuctor"<<totalId<<endl;}
		void PrintTotal(){cout<<totalId<<endl;}

};

int CRect::totalId =0;

int main(){
	CRect c1;
	CRect c2(2);
	{CRect c3(3);}
	CRect c4(4);
	c4.PrintTotal();
	return 0;
}

