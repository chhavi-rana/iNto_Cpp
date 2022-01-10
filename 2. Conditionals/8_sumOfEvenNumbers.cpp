//C++ Program: Given a number N, print sum of all even numbers from 1 to N.

#include <iostream>
using namespace std;


int main(){

    int N;
    int sum = 0, i = 0;

    cout << "Enter N: ";
    cin >> N;
    
    while(i < N+1){
        if (i % 2 == 0){
            sum = sum + i;
        }
        i = i + 1;
    }
    
    cout << sum << endl;
    return 0;
}