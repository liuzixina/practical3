#include<iostream>
#include<string>
using namespace std;
class Pie
{
public:
	virtual std::string description()
	{
		return (std::string)"this is Pie";
	}
	virtual void tastiness() {};
};
class ApplePie :public Pie
{
public:
	std::string description()
	{
		return (std::string)"ApplePie";
	}
	void tastiness() {};
};
class RaspberryPie :public Pie
{
public:
	std::string description()
	{
		return (std::string)"RasberryPie";
	}
	void tastiness() {};
};
int main(){
	Pie* p = NULL;
	p = new ApplePie;
	cout << p->description();
	Pie* a = NULL;
	a = new RaspberryPie;
	cout << a->description();
}