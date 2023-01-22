#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int size = 8;
    int arr[] = {1,2,3,4,5,6,7,8};

    int key;
    cin >> key;                  

    // Search Algorithm
    auto it = find(arr, arr + size, key);

    int index = it - arr;       //  When you subtract two pointers, as long as they point into the same array, the result is the number of elements separating them.
    
    if(index == size){
        cout << key <<" not found" << endl;
    }else{
        cout << "Found at index: " << index << endl;
    }
    // cout << arr << endl;              // 0x7ffe73777770
    // cout << it << endl;              // 0x7ffe73777780     (index-->4)

    return 0;
}