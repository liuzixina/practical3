#include<iostream>
#include<string>
#include<stdio.h>
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
class ApricotPie :public Pie
{
public:
	std::string description()
	{
		return (std::string)"ApricotPie";
	}
	void tastiness() {};
};
int main(){
	Pie* piePtr = NULL;
	printf("Please choose a kind of pie,1 is applepie.2 is raspberryPie.3 is ApricotPie.");
	int choose = 0;
	scanf("%d", &choose);
	if (choose == 1) {
		piePtr = new ApplePie;
	}
	if (choose == 2) {
		piePtr = new RaspberryPie;
	}
	else piePtr = new ApricotPie;
	printf("%s\n", piePtr->description().c_str());
}
	