/* 
Column Wise Sum
Send Feedback

Given a 2D integer array of size M*N, find and print the
sum of ith column elements separated by space.

Input Format :

Line 1: Two integers M and N (separated by
space)
Next M lines : ith row elements (separated by
space)

Output Format :

‘Sum of every ith column elements (separated by
space)

Constraints :
1<=M,N <= 1003

Sample Input :

4 2
1 2
3 4
5 6
7 8

Sample Output :

16 20 >
 */

#include<iostream>
using namespace std;

int main(){
    int row, column;
    int arr[100][100];

    cout << "Enter number of rows and columns: ";
    cin >> row;
    cin >> column;

    cout << "Enter elements in array: " << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> arr[i][j];
        }
    }

    cout << "The sum of every ith column is: ";
    for(int i = 0; i < column; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }

}