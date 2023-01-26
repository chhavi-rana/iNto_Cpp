/* Decimal to Binary
Send Feedback
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note : The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.

Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111
 */

#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;

    int rem, bNum = 0, i = 1;
    while(N > 0){
        
        rem = N % 2;                      
        N = N / 2;                        

        bNum = bNum + rem * i;            // To convert dec to bin, we divide number by 2 and then write all the values of remainder from  
        i = i * 10;                       //  bottom to top. Hence, couldn't directly print the rem and get binary value. 
   //What we did here is that we collect all remainder and stored them in a integer and then printed that integer.
   // IF there is any problem in understanding, dry run code for N = 4, and you will understand.
        
    }
    
    cout << bNum;
 
}