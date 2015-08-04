// This is an example using sstream to grab an int from a string.
// To compare it to Python, you would do int(input()) << and that would convert string to a number.
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string sMystr;
    float fPrice = 0;
    int iQuantity = 0;
    
    cout << "Enter price: ";
    // grabs the input and puts it in the string smystr.
    getline(cin,sMystr);
    // takes the string in smystr and changes it to an float by putting it in the variable declared as such.
    stringstream(sMystr) >> fPrice;
    cout << "Enter quantity: ";
    getline(cin,sMystr);
    stringstream(sMystr) >> iQuantity;
    cout << "Total price: " << fPrice*iQuantity << endl;
    return 0;
}