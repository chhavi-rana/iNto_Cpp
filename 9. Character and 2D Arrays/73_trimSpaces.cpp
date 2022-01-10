
/* Trim Spaces
Send Feedback
Given an input string S that contains multiple words,
you need to remove all the spaces present in the input
string.
There can be multiple spaces present after any word.
Input Format :
Strings
Output Format :
Updated string
Constraints :
1 <= Length of string S <= 1016
Sample Input:
abc def g hi
Sample Output:
abcdefghi 
*/

#include<iostream>
using namespace std;

void trimSpaces(char input[]){
    for(int i = 0; input[i] != '\0'; i++){
        if(input[i] == ' '){
            for(int j = i; input[j] != '\0'; j++){
                input[j] = input[j + 1];
            }
        }
    }

    cout << input;
}

int main(){
    char input[1024];

    cout << "Enter string to remove spaces in it: ";
    cin.getline(input, 1024);

    trimSpaces(input);
}
