/* Pattern for N = 4
   1
  23
 345
4567 */

#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    int k = 1;
    cout << "Enter n: ";
    cin >> n;

    while(i <= n){
        int j = 1;
        while(j <= n-i){
            cout << " ";
            j = j + 1;
        }
        
        while(j <= n){
            cout << k;
            k = k + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        k = i;
    }
}