/* Binary to decimal
Send Feedback
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
 */

#include<iostream>
using namespace std;

int main(){
     int N;
     cout << "Enter N in binary format: ";
     cin >> N;
    
    int rem, count = 0, num = 0;
    while(N > 0){
        rem = N % 10;
        N = N / 10;
        for(int i = 0; i < count; i++){
            rem = 2 * rem;
        }
        num = num + rem;
        count++;
    }
    cout << num;
}