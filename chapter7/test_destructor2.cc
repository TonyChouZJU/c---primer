#include<iostream>

using namespace std;

class demo;

class demo{
	private:
		int id;
	public:
		demo(int i){
			id = i;
			cout <<"id="<<i<<",Construct"<<endl;
		}
		~demo(){
			cout <<"id ="<<id<<",Destructor"<<endl;
		}

};

demo d1(1);
void fun(){
	static demo d2(2);
	demo d3(3);
	cout<<"fun"<<endl;

}
int main(){
	demo d4(4);
	cout<<"main:"<<endl;
	{demo d5(5);}
	fun();
	cout<<"end main"<<endl;
	return 0;
}
