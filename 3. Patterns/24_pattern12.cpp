/* Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG */

#include<iostream>
using namespace std;


int main(){

    int n;
    cin >> n;
    char startchar = 'A';
    
    int i = 1;
    char nextchar = startchar;
    while(i <= n){
        int j = 1;
        while(j <= i){
            
            cout << nextchar;
            j++;
            nextchar++;
            
        }
        cout << endl;
        startchar++;
        nextchar = startchar;
        i++;
    }
  
}