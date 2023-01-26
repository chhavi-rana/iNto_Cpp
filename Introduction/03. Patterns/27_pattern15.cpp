/* Pattern for N = 4
   1
  121
 12321
1234321 

*/

#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    int k = 0;
    cout << "Enter n: ";
    cin >> n;

    while(i <= n){
        int space = 1;
        while(space <= n - i){
            cout << ' ';
            space = space + 1;
        }
        int val = 1;
        while(val <= i){
            cout << val;
            val = val + 1;
        }
        
        while(k >= 1){
            cout << k;
            k--;
        }
        
        cout << endl;
        i = i + 1;
        k = i - 1;
    }
}