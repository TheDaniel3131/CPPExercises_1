//preprocessor directive part

#include <iostream>
#include <string> //a build-in function.
#include <limits>
#include <iomanip> //input output manipulation.

using namespace std;

//statements


int main(){
    cout << "Hello World\n";
    cout << "Bye Bye!" << endl;

    string name = "";
    cout << endl << "Enter Your Full Name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << endl << "Enter Your Full Name: ";
    getline(cin, name);
    cout << "Your name is: " << name << endl;
    
    double age; 
    cout << endl << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age << endl;

    double money;
    cout << endl << "Enter your current money amount: ";
    cin >> money;
    cout << fixed << setprecision(2); //control my display to 2 decimal points
    cout << "Your current amount is RM " << money << endl;
    cout << fixed << setprecision(3); // control my display to 2 decimal points
    cout << "Your current amount is RM " << money << endl;

    return 0;
}

// always build solution before start debugging.