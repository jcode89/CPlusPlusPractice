// Hungarian notation is being used.
#include <iostream>
#include <string>
using namespace std;
int main(){

	//declares that this is always a newline character.
	const char kcN = '\n';
        // declares that the variable is a string.
      	string cA;
	string cB;
	cA = "Hello Mister String!";
	cB = "Oops, there is my friend Snr. String.";
	cout << cA << "\n" << cB << kcN;
}
