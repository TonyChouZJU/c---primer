#include <iostream>
#include <iterator>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> vi{1,2,3,4,5,6,7,8,9,10};
	list<int> li;
	copy(vi.begin()+3,vi.end()-3,back_inserter(li));
	for_each(li.cbegin(),li.cend(),[](const int &s){cout << s << ' ';});
	cout << endl;
}
