/* Fibonacci Number
Send Feedback
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1

Input Format :
Integer N
Output Format :
true or false
Constraints :
0 <= n <= 10^4
Sample Input 1 :
5
Sample Output 1 :
true
Sample Input 2 :
14
Sample Output 2 :
false    

 */

#include<iostream>
using namespace std;

bool isFibNum(int n){
    int t1 = 0, t2 = 1, nextTerm;
    if(n == 0){
        return 1;
    }else if(n == 1){
        return 1;
    }
    while(nextTerm <= n){
        nextTerm = t1 + t2;
        if(n == nextTerm){
            return 1;
        }
        t1 = t2;
        t2 = nextTerm;

    }
    return 0;
    
}

int main(){
    int N;
    cout << "Enter the number to check whether it is a part of fibonacci sequence: ";
    cin >> N;
    bool ans = isFibNum(N);
    if(ans == 1){
        cout << "true";
    }else{
        cout << "false";
    }
}