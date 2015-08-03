// Hungarian notation is being used.
#include <iostream>
#include <string>
using namespace std;
int main(){

	//declares that this is always a newline character.
	const char kcN = '\n';
        // declares that the variable is a string.
      	string sA;
	string sB;
	sA = "Hello Mister String!";
	sB = "Oops, there is my friend Snr. String.";
	cout << sA << "\n" << sB << kcN;
}
