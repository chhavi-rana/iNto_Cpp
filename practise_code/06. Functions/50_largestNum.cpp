// C++ Program to find the largest element in a array.

#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter number of elments in array: ";
    cin >> N;
    int arr[100];
    cout << "Enter elements in the array: ";
    // Input elements in the array.
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int max = -2147483648;                       // this could have been written as int max = INT_MIN  and include<climits> file in header.
    
    for(int i = 1; i <= N; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "The largest element is " << max;
}