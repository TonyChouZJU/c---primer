/* 
*copy dynamic array to vector and list
*erase odd elements in the list and 
*erase even elements in the vector
*by zhoudaxia
*see c++ primer(5th)
*/

#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	int ia[]={0,1,2,3,4,5,6,7,8,13,21,55,89};
	vector<int> vi(begin(ia),end(ia));
	list<int> li(begin(ia),end(ia));
	for_each(vi.begin(),vi.end(),[](const int &s){cout << s << " ";});
	cout << endl;
	vector<int>::iterator vii=vi.begin();
	list<int>::iterator lii=li.begin();
	while(vii != vi.end())
		if(*vii%2==0)
		vii = vi.erase(vii);
		else
		++vii;
	for_each(vi.begin(),vi.end(),[](const int &s){cout << s << " ";});
	cout <<endl;
	while(lii != li.end())
		if(*lii%2==0)
		++lii;
		else
		lii = li.erase(lii);
	for_each(li.begin(),li.end(),[](const int &s){cout << s << " ";});
	
}	
