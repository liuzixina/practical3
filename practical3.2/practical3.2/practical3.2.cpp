﻿#include <iostream> 
#include <string>
using namespace std;





class Point
{
private:
	float x, y;

public:
	static Point origin;
	void setX(float x) {
		this->x = x;
		return;
	}
	void setY(float y) {
		this->y = y;
		return;
	}
	float& getX() {
		return x;
	}
	float getY() {
		return y;
	}
	Point(float,float);
	Point();
	void show(ostream&);
};
Point Point::origin = Point{0,0};
Point::Point(float x1,float y1)
{
	x = x1;
	y = y1;
}
Point::Point()
{
}                                             

void Point::show(ostream& cout) {
	cout << "x is :"<<x<<"  y is :"<<y;
}

class Square
{
private:
	Point midpoint;
	int dimension;

public:
	
	Square(Point,int);
	Point topLeft(void) {
		float x1, y1;
		x1 = midpoint.getX() - dimension / 2;
		y1 = midpoint.getY() - dimension / 2;
		Point topleft = { x1,y1 };
		return topleft;
	}
	Point topRight(void) {
		float x1, y1;
		x1 = midpoint.getX() + dimension / 2;
		y1 = midpoint.getY() - dimension / 2;
		Point topright = { x1,y1 };
		return topright;
	}
	Point bottomRight(void) {
		float x1, y1;
		x1 = midpoint.getX() + dimension / 2;
		y1 = midpoint.getY() + dimension / 2;
		Point bottomright = { x1,y1 };
		return bottomright;
	}
	Point bottomLeft(void) {
		float x1, y1;
		x1 = midpoint.getX() - dimension / 2;
		y1 = midpoint.getY() + dimension / 2;
		Point bottomleft = { x1,y1 };
		return bottomleft;
	}
	void translate(Point point) {
		midpoint.setX(point.getX());
		midpoint.setY(point.getY());
	}
	void translate(float x1,float y1) {
		midpoint.setX(x1);
		midpoint.setY(y1);
	}
};
Square::Square(Point x, int y)
{
	midpoint = x;
	dimension = y;
}
int main()
{   
	Point point1 = {};
	point1 = point1.origin;
	point1.show(std::cout);
	cout << "\nmodify the point1\n";
	point1.setX(9);
	point1.origin.show(std::cout);
	cout << "the value of origin is not changed\n";
	point1.show(std::cout);
	cout << "Modify the variable from above to be a reference.";
	(&point1)->setX(6);
	cout << "\n";
	(&point1)->show(std::cout);
	cout << "\n";
	point1.origin.show(std::cout);
	cout << "\nthe value of origin is not changed\n";
	cout << "\nModify the variable from above to be a const reference\n";
	const Point &a = point1;
	cout << "it is error because const reference is not allow to modify the value.";
	std::cout << "enter the size:";
	int dimension;
	std::cin >> dimension;
	std::cout << "enter the midpoint x and y:";
	float x, y;
	std::cin >> x>>y;
	Point thepoint = {x,y};
	Square square = { thepoint,2 };
	std::cout << "\nthe square 's topleft is (" << square.topLeft().getX() << "," << square.topLeft().getY() << ")\n";
	std::cout << "\nthe square 's topright is (" << square.topRight().getX() << "," << square.topRight().getY() << ")\n";
	std::cout << "\nthe square 's bottomleft is (" << square.bottomLeft().getX() << "," << square.bottomLeft().getY() << ")\n";
	std::cout << "\nthe square 's bottomright is (" << square.bottomRight().getX() << "," << square.bottomRight().getY() << ")\n";
	float newx, newy;
	std::cout << "enter the new midpoint x and y:";
	std::cin >> newx>>newy;
	square.translate(newx, newy);
	std::cout << "\nthe square 's topleft is (" << square.topLeft().getX() << "," << square.topLeft().getY() << ")\n";
	std::cout << "\nthe square 's topright is (" << square.topRight().getX() << "," << square.topRight().getY() << ")\n";
	std::cout << "\nthe square 's bottomleft is (" << square.bottomLeft().getX() << "," << square.bottomLeft().getY() << ")\n";
	std::cout << "\nthe square 's bottomright is (" << square.bottomRight().getX() << "," << square.bottomRight().getY() << ")\n";
}



