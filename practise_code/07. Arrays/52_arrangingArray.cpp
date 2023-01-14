/* Arrange Numbers in Array
Send Feedback
You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.
Note:
You need not print the array. You only need to populate it.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains an integer 'N'.
Output Format :
For each test case, print the elements of the arra/listy separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^4

Time Limit: 1sec
Sample Input 1 :
1
6
Sample Output 1 :
1 3 5 6 4 2
Sample Input 2 :
2
9
3
Sample Output 2 :
1 3 5 7 9 8 6 4 2
1 3 2
 */

#include<iostream>
using namespace std;

int main(){
    int N, arr[100];
    cin >> N;

    if(N % 2 == 0){
        for(int i = 0; i < N/2; i++){
            arr[i] = 2 * i + 1;
        }
        int k = N;
        for(int i = N/2; i < N; i++){
            arr[i] = k;
            k = k - 2;
        }
    }

    else{
        for(int i = 0; i < (N + 1)/2; i++){
            arr[i] = 2 * i + 1;
        }

        int p = N - 1;
        for(int i = (N + 1)/2; i < N; i++){
            arr[i] = p;
            p = p - 2;
        }
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}