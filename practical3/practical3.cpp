#include <iostream> 
#include <string>
#include "myname.h"
using namespace std;



class MyName
{ public:
	MyName(string,string);
  private:
	  string firstName, lastName; 
};
int main()
{
	string s1;

	MyName name{ "Zixin", "Liu" }; 
	name.show(std::cout);
	4
	return 0;
}

MyName::MyName(string, string)
{
}
