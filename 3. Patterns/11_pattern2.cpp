/* Enter n: 4
1
23
456
78910
*/

#include<iostream>
using namespace std;
int main(){

int n, i = 1, k = 1;

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
   
}
}