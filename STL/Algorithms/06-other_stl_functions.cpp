#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a = 10, b = 20;

    cout << "a: " << a << "     b: " << b << endl;                   // a: 10     b: 20

    swap(a, b);

    cout << "After swapping: " << endl;
    cout << "a: " << a << "     b: " << b << endl;                  // a: 20     b: 10

    cout << "Max : " << max(a, b) << endl;                          // 20
    cout << "Min : " << min(a, b) << endl;                          // 10

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/ sizeof(n);

    // reverse the first 3 elements
    reverse(arr, arr + 3);                                           //  3 2 1 4 5       

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    

    /* 
        swap and next_permutation work on array & vectors also.

        swap(arr[0], arr[1])     // {2,1,3,4,5}      
        next_permutation(v.begin(), v.end());
    */
   return 0;
}