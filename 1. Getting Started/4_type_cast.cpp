// C++ program to explore tpyecasting and adding int to char

#include<iostream>
using namespace std;
int main(){
    int a, b;
    char c, d;
    c = 'y';
    a = c;                           // ascii value of y will get assigned into a 
    cout << a << endl;        

    b = 1880;
    d = b;                           // we are putting a int of 4 byte into a char of 1 byte, so there will be loss of value, only last byte will be printed.
    cout << d << endl;                

    char k = 'a';
    int p = 10;
    int r = p + k;                    // adding int to char --> ascii value of input character will be added to the given integer.
    cout << r << endl;
    return 0;
}