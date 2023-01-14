/* Square Root (Integral)
Send Feedback
Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Input format :
Integer N
Output Format :
Square root of N (integer part only)
Constraints :
0 <= N <= 10^8
Sample Input 1 :
10
Sample Output 1 :
3
Sample Input 2 :
4
Sample Output 2 :
2
 */

#include<iostream>
using namespace std;
int main(){
    int N, i = 1, count = 0;
    cout << "Enter N: ";
    cin >> N;

    while(N >= 0){
        N = N - i;
        i = i + 2;
        count++;
    }

    cout << count - 1 ;
}
/* 
Repeated Subtraction Method of Square Root
This is a very simple method. We will subtract the consecutive odd numbers from the number for which we are finding the square root, 
till we reach 0. The number of times we subtract is the square root of the given number. This method works only for perfect square numbers.
Let us find the square root of 16 using this method.

16 - 1 = 15
15 - 3 =12
12 - 5 = 7
7- 7 = 0
You can observe that we have subtracted 4 times. Thus,√16 = 4 */