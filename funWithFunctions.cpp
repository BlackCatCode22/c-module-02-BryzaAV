//funWithFunctions.cpp
//BAV 9/3/2025

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//creat three functions
//input: The users name()
//processing: Ask the user for am integer value
//output: The users number
int getAnIntFromTheUser(string userName) {
    // prompt the user for a number (a whole number aka an int)
    int anIntFromTheUser;

    cout << "\n Hello," + userName + ", please enter a whole number: ";
    cin >> anIntFromTheUser;

    return anIntFromTheUser;
}

int main() {
    cout << "\n...Welcome to my fun with functions program!... \n";

    //variables needed
    //I need a variable to hold the user's name
    string userName;
    //Get an int from thr user by calling (invoking) your functions
    int aRandomNumber = 0;

    //Get the user's name.
    cout << "\n Hello user, what is your name? ";
    cin >> userName;
    cout << "\n userName is: " << userName << "\n";

    //Call (invoke) the function named getAnIntFromTheUser
    aRandomNumber = getAnIntFromTheUser(userName);
    cout << "\n\n" +  userName + " entered: " << aRandomNumber << endl;


    return 0;
}