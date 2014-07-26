#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void my_lambda(int &b)
{
	int a= b+1;
	auto f = [a]() -> int {for(;a != 0; --a) cout << a <<endl; return -1;};
	cout <<f() << endl;
	cout <<f() << endl;
	
}

int main()
{
	int b = 10;
	my_lambda(b);
}
