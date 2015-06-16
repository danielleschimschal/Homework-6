
#include "Header.h"


Complex::Complex()
{
	a = 0;
	b = 0;
}
Complex::Complex(double A)
{
	a = A;
	b = 0;
}
Complex::Complex(double A, double B)
{
	a = A;
	b = B;
}

double Complex::getRealPart(){
	return a;
}

double Complex::getImaginaryPart(){
	return b;
}

Complex Complex::add(const Complex &C)const
{
	double newa = a + C.a;
	double newb = b + C.b;
	Complex newc(newa, newb);
	return newc;
}

Complex Complex::subtract(const Complex C)const
{
	double newa = a - C.a;
	double newb = b - C.b;
	Complex newc(newa, newb);
	return newc;
}

Complex Complex::multiply(const Complex C)const
{
	double newa = a*C.a - b*C.b;
	double newb = b*C.a + a*C.b; 
	
	Complex newc(newa,newb);

	return newc;
}

Complex Complex::divide(const Complex C)const
{
	double newa = ((a*C.a) + (b*C.b)) / ((C.a)*(C.a) + (C.b)*(C.b));
	double newb = ((b*C.a) - (a*C.b)) / ((C.a)*(C.a) + (C.b)*(C.b));
	Complex newc(newa, newb);

	return newc;
}

Complex Complex::absoluteValue(const Complex C)const
{
	double newa; 
	double newb;
	double newc = sqrt(a*a + b*b);
	return newc; 

}

string Complex::toString()
{
	std::ostringstream s;
	if (b == 0){
		s << a;
		return s.str(); 
	}
	s << "(" << a << " + " << b << "i)";

	return s.str();


}

Complex Complex::operator+(const Complex &myCNum)
{
	return add(myCNum);
}

Complex Complex::operator-(const Complex &myCNum)
{
	return subtract(myCNum);
}

Complex Complex::operator*(const Complex &myCNum)
{
	return multiply(myCNum);
}

Complex Complex::operator/(const Complex &myCNum)
{
	return divide(myCNum);
}

Complex Complex::operator+=(const Complex &myCNum)
{
	a = a + myCNum.a;
	b = b + myCNum.b;

	return *this;
}

Complex Complex::operator-=(const Complex &myCNum)
{
	a = a - myCNum.a;
	b = b - myCNum.b;

	return *this;
}

Complex Complex::operator*=(const Complex &myCNum)
{
	a = a *myCNum.a - b* myCNum.b;
	b = a *myCNum.b + b*myCNum.a;

	return *this;
}

Complex Complex::operator/=(const Complex &myCNum)
{
	a = (a*myCNum.a + b*myCNum.b) / (myCNum.a * myCNum.a + myCNum.b *myCNum.b);
	b = (b*myCNum.a - a*myCNum.b) / (myCNum.a*myCNum.a + myCNum.b*myCNum.b);

	return *this;
}

