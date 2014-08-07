/*
*list forward_list链表，只支持双向（单向）顺序访问
*by zhoudaxia
*see c++ primer(5th) p317
*/

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi{0,1,2,3,4,5,6,7,8,9};
	list<int> li(vi.begin(),vi.end());
	for_each(vi.begin(),vi.end(),[](const int &s){cout << s << " ";});
	cout<<"vector above" <<endl;
	for_each(li.begin(),li.end(),[](const int &s){cout << s << " ";});
	cout<<"list above" <<endl;
	auto vii = vi.begin();
	while(vii != vi.end())
		if(*vii % 2){
			vii = vi.insert(vii, *vii);
			vii+=2;
		}else
			vii = vi.erase(vii);
			
	for_each(vi.begin(),vi.end(),[](const int &s){cout << s << " ";});

	cout <<endl;
	auto lii = li.begin();
	while(lii != li.end())
		if(*lii % 2){
			lii = li.insert(lii, *lii);
			++lii;
			++lii;
		}else
			lii = li.erase(lii);
			
	for_each(li.begin(),li.end(),[](const int &s){cout << s << " ";});

}
