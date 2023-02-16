/* 

InputIterator find (InputIterator first, InputIterator last, const T& val)

first,last :
Input iterators to the initial and final positions in a sequence. The range
searched is [first,last), which contains all the elements between first and
last, including the element pointed by first but not the element pointed by last.

val :
Value to be search in the range

Return Value :
An iterator to the first element in the range that compares equal to val.
If no elements match, the function returns last.

Time Complexity: O(n)
Auxiliary Space: O(1)

 */


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