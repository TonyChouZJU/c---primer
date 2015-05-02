#ifndef _COMPLEX_H
#define _COMPLEX_H
#include<iostream>
using namespace std;
class Complex;

class Complex{
	private:
		double real,img;
	public:
		Complex():real(0.0),img(0.0){}
		Complex(double r ,double i):real(r),img(i)
				{}
		Complex(double r):real(r){}
		Complex(const Complex&);
	//member function
	void print(){cout << real <<" " <<img;}
};

Complex::Complex(const Complex &C){
	real = C.real;
	img = C.img;
}
#endif
