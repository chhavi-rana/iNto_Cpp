/* Sample Input:
5
Sample Output :
           1
          232
         34543
        4567654
       567898765 
       
*/

#include<iostream>
using namespace std;

int main(){
    int n, i = 1;
    int k = 0, val = 1;
    cout << "Enter n: ";
    cin >> n;

    while(i <= n){
        int space = 1;
        while(space <= n - i){
            cout << ' ';
            space = space + 1;
        }
        val = i;
        while(val <= 2*i - 1){
            cout << val;
            val = val + 1;
        }
        
        while(k >= i){
            cout << k;
            k--;
        }
        
        cout << endl;
        i = i + 1;
        k = 2*i - 2;
    }
}