/* 
C++ Program to print all the prefixes of a given string.
eg. string = abcd
    prefixes = a, ab, abc, abcd
 */

#include<iostream>
using namespace std;
#include<cstring>

int main(){
    char input[100];
    cin >> input;

    cout << "The prefixes of " << input <<" are: " << endl;
    int len = strlen(input);
    for(int i = 0; i < len; i++){
        for(int j = 0; j <= i; j++){
            cout << input[j];
        }
        cout << endl;
    }
}