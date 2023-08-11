#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(){

    srand(time(NULL));
    int randomNum = (rand() % 100) + 1;
    int number = -1;
    int startvalue = 1;
    int endvalue = 100;

    while (number != randomNum)
    {
        system("cls"); // Clear the screen on Windows
        cout << "Guess Number Game Started!" << endl;
        cout << string(50, '-') << endl;

        cout << "Guess Number between " << startvalue << " to " << endvalue << endl;
        cout << "Your Answer: ";
        cin >> number;

        if (number < randomNum)
        {
            startvalue = number;
        }
        else
        {
            endvalue = number;
        }
    }

    cout << endl << "Congratulations! You won!" << endl;
    
    return 0;
}