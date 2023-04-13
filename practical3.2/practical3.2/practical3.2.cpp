#include <iostream> 
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
		x1 = midpoint.getX() + dimension / 2;
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
	Point a = {2,2};
	Square b = { a,2 };
	b.topLeft().show(cout);
}



