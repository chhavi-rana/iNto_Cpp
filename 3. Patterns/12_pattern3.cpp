/* Enter n: 3
  1
 23
456 
*/

#include<iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout << "Enter n: ";
    cin >> n;

    int k = 1;

    while(i <= n){
        int j = 1;
        while(j <= n-i){
            cout << " ";
            j = j + 1;
        }
        while(j <= n){
            cout << k;
            j = j + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}