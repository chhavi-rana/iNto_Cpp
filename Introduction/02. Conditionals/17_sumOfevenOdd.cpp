/* Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5. */

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;

    cout << "Enter n:";
    cin >> n;
    
    int k, even_sum = 0, odd_sum = 0, m;
    
    while(n > 0){
        k = n % 10 ;
        
        if(k % 2 == 0){
            even_sum = even_sum + k;
        }
        else{
            odd_sum = odd_sum + k;
        }
        m = (n - k)/10;                                  // Could have reduced a step by eliminating variable m here.
        n = m;      
    }
    cout << even_sum << " " << odd_sum;
    return 0;
}