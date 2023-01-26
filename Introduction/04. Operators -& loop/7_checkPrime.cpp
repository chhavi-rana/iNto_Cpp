// C++ Program to check whether the number is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n, k;
    int i = 2;
    cout << "Enter the number: " << endl;
    cin >> n;

    

    if(n == 1){
        cout << "Not PRIme" << endl;
        return 0;
    }

    while( i < n ){
        k = n % i;
        i = i + 1;
        if ( k == 0){
            cout << "not prime" << endl;
             return 0;
        }
        
    }
    
    cout << "PRime" << endl;
    return 0;
}
// Another way of writing the same code: Teacher's method 

/*
#include<iostream>
using namespace std;
int main(){
    int n, i;
    bool divided = false;

    cout << "Enter n: " << endl;
    cin >> n;

    while(i < n){
        if(n % i == 0){
            divided = true;
        }
        i = i + 1;
    }
    if(!divided){
        cout << "PRime" << endl;
    }
    else{
        cout << "Not prime" << endl;
    }
}
*/