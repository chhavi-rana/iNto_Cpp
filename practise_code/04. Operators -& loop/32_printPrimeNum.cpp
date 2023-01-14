// Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
// Print the prime numbers in different lines.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    bool divided = true;

    for(int i = 2; i <= n; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                divided = false;
                break;
            }
        }

        if(divided)
        cout << i << endl;
        divided = true;
    }
}