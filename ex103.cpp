#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int a;
	long sum;
	vector<int> b;
	while(cin >> a)
		b.push_back(a);
	sum = accumulate(b.cbegin(), b.cend(), 0);
	cout << "The sum of b is " << sum <<endl;

}
