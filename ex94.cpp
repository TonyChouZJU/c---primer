#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> a;
	int b;
	int finder_c;
	while(cin >> b)
		a.push_back(b);
	cout << "Please enter the number to find" << endl;
	cin >> finder_c;
	for (vector<int>::iterator i = a.begin(); i != a.end; ++ i)
		if (*i) == b
			cout >> "0" >>endl;
}
