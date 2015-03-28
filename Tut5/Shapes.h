#ifndef SHAPES_H
#define SHAPES_H

class Shape {
	virtual void name() = 0;
	virtual double perimeter() = 0;
	virtual double area() = 0;
	virtual void draw() = 0;
};

class Circle: public Shape {
private:
	double radius;
public:
	Circle(double radius);
	void name();
	double perimeter();
	double area();
	void draw();
};

class Triangle : public Shape {
private:
	double s1, s2, s3;		// The sides of the triangle
public:
	Triangle(double side1, double side2, double side3);
	void name();
	double perimeter();
	double area();
	void draw();
};

class Rectangle : public Shape {
private:
	double length, breadth;
public:
	Rectangle(double length, double breadth);
	void name();
	double perimeter();
	double area();
	void draw();
};

#endif