#ifndef COMPLEX_NUM
#define COMPLEX_NUM 

#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

class Complex
{
public:
	Complex();
	Complex(double a);
	Complex(double a, double b);

	double getRealPart();
	double getImaginaryPart();

	Complex add(const Complex &C) const;
	Complex subtract(const Complex C)const;
	Complex multiply(const Complex C)const;
	Complex divide(const Complex C)const;
	Complex absoluteValue(const Complex C)const; 

	Complex operator+(const Complex &myCNum);
	Complex operator-(const Complex &myCNum);
	Complex operator*(const Complex &myCNum);
	Complex operator/(const Complex &myCNum);
	Complex operator+=(const Complex &myCNum);
	Complex operator-=(const Complex &myCNum);
	Complex operator*=(const Complex &myCNum);
	Complex operator/=(const Complex &myCNum);

	Complex operator ++();
	Complex operator --();
	
		
	string toString();

private:
	double a;
	double b;

};


#endif