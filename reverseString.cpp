// ReverseAString.cpp
//BAV 8/25/2025

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cout << "\n\n Welcome to My Reverse a String Program\n\n";
    //Part 1
    //Use the reverse() function from the library names algorithm

    //Creat a string that we will reverse
    string myStrToReverse = "A Long String To Reverse";

    string myEasyReveredStr;

    cout << "\n The string before being reversed is: " << myStrToReverse;

    reverse(myStrToReverse.begin(), myStrToReverse.end());

    cout << "\n My reverse string is: " << myEasyReveredStr;

    //Part 2
    //Use a for loop to swap character

    for (int i=0; i<10; i++) {
        cout <<"\n the value of i is " << i << "\n";
    }


    return 0;
}