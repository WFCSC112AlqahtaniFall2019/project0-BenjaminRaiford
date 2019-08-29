#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int a1; //first equation, first coefficient
    int b1; //first equation, second coefficient
    int answer1; //first equation, answer

    int a2; //second equation, first coefficient
    int b2; //second equation, second coefficient
    int answer2; //second equation, answer

    /*
     * below, receive user input
     * FIX: if needed, find a way to take in whole line and parse coefficients
    */

    cin >> a1;
    cin >> b1;
    cin >> answer1;

    cin >> a2;
    cin >> b2;
    cin >> answer2;

//  for loop that checks each x and y number
    int x; //x variable incrementing
    int y; //y variable incrementing

    for(x = -10; x < 11; x++){
        for (y = -10; y < 11; y++){
            if (((a1 * x) + (b1 * y) == answer1) && ((a2 * x) + (b2 * y) == answer2)){
                cout << "x: " << x << endl;
                cout << "y: " << y << endl;
                return 0;
            }
        }
    }
    cout << "No solution" << endl;
    return 0;
}