#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> vi{1,2,3,4,5,6,7,8,9,10};
	list<int> li(vi.rbegin()+3,vi.rend()-2);
	for_each(li.cbegin(),li.cend(),[](const int &s){cout << s <<' ';});
	cout <<endl;

}
