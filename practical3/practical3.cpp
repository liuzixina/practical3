#include <iostream> 
#include <string>

using namespace std;



class MyName
{ public:
	MyName(string,string);
	MyName(string, string, string);
	void show(ostream&);
  private:
	  string firstName, lastName,middleName; 
};
MyName::MyName(std::string s1, std::string s2)
{
	firstName = s1;
	lastName = s2;
}
MyName::MyName(std::string s1, std::string s2, std::string s3)
{
	firstName = s1;
	lastName = s2;
	middleName = s3;
}
void MyName::show(ostream&  cout) {
	cout << firstName <<middleName<< lastName << endl;
}
int main()
{

	MyName name{ "Zi", "Liu" ,"Xin"}; 
	name.show(std::cout);
	return 0;
}



