#include <iostream> 
#include <string>
using namespace std;




class Point
{public:
	static Point origin;
	Point(float,float);
	float getX();
	float getY();
	void setX(float);
	void setY(float);
	string toString();
private:
	float x, y;

};
Point Point::origin = Point{0,0};
Point::Point(float x1,float y1)
{
	x = x1;
	y = y1;
}
float Point::getX() {
	return x;
}
float Point::getY() {
	return y;
}
void Point::setX(float x1){
	x = x1;
}
void Point::setY(float y1) {
	y = y1;
}
string Point::toString() {
	string Counter;
	string(x);
	string(y);
	string str = "the x is:" + x + "the y is:" + y;
	return str;
}
int main()
{

	
	
}



