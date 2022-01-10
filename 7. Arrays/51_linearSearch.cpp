/* Linear Search
Send Feedback
You have been given a random integer array/list(ARR) of size n, and an integer X. You need to search for the integer X in the given array/list using 'Linear Search'.
 You have been required to return the index at which X is present in the array/list. If X has multiple occurrences in the array/list, then you need to return the index at which the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.
'Linear search' is a method for finding an element within an array/list. It sequentially checks each element of the array/list until a match is found or the whole array/list has been searched.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'n' representing the size of the array/list.

Second line contains 'n' single space separated integers representing the elements in the array/list.

Third line contains the xue of X(integer to be searched in the given array/list)
Output format :
For each test case, print the index at which X is present or -1, otherwise.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= n <= 10^5
-2 ^ 31 <= X <= (2 ^ 31) - 1
Time Limit: 1 sec
Sample Input 1:
1
7
2 13 4 1 3 6 28
3
Sample Output 1:
4
Sample Input 2:
2
7
2 13 4 1 3 6 28
9
5
7 8 5 9 5      
5
Sample Output 2:
-1
2
 */

/* #include<iostream>
using namespace std;

int main(){
    int t, n, x;
    int arr[100];
    cin >> t;
    for(int i = 1; i <= t; i++){
        int count = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> x;

        int j = 0;
        while(j < n){
            if(x == arr[j]){
            break;
            }

            count++ ;
            j++ ;
        }

        if(count < n){
            cout << "INdex = " << count;
        }
        else{
            cout << -1;
        }

    }

} */
// Second approach using a function.

int linearSearch(int *arr, int n, int x)
{
  
    for(int j = 0; j < n; j++){
        
        if(x == arr[j]){
            return j;
        }   
    }
    return -1;

}

#include<iostream>
using namespace std;
int main(){
    int n, t, x, arr[100], k;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> x;
        int k = linearSearch(arr, n, x);
        cout << k;
    }
}   