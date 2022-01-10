/* Pattern for N = 4

   *   
  ***
 ***** 
*******

 */

#include<iostream>
using namespace std;


int main(){

    int n, i = 1;
    
    cin >> n;
    
    while(i <= n){
        
        int j = 1;
        while(j <= n - i){                        // (2n - 1 - (2i - 1))/2 = 2(n-i)/2 = n - i
            cout << " ";
            j = j + 1;
        }
        
        int k = 1;
        while(k <= (2*i - 1)){
            cout << '*';
            k = k + 1;
        }
        

        
        cout << endl;
        i = i + 1;
    }
  
}