/* Reverse of a number
Send Feedback
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

Input format :
Integer N
Output format :
Corresponding reverse number
Constraints:
0 <= N < 10^8
Sample Input 1 :
1234
Sample Output 1 :
4321
Sample Input 2 :
1980
Sample Output 2 :
891
 */

#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    
    int rev, div = 0;

    while(div == 0){                                  // This loop will remove the trailing zeroes.
        div = N % 10;
        if(div == 0){
            N = N / 10;
        }
    }
   

    while(N > 0){                                     // This loop will start printing the number from end i.e. reverse the number.
        rev = N % 10;
        N = N /  10;
        
        cout << rev;
    }

}