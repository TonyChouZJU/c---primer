#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vi;
	vi.push_back(11);
	cout << vi[0] <<endl;
	cout << vi.at(0) <<endl;
	cout << vi.front() <<endl;
	cout << *vi.begin() <<endl;
}
