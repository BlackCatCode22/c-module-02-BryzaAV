//stringWarmUp.cpp
//Bryza Arreola Vazquez
//8/25/2025


#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "\n\n Welcome to My String WarmUp Program\n\n";
    cout << "\n Created in class on Aug 25, 2025\n";

    //Let's do some string stuff
    //Create a string object named myStrObject
    string myStrObject = "abcdefghi";
    //Output my string object

    cout << "\n The value of my string object is: " << myStrObject << endl;

    //Use a handy dandy method from the sting library to find its length
    cout << "The Length of myStrObject is: " << myStrObject.length() << endl;

    // Create a variable that hold the length of out string
    int lengthOfMyObject = 0;

    lengthOfMyObject = myStrObject.length();
    cout << "\n Length of MyObject is: " << lengthOfMyObject << endl;


    








    cout << myStrObject << endl;

    cout << "size: " << myStrObject.size() << endl;

    cout << "test[1]: " << myStrObject[1] << endl;
    cout << "test1.at(3):" << myStrObject.at(3) << endl;

    myStrObject[2] = 'C';
    myStrObject += "qrstu";
    myStrObject.append("vwxyz");
    cout << myStrObject << endl;

    cout << "length; " << myStrObject.length() << endl;

    string test2 = "123";
    string test3;

    test3 = myStrObject + test2;
    cout << "test3: " << test3 << endl;

    if (test3.empty ()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    test3.clear();

    test3 = myStrObject + test2;
    cout << "test3: " << test3 << endl;

    if (test3.empty ()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    if (myStrObject.empty ()) cout << "test1 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    string test4 = to_string(true);
    cout << test4 << endl;

    double number = stod(test4);
    cout << "number: " << number << endl;

    string test5 = "A test string";
    string sub = test5.substr(2,4);
    cout << "sub: " << sub << endl;

    string name;
    cout << "Enter name: ";
    //cin >> name;
    getline(cin, name);
    cout << "Name: " << name << endl;

    return 0;

}