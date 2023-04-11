#include <iostream> 
#include <string>

using namespace std;



class MyName
{ public:
	MyName(string,string)=delete;
	MyName();
	MyName(string, string, string)=delete;
	void show(ostream&);
	MyName& readFrom(istream&);
  private:
	  string firstName, lastName,middleName; 
};
MyName::MyName() {
	firstName = "";
	lastName = "";
	middleName = "";
}
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
MyName& MyName::readFrom(istream& cin) {
	cout << "Please enter the first name:";
	cin >> firstName;
	cout << "Please enter the middle name:";
	cin >> middleName;
	cout << "Please enter the last name:";
	cin >> lastName;
	MyName a{ firstName,lastName,middleName };
	return a;
}
int main()
{

	MyName name{};
	name.readFrom(cin).show(cout);
	return 0;
}



