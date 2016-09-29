#include<iostream> 
using namespace std;

//example of a function template
//works for multiple data types

template <class T>
// or can do: template <typename T>

T max(T one, T two, T three) // usually called uppercase T. does not work for strings 
{
	//what happens when you have more than one data type in the template ? template<class S,T> T calc (S a, S b, T c).  just make sure you call in order. typically wont use more than two cause we usually use templates for arrays
	T big = one;
	if (two > big)
		big = two;
	if (three > big)
		big = three;
	return big;
}

int main()
{
	int a,b,c; //binding....determining datatype.
	cout << "enter three integers ";
	cin >> a >>b >>c; 
	cout << "the biggest integer is " << max(a,b,c) << endl << endl;

	char c1,c2,c3; //whatever data type is in the call gets put into the template
	cout << "enter three characters ";
	cin >> c1 >> c2 >> c3; //may need ignore()
	cout << "the biggest character is " << max(c1,c2,c3) << endl << endl;


	double d1,d2,d3; //data type for parameters passed are determind during run time.
	cout << "enter three doubles ";
	cin >> d1 >> d2 >> d3;
	cout << "the biggest double is " << max(d1,d2,d3) << endl << endl;
	
	return 0;
}//we gonna make templates to help out arrays, and will be compatble with many data types. SKL, standard library?

/*
enter three integers 2 6 4
the biggest integer is 6

enter three characters f h U
the biggest character is h

enter three doubles 2.3456 1.23435 7.6543
the biggest double is 7.6543
*/
