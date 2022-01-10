/* Remove Consecutive Duplicates
Send Feedback
For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"
 Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
Output Format:
The only line of output prints the updated string.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
aabccbaa
Sample Output 1:
abcba
Sample Input 2:
xxyyzxx
Sample Output 2:
xyzx
 */

#include<iostream>
using namespace std;

void checkConsDuplicate(char input[]){
    /*this logic requires two loops, whereas the other one does the work only with one loop only.

    int i = 0;
    while(input[i] != 0){
        if(input[i] == input[i + 1]){
            for(int j = i ; input[j] != 0; j++){
                input[j] = input[j + 1];
            }
            
        }
        else{
            i++;
        }
    }
 */
    for(int i = 0, k = 1; input[i] != '\0'; i++){
        if(input[i] != input[i + 1]){
            input[k] = input[i + 1];
            k++;
        }
    }
    cout << input;
}

int main(){
    int size = 1e6;
    char str[size];

    cin >> str;
    checkConsDuplicate(str);
}