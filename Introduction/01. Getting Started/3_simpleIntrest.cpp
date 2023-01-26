// C++ program to calcualte simple intrest.

#include<iostream>
using namespace std;
int main(){
    int P;
    float R, t, SI;                                                 // Rate in percentage and time in years.
    R = 8;
    P = 1000;
    t = 5;
    cout << "Enter the rate: " ;
    cin >> R;
    cout << "Enter the principal amount: " ;
    cin >> P;
    cout << "Enter the time: ";
    cin >> t;
    SI = (P*R*t)/100;
    cout << "The simple intrest is equal to " << SI << endl;
    return 0;
}