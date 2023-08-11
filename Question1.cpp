#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int main(){
    string name, address;
    int age;
    double amount;
    char gender;

    cout << "Student Name               : ";
    cin >> name;
    cout << "Student Gender             : ";
    cin >> gender;
    cout << "Student Age                : "; 
    cin >> age;
    cout << "Student Home Address       : ";
    cin >> address;
    cout << "E-wallet Amount            : ";
    cin >> amount;

    system("pause");
    system("clear");

    cout << fixed << setprecision(2);
    cout << string(60, '=') << endl;
    cout << "| Student Details as below:" << setw(34) << "|\n";
    cout << string(60, '=') << endl;
    cout << "| Name     :" << setw(47) << name << "|" << endl;
    cout << "| Age      :" << setw(47) << age << "|" << endl;
    cout << "| Gender   :" << setw(47) << gender << "|" << endl;
    cout << "| Address  :" << setw(47) << address << "|" << endl;
    cout << "| E-Wallet : RM" << setw(44) << amount << "|" << endl;
    cout << string(60, '=') << endl;

    return 0;
}