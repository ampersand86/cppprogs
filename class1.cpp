#include<iostream>
using namespace std;

// a class is the programming code for an object
// this class only contains data members
// data member access specifiers include:
// public: the data member can be accessed anywhere
// private: the data member can only be accessed in the class code
// protected: will do later for inheritance of objects
//the whole point of oop is resuable code.
//RAD - rapid application development.

//class - program code for an object.
//its common to put the class into a header file.
//why object are so "booling?"
//if you remember in C, we did structs. a structure is a collection of data types. example: 5 data members. name, a1, a2, a3, avg.
//this time, in an object, we still have the data members. still 5 data members.  but....we also put some functionality in there
//we put some methods in  there. load(), calc(), print(). All a method is is a fucntion within an object.
//Encapsulation. 
//we are going to encapsulate the data members and the methods into the object. what encapsulate means:: put within. 

//access specifier
//public: can be accessed anywhere.
//private: can only be accessed in the methods. 
//protected: for inheritance. when one class inherits from another. 

class Student
{ //data members only atm. 
	public:
		char name[20];
		int test1, test2, test3;
		float avg;
};

int main()
{
	Student s;  //instantiates an object
	// if the data members were private, they could not be
	// accessed in the main
	cout << "enter the name ";
	cin.getline(s.name, 20);
	cout << "enter the three test scores ";
	cin >> s.test1 >> s.test2 >> s.test3;
	s.avg = (s.test1 + s.test2 + s.test3) / (float) 3;
	cout << endl << s.name << endl;
	cout << s.test1 << '\t' << s.test2 << '\t' << s.test3 << '\t' 
		 << s.avg << endl;
   return 0;
}
 
/*
enter the name Joe Brown
enter the three test scores 23 35 25

Joe Brown
23      35      25      27.6667
Press any key to continue . . .

*/

