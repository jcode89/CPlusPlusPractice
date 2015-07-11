#include <iostream>
using namespace std;
/* Check ex3.py in PyPractice. 
Things that you can do so easily, and in such few lines,
clearly take more here.
For example, every variable had to be declared as either an int or float.
Also you need to include iostream in order to print something out.
*/
int main()
{
	// Declares the variables.
	int a, b, c, d;
	int e, f, g;
	int result_one;
	int result_two;
	int result_three;
	float h, i, j, result_four;
	// The actual mathematical process.
	a = 5;
	b = 2;
	c = 30;
	d = 3;
	f = 25;
	g = 3;
	h = 8;
	i = 5;
	a = a - b;
	j = h/i;
	// % does the same thing here that it does in python!
	e = f % g;
	result_one = a - 1;
	result_two = d*c;
	result_three = e;
	result_four = j;
	//prints the results.
	// Using more << allows you to print out multiple items in one line.
	// endl; and "\n" Act like line breaks.
	cout << "The result of 5 - 2 - 1: " << result_one << "\n";
	cout << "The result of 30 * 3: "<< result_two << endl;
	cout << "The remainder of 25 divided by 3: "<< result_three << endl;
	cout << "The result of 8 divided by 5: " << result_four << endl;
	// We can do math in the print statement like Python.
	cout << "This was the subtraction of result two and three: " << result_two - result_three << endl;
	// Terminates the program.
	return 0;
}

