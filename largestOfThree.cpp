//largestOfThree.cpp
//BAV 9/3/2025

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Asking the user to enter three integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter the third integer: ";
    cin >> num3;

    int largest;

    // Compare the numbers using if statements
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    }
    else {
        largest = num3;
    }

    // Output the largest number
    cout << "The largest integer is: " << largest << endl;

    return 0;
}