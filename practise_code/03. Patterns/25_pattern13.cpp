/* Pattern for N = 4

****
***
**
* 

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1;
    while(i <= n){
        int stars = 1;
        while(stars <= n - i + 1){
            cout << '*';
            stars = stars + 1;
        }
        cout << endl;
        i = i + 1;
    }
}