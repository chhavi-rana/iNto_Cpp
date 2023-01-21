#include<bits/stdc++.h>
using namespace std;

template<typename T>                           // here we replace T with required datatype like int, float, double, char, etc.

int search(T arr[], int n, T key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int a[] = {1,2,3,4,5,6,8,9,10};
    
    double b[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    
    int n = sizeof(a)/sizeof(int);
    
    cout << search(a,n,5) << endl;
    
    int n2 = sizeof(b) / sizeof(b[0]);
    //cout << n << endl;
    
    cout << search(b,n2,3.3) << endl;
    
    return 0;
}
