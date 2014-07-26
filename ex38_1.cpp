#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line = "hello world";
	for(decltype(line.size()) l_index = 0; 
           l_index != line.size(); ++l_index)
		line[l_index] = 'X';
	cout << line <<endl;
}
		
