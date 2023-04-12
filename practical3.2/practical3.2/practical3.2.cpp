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
	const Point &a= point1;
	cout << "it is error because const reference is not allow to modify the value.";
}



