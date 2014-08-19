#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
	string line;
	cin >> line;
	string::const_reverse_iterator rcomma = find(line.crbegin(),line.crend(),',');
	cout << string(rcomma.base(), line.cend()) << endl;	
}
