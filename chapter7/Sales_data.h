/*Sales_data
*/
#ifndef _Sales_data
#define _Sales_data
#include <iostream>
#include <string>

using namespace std;

//class Sales_data;
//istream &read(istream&, Sales_data&);
class Sales_data {
public:
	//constructor
	Sales_data() = default;
	Sales_data(const string &s):bookNo(s) { }
	Sales_data(const string &s, unsigned n, double p):
			bookNo(s), units_sold(n), revenue(p) { }
	Sales_data(istream &is) {read(is, *this);};
	string isbn() const {return bookNo;}

	Sales_data& combine(const Sales_data&);

	double avg_price() const;	
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;


};

//implement
Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);

#endif
