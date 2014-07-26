#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> v_num;
	int t_num;
	while(cin >> t_num)
		v_num.push_back(t_num);
	for(auto i : v_num)
		cout << i <<" " << endl;
}
