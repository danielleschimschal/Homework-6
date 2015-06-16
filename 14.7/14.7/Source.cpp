#include <iostream>
#include "Header.h"
using namespace std; 

int main()
{
	double r1, r2, i1, i2;
	cout << "Enter the first complex number: " << endl;
	cin >> r1 >> i1;
	cout << "Enter the second complex number: " << endl;
	cin >> r2 >> i2;

	Complex first(r1, i1);
	Complex second(r2, i2);

	Complex ans = first.add(second);

	cout << first.toString() << " + " << second.toString() << " = " << ans.toString() << endl;

	ans = first.subtract(second);

	cout << first.toString() << " - " << second.toString() << " = " << ans.toString() << endl;

	ans = first.multiply(second);

	cout << first.toString() << " * " << second.toString() << " = " << ans.toString() << endl;

	ans = first.divide(second);

	cout << first.toString() << " / " << second.toString() << " = " << ans.toString() << endl;

	ans = first.absoluteValue(second);

	cout << " | " << first.toString() << " + " << second.toString() << " | = " << ans.toString() << endl; 

}
