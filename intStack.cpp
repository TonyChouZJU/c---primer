/*
*stack adaptor 
*by zhoudaxia
*see c++ primer(5th) p330
*/
#include <stack>
#include <vector>
#include <iostream>

using namespace std;

int main(){
	stack<int> intStack;
	for(size_t ix = 0; ix != 10 ; ++ix)
		intStack.push(ix);
	while(!intStack.empty()){
		int value = intStack.top();
		cout << value <<" " ;
		intStack.pop();
	}
	cout << endl;
}
