#include <iostream>
using namespace std;
// A function  containing the code that converts Fahrenheit to Celsius.
// placing double in front of the function name, lets the compiler know that a double is being returned.
// double dC << This is Hungarian notation. d == double.
double converter(double dF)
{
    double dC;
	dC = (dF-32)* 5/9;
	return dC;
}
int main()
{
	// Variable declared so that we can enter a value
	// save the value
	// then place it within our function and return the answer.
	double dA;
	cout << "Enter degrees in Fahrenheit: ";
	cin >> dA;
	// The function can easily be called and executed in the print statement.
	// And remember everything runs through main.
	cout << "The degrees in Celsius are: " << converter(dA) << endl;
}