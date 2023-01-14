/* Pattern for N = 4
4444
333
22
1 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while(i <= n){
        int num = 1;
        while(num <= n - i + 1){
            cout << n - i + 1;
            num = num + 1;
        }
        cout << endl;
        i = i + 1;
    }
}