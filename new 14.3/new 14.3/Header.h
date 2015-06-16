#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double newradius);
	double getArea() const;
	double getRadius() const;
	void setRadius(double);
	int getNumberOfObjects();

private:
	double radius;
	int numberOfObjects;
};

#endif
