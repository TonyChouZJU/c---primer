/*
*push_back,push_front,insert
*by zhoudaxia
*see c++ primer(5th) p309
*从标准输入读取string序列，存入一个deque中。
*编写一个循环，用迭代器打印deque中的元素
*/

#include<deque>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	deque<string> ds1;
	string s1;
	cout <<"1:使用push_back对双端队列操作"<<endl;
	while(cin >> s1)
		ds1.push_back(s1);
	for(deque<string>::iterator i = ds1.begin(); i != ds1.end(); ++i)
		cout << *i <<endl;
	cin.clear();
	cin.sync();
		
	deque<string> ds2;
	string s2;
	cout <<"2:使用push_font对双端队列操作"<<endl;
	while(cin >> s2)
		ds2.push_front(s2);
	for(deque<string>::iterator i = ds2.begin(); i != ds2.end(); ++i)
		cout << *i <<endl;
	cin.clear();
	cin.sync();
	
	deque<string> ds3;
	string s3;
	cout <<"3:使用insert对双端队列操作"<<endl;
	deque<string>::iterator ii = ds3.begin();
	while(cin >> s3)
		ii = ds3.insert(ii,s3);
	for(deque<string>::iterator i = ds3.begin(); i != ds3.end(); ++i)
		cout << *i <<endl;

}

