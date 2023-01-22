
/*


C++ Algorithm sort() function is used to sort the elements in the range [first, last) into ascending order.

Time Complexity: O(N log N)
Auxiliary Space: O(1)

The sort function in C++ uses IntroSort internally with the complexity of N*log(N)
Resources : https://www.geeksforgeeks.org/introsort-or-introspective-sort/


*/

#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;                                          //  6434 234 72 6 5 3 
 /*  return a < b;                                        //   3 5 6 72 234 6434 */
}

int main(){

    int arr[] = {3,5,234,6,72, 6434};
    int n = sizeof(arr)/sizeof(arr[0]);

    /* 

    We can also write our own comparator function and pass it as a third parameter. This “comparator” function returns a value; 
    convertible to bool, which basically tells us whether the passed “first” argument should be placed before the passed “second” argument or not. 
    
    */ 
    
    sort(arr, arr + n, compare);                     

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";                              
    }

    return 0;
}