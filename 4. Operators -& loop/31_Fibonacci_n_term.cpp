/* 
Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.

Sample Input 1:
4
Sample Output 2:
3 
Sample Input 1:
6
Sample Output 2:
8 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int t1 = 1, t2 = 1, nextTerm;

    if(n == 1)
    cout << 1;

    else if(n == 2)
    cout << 1;

    else{
        for(int i = 1; i < n - 1; i++){
        nextTerm = t1 + t2;
        t2 = t1;
        t1 = nextTerm;
        
    }

    cout << nextTerm;
    }
    
}