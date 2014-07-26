#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	auto f = [] (const int &a,const int &b) {return a+b;};
	cout << f(a,b) <<endl;
}
