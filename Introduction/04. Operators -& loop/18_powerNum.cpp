/* Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer. */

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x, n, ans = 1;

    cout << "Enter x and n: ";
    cin >> x >> n;
    
    int i = 1;
    
    while(n--){
        ans = ans * x;
    }
    
    cout << ans;
    return 0;
}