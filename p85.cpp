#include <iostream>
#include <string>
using namespace std;
int main()
{
	const string hexdigits = "0123456789ABCDEF";	//可能的十六进制数字
	cout << "Enter a series of numbers between 0 and 15"
	     << "seprated by spaces. Hit ENTER when finished: "
	     << endl;
      	
	string result;
	string::size_type n;		//用于保存从输入流读取的数
	while(cin >> n)
		if(n < hexdigits.size())
			result += hexdigits[n];		//得到对应的十六进制数字
	cout << "Your hex number is :" << result << endl;
}
