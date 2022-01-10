/* 
Print the following pattern for the given number of rows.
Note: N is always odd.

Sample Input:
5
Sample Output:
  *
 ***
*****
 ***
  * 
  
  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1; 
    while(i <= (n + 1)/2){
        int space = 1;
        while(space <= ((n + 1)/2)-i){
            cout << ' ';
            space = space + 1;
        }
        int stars = 1;
        while(stars <= 2*i - 1){
            cout << '*';
            stars = stars + 1;
        }
        cout << endl;
        i = i + 1;
    }
    int k = 1;
    while(i <= n){
        int j = 1;

        while(j <= k){
            cout << ' ';
            j = j + 1;
        }
        int p = 1;
        while(p <= n - 2*k){
            cout << '*';
            p = p + 1;
        }
        cout << endl;
        k = k + 1;
        i = i + 1;
    }
}    