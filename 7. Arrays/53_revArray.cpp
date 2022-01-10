/* Reverse the array
Given an array with N elements, the task is to reverse all the array elements and print the reversed array.
Input Format:
The first line contains an integer N representing the size of the array.

The second line contains N space-separated integers representing the elements of the array.
Output Format:
The only line of the output prints N space-separated integers representing the Reversed array elements.
Constraints:
1 <= N <= 10^3
1 <= arr[i] <= 10^9
1 <= K < N
Sample Input:
8
7 5 2 11 2 43 1 10
Sample Output:
10 1 43 2 11 2 5 7
Explanation Of Sample Input:
Here the elements have been reversed. */


#include <iostream>
using namespace std;

int main() {
    int N;
	cin >> N;
    int arr[100];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
	}
    int s = 0, e = N - 1, t;
    while(s < e){
        t = arr[s];
        arr[s] = arr[e];
        arr[e] = t;
        s++;
        e--;
    }
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}