#include <iostream>
#include <string>
using namespace std;

int main() {
    char equations;
    bool threeEquations = false; //number of variables

    cout << "Press 2 for a system of equations with two equations and two variables." << endl <<
            "Press 3 for a system of equations with three equations and three variables." << endl;
    cin >> equations;

    if (equations == '3'){
        threeEquations = true;
    }

    if (threeEquations){
        int a1; //first equation, first coefficient
        int b1; //first equation, second coefficient
        int c1; //first equation, third coefficient
        int answer1; //first equation, answer

        int a2; //second equation, first coefficient
        int b2; //second equation, second coefficient
        int c2; //second equation, third coefficient
        int answer2; //second equation, answer

        int a3; //third equation, first coefficient
        int b3; //third equation, second coefficient
        int c3; //third equation, third coefficient
        int answer3; //third equation, answer

        string tmpString; //receive the carriage return after each equation

        cout << "An equation can be represented in the form ax + by + cz = d" << endl;
        cout << "Enter the coefficients of your first equation in the format: a b c d" << endl;
        cin >> a1;
        cin >> b1;
        cin >> c1;
        cin >> answer1;
        getline(cin, tmpString); //added at SRN's suggestion to make input quicker and more intuitive

        cout << "Enter the coefficients of your second equation in the format: a b c d" << endl;
        cin >> a2;
        cin >> b2;
        cin >> c2;
        cin >> answer2;
        getline(cin, tmpString);

        cout << "Enter the coefficients of your third equation in the format: a b c d" << endl;
        cin >> a3;
        cin >> b3;
        cin >> c3;
        cin >> answer3;
        getline(cin, tmpString);

        //for loop that checks each x and y number
        int x; //x variable incrementing
        int y; //y variable incrementing
        int z; //z variable incrementing

        for(x = -10; x < 11; x++){
            for (y = -10; y < 11; y++){
                for(z = -10; z < 11; z++){
                    if (((a1 * x) + (b1 * y) + (c1 * z) == answer1) &&
                        ((a2 * x) + (b2 * y) + (c2 * z) == answer2) &&
                        ((a3 * x) + (b3 * y) + (c3 * z) == answer3)){ //are all equations satisfied?
                        cout << "x: " << x << endl;
                        cout << "y: " << y << endl;
                        cout << "z: " << z << endl;
                        return 0;
                    }
                }
            }
        }

        cout << "No solution" << endl;
        return 0;
    }

    int a1; //first equation, first coefficient
    int b1; //first equation, second coefficient
    int answer1; //first equation, answer

    int a2; //second equation, first coefficient
    int b2; //second equation, second coefficient
    int answer2; //second equation, answer

    string tmpString; //receive the carriage return after each equation

    cout << "An equation can be represented in the form ax + by = c" << endl;
    cout << "Enter the coefficients of your first equation in the format: a b c" << endl;
    cin >> a1;
    cin >> b1;
    cin >> answer1;
    getline(cin, tmpString); //added at SRN's suggestion to make input quicker and more intuitive

    cout << "Enter the coefficients of your second equation in the format: a b c" << endl;
    cin >> a2;
    cin >> b2;
    cin >> answer2;
    getline(cin, tmpString);

    //for loop that checks each x and y number
    int x; //x variable incrementing
    int y; //y variable incrementing
    for(x = -10; x < 11; x++){
        for (y = -10; y < 11; y++){
            if (((a1 * x) + (b1 * y) == answer1) &&
                ((a2 * x) + (b2 * y) == answer2)){ //are all equations satisfied?
                cout << "x: " << x << endl;
                cout << "y: " << y << endl;
                return 0;
            }
        }
    }

    cout << "No solution" << endl;
    return 0;
}