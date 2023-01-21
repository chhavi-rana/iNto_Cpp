/* 
Resources : https://www.scaler.com/topics/cpp/templates-in-cpp/

Templates in C++ allow us to define generic functions and classes. 

Templates in C++ promote generic programming, meaning the programmer does not need to write the same function or method for different parameters.

Idea behind the templates in C++ is that we pass the data type as a parameter, so we don’t need to write the same code for different data types.


 */



#include<bits/stdc++.h>
using namespace std;

template<typename T>                           // here we replace T with required datatype like int, float, double, char, etc.
                                              // Note: The typename keyword can always be replaced by the keyword class.

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
    
    cout << search(a,n,5) << endl;                              // 4
    
    int n2 = sizeof(b) / sizeof(b[0]);
    //cout << n << endl;
    
    cout << search(b,n2,3.3) << endl;                           // 2
    
    return 0;
}
