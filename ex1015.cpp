#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int b;
	cin >> b;
	int a = 2;
	auto f = [&a](const int &b){return a+b;};
	cout << f(b) << endl;
}
