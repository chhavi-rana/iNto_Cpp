// C++ program to find n choose r using function.

#include<iostream>
using namespace std;

int factorial (int N){
    int i = 1, ans = 1;
    while(i <= N){
        ans = ans * i;
        i++;
    }
    return ans;
}

int main(){
    int N, r, val;
    cout << "Enter N and r: ";
    cin >> N >> r;
    cout << factorial(N) / (factorial(r) * factorial(N-r));
    return 0;
}