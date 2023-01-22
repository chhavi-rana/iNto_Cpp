/* 

Binary search is a popular type of algorithm which implements searches by sorting the arrays first before searching.

Binary search algorithms divide arrays into halves till all the elements are processed or the required element is detected. 

Syntax :   binary_search(startaddress, endaddress, valuetofind) 
Returns :  true if an element equal to valuetofind is found, else false.
Time Complexity : O(log(N)) (same for ub, lb as they are also based on binar-search algo)
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {1,2,34,34,34,55,77,99,3545};
    int size = sizeof(arr)/sizeof(arr[0]);

    int key; 
    cin >> key;                                                                   // 34

    bool flag = binary_search(arr, arr + size, key);

    if(flag){
        cout << key << " is present" << endl;                                       // Present
    }else{
        cout << "Absent !" << endl;
    }

    // It returns an iterator. If the element is present, returns an iterator for its first occurrence. If not, return the iterator for its next greater element in the array. 
    // When the element is not present in the array and greater than the largest element present in the array then the iterator returned is outside the array.
    //  lower_bound(start, end, key) returns the address of the first element >= key.

    auto lb = lower_bound(arr, arr+size, key);
    cout << "Lower bound at: " << lb - arr << endl;                                // 2



    //It returns an iterator pointing ** next to the target element present ** or the next greater element in the array when the target is not present. 
   // If the target is greater than the largest element in the given array, it returns an iterator at the end of the array.
    //  upper_bound returns the address of the first element > key [= doesn't hold here]
    auto ub = upper_bound(arr, arr + size, key);
    cout << "Upper bound at: " << ub - arr << endl;                                // 5


    return 0;
}
