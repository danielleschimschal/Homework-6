#include "Header.h"

Circle::Circle(){
	radius = 1;
	numberOfObjects++;
}

Circle::Circle(double newradius){
	radius = newradius;
}

double Circle::getArea() const{
	return radius * radius * 3.14159;
}
double Circle::getRadius() const{
	return radius;
}

void Circle::setRadius(double newradius){
	radius = (newradius >= 0) ? newradius : 0;
}

int Circle::getNumberOfObjects(){
	return numberOfObjects;
}
