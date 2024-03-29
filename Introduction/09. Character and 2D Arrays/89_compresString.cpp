/* Compress the String
Send Feedback
Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive 
duplicate occurrences with the count of repetitions.
Exmple:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.
Note :
Consecutive count of every character in the input string is less than or equal to 9.
Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
Output Format:
The only line of output prints the updated string.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa
Sample Input 2:
aaabbcddeeeee
Sample Output 2:
a3b2cd2e5
 */


#include<iostream>
using namespace std;

void compresString(char input[]){
    int k = 1, count = 1, i = 0;
    int num = 1e6;
    char s[num];
    s[0] = input[0];
    while(input[i] != 0){
        if(input[i] == input[i + 1]){
            while(input[i] == input[i + 1]){
            count++;
            s[k] = count + 48;  // This logic would not work if count is greater than 9. try this test case aaaaaaaaaaaabbbcdee
            i++;
            }
            k++;
        }
        
        if(input[i] != input[i + 1]){
            s[k] = input[i + 1];
            count = 1;
            k++;
        }
        i++;
    }
    cout << s;
}

int main(){
    int size = 1e6;
    char str[size];
   
    cin >> str;
    
    compresString(str);
}