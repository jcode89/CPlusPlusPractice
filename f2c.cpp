#include <iostream>
using namespace std;
// A function  containing the code that converts Fahrenheit to Celsius.
// placing double in front of the function name, lets the compiler know that a double is being returned.
double converter(double f)
{
	double c = (f-32)* 5/9;
	return c;
}
int main()
{
	// Variable declared so that we can enter a value
	// save the value
	// then place it within our function and return the answer.
	double a;
	cout << "Enter degrees in Fahrenheit: ";
	cin >> a;
	// The function can easily be called and executed in the print statement.
	// And remember everything runs through main.
	cout << "The degrees in Celsius are: " << converter(a) << endl;
}