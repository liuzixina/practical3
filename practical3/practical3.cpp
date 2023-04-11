#include <iostream> 
#include <string>

using namespace std;



class MyName
{ public:
	MyName(string,string);
	void show(ostream&);
  private:
	  string firstName, lastName; 
};
MyName::MyName(std::string s1, std::string s2)
{
	firstName = s1;
	lastName = s2;
}
void MyName::show(ostream&  cout) {
}
int main()
{
	string s1;

	MyName name{ "Zixin", "Liu" }; 
	name.show(std::cout);
	return 0;
}



