#include<iostream>
using namespace std;
class CString{
	private:
		char *p;
	public:
	CString(){
		p = new char[10];
	}
	~CString();

};

CString::~CString(){
	delete [] p;
	cout <<"Destructor called"<<endl;
}

int main(){
	CString cs[2];
	cout <<"end main"<<endl;
	return 0;
}
