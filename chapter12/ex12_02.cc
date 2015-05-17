#include "ex12_02.h"

using namespace std;

void StrBlob::check(size_type i,const string &msg) const{
	if( i >= data->size())
		throw out_of_range(msg);

}
int StrBlob::use_count(){
	return data.use_count();
}
//const override
const string& StrBlob::front() const{
	check(0,"const:front on empty StrBlob");
	return data->front();
}

const string& StrBlob::back() const{
	check(0,"const:back on empty StrBlob");
	return data->back();
}

string& StrBlob::front(){
	check(0,"front on empty StrBlob");
	return data->front();
}
string& StrBlob::back(){
	check(0,"back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back(){
	check(0,"pop_back on empty StrBlob");
	data->pop_back();
}

int main(){
	StrBlob b1;
	cout << b1.size() <<endl;
	cout <<"与b1共享智能指针数量"<<b1.use_count()<<endl;
	{
		StrBlob b2 = {"a","an","the"};
		cout <<"与b2共享智能指针数量"<<b2.use_count()<<endl;
		b1 = b2;
		cout <<"与b2共享智能指针数量"<<b2.use_count()<<endl;
		cout <<"与b1共享智能指针数量"<<b1.use_count()<<endl;
		b2.push_back("about");
	}
	cout<<"b1 front:"<<b1.front()<<endl;
	const StrBlob c={"const c","hello"};
	cout<<"const c front:"<<c.front()<<endl;	
	cout <<"与b1共享智能指针数量"<<b1.use_count()<<endl;
	cout <<"for test 引用计数"<<endl;
	auto p = make_shared<int>(10);
	cout <<"建立一个智能指针，其计数为"<<p.use_count()<<endl;
	auto q(p);
	cout <<"用之前的智能指针来值初始化q,p计数为"<<p.use_count()<<endl;
	cout <<"q计数为"<<q.use_count()<<endl;
	auto r = make_shared<int>(12);
	cout <<"new r计数"<<r.use_count()<<endl;
	r = q;
	cout <<"r被赋予了一个新指针，计数"<<r.use_count()<<endl;
	cout <<"q赋值给了r,计数"<<q.use_count()<<endl;
	
	return 0;


}
