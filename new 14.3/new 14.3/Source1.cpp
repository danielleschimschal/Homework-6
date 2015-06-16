#include <iostream>
#include "Header.h"
using namespace std;

int main(){
	const int size = 3;
	Circle temp;
	Circle arrays[] = { Circle(14.5), Circle(5.3), Circle(10.7) };

	for (int i = 0; i < size; i++)
	{
		if (arrays[i].getRadius() < arrays[i - 1].getRadius())
		{
			temp = arrays[i];
			arrays[i] = arrays[i - 1];
			arrays[i - 1] = temp;
		}
	}
	for (int i = 0; i < size; i++)
		cout << "Circle " << i << " with an area of " << arrays[i].getArea() << " with radius of " << arrays[i].getRadius() << endl;
}

