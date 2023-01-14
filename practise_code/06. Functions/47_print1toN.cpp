// C++ Program to print 1 to N numbers using functions.

#include<iostream>
using namespace std;

void print1_to_N(int n){                            //  since print1_to_N function doesn't return anything, therefore return type is void.
    int i = 1;
    while(i <= n){
        cout << i << endl;
        i++;
    }
}

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;
    print1_to_N(N);
    return 0;
}