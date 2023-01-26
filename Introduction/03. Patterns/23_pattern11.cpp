/* Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH 
*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int i = 1;
    char startchar = 'A' + i + n - 2;
    
    while(i <= n){
        int j = 1;
        char nextChar = startchar;
        while(j <= i){
            cout << nextChar;
            j++;
            nextChar++;
        }
        cout << endl;
        startchar--;
        i++;
    }
  
}
