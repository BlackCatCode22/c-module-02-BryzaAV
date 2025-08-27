// ReverseAString.cpp
//BAV 8/27/2025

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string trim(const string& strIn) {
    string trimmed_s = strIn;

    // Trim leading whitespace
    trimmed_s.erase(trimmed_s.begin(), std::find_if(trimmed_s.begin(), trimmed_s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));

    // Trim trailing whitespace
    trimmed_s.erase(std::find_if(trimmed_s.rbegin(), trimmed_s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), trimmed_s.end());

    return trimmed_s;
}

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
    //variables string method

    //creat a string object
    string myStr01 = "this is a litteral string";
    //find the length method
    int strlength = 0;
    strlength = myStr01.length();
    //output the length of the string;
    cout <<"\n The length of my string object is: " << strlength;

//output the string objects variable.
    cout << "\n\n myStr01 is... " << myStr01 << "\n";

//get rid of the spaces that start and end in the string.


//trim the empty spaces.
    string myTrimmedStr = trim(myStr01);
    //Find the string object's length
    cout << "\n length is: " << myTrimmedStr.length() << "\n";
    //Output the trimmed string:
    cout << "\n myTrimmedStr:" << myTrimmedStr << "\n\n";





    return 0;
}