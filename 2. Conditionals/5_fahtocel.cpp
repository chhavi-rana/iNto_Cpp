// C++ Program to convert Fahreneit value into celsius.

#include<iostream>
using namespace std;
int main(){
    int f;
    cout << "Enter farh value: " << endl;
    cin >> f;
    float c = (5.0/9) * (f-32);                   // int c = (5/9)*(f-32) --> had we written like this o/p -> 0
    cout << c << endl;                     // because int/int is a int and 5/9 would have been 0 and anything multiplied to 0 is 0.
    return 0;
}

// int c = ((float)5/9) * (f-32);            (typecasting method)