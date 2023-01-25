/* 

Resources : https://cplusplus.com/reference/cstring/strtok/

Syntax : char *ptr = strtok(char *s,  char *delimiters); 
On the first call function should be passed with string argument for s. 
function internally creates a new array and stores the first token in it and return the address of that new array which is stored in ptr.
In subsequent calls, pass string argument as null. This way it maintains the state by telling the function to continue tokenizing the string you passed in first.
When there are no tokens left to retrieve, strtok returns NULL, meaning that the string has been fully tokenized.

INternally : The end of the token is automatically replaced by a null-character, and the beginning of the token is returned by the function.

*/

#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char s[100] = "Today is a sunny day.";

    char *ptr = strtok(s, " ");
    cout << ptr << endl;
    
    while(ptr != NULL){
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }

    return 0;
}