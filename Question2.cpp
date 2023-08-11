#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int main(){
    int h, m, s, t, d = 0;
    char sep1, sep2;

    // // Input elapsed time
    // cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
    // cin >> h >> sep >> m >> sep >> s;

    // // Calculate Elapsed time
    // t = (h * 60 * 60) + (m * 60) + s;
    // cout << "Elapsed time is: " << t << " seconds." << endl;
    // cout << endl << "Do you want to reset the timer? 1: Yes, others: No " << endl;
do {
    system("cls");
    cout << "Please enter your elasped time (in HH:MM:SS format) = ";
    cin >> h >> sep1 >> m >> sep2 >> s;

        while (sep1 != ':' || sep2 != ':' || cin.fail() || (h < 0) || (h > 23) || (m < 0) || (m > 60) || (s < 0) || (s > 60))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Input." << endl;
            cout << "Please enter your elasped time (in HH:MM:SS format) =";
            cin >> h >> sep1 >> m >> sep2 >> s;
        }
        int ElaspedTime = (h * 60 * 60) + (m * 60) + s;
        cout << "Elasped time is: " << ElaspedTime << " seconds." << endl;
    } while(d == 1);
        return 0;
}