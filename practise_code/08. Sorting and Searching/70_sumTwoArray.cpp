/* Sum of Two Arrays
Send Feedback
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers
 from 0 to 9(i.e. single digit integer is present at every index). The idea here is to represent each array/list as an integer in itself
  of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list i.e. 
output array/list will also contain only single digit at every index.
Note:
The sizes N and M can be different. 

Output array/list(of all 0s) has been provided as a function argument. Its size will always be one more than the size of 
the bigger array/list. Place 0 at the 0th index if there is no carry. 

No need to print the elements of the output array/list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.
Output Format :
For each test case, print the required sum of the arrays/list in a row, separated by a single space.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec 
Sample Input 1:
1
3
6 2 4
3
7 5 6
Sample Output 1:
1 3 8 0
Sample Input 2:
2
3
8 5 2
2
1 3
4
9 7 6 1
3
4 5 9
Sample Output 2:
0 8 6 5
1 0 2 2 0 

 */

#include<iostream>
using namespace std;

void findSumArray(int a[], int m, int b[], int n){
    /* 
    in this logic we are converting array to numbers then adding them, but this won't work if the length of array is like 40.
    because range of int or even long is not that much. Therefore going with next method.

    
    int num1 = 0, num2 = 0, num3 = 0;
    for(int i = 0; i < n; i++){
        int k = 10;
        num1 = num1 + a[i] * pow(k, n - i -1);
    }
    
    for(int i = 0; i < m; i++){
        int k = 10;
        num2 = num2 + b[i] * pow(k, m - i -1);
    }
    
    num3 = num2 + num1;
    
    int i = 0, c[100];
    while(num3 > 0){
        c[i] = num3 % 10;
        num3 = num3 / 10;
        i++;
    }

    for(int k = i - 1; k >= 0; k--){
        cout << c[k] << " ";
    } */
    
    
    int c[100], carry = 0;
    int val = (m > n) ? m : n;

    for(int i = m - 1, j = n - 1, k = val; k >= 0; i--, j--, k--){
        if(i < 0)
            a[i] = 0;
        if(j < 0){
            b[j] = 0;
        }

        c[k] = a[i] + b[j] + carry;
        carry = c[k] / 10;
        c[k] = c[k] % 10;
    }

    for(int i = 0; i <= val; i++){
        cout << c[i] << " ";
    }
}

int main(){
    int m, n;
    int a[100], b[100];

    cin >> m >> n;

    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    findSumArray(a, m, b, n);
}