#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line="Hello world";
	for(char &c : line)
		c = 'X';
	cout << line <<endl;
}	
