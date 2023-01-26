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
        while(j <= i){
            cout << k;
            j = j + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
        k = i;
    }
}    