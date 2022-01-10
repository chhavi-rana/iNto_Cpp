/* Problem
Result
Print 2D array
Send Feedback
Given a 2D integer array with n rows and m columns.
Print the oth row from input n times, 1st row n-1
times.....(n-1)th row will be printed 1 time.
Input format :
Line 1: No of rows(n) & No of columns(m)
(separated by space)
Line 2: Row 1 elements (separated by space)
Line 3 : Row 2 elements (separated by space)
Line 4: and so on
Sample Input :
33
1 2 3
4 5 6
7 8 9
Sample Output:
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
7 8 9
 */

#include<iostream>
using namespace std;

void print2DArray(int arr[][100], int nRows, int mCols){
    cout << "Output: " << endl;
    for(int i = 0; i < nRows; i++){
        int k = 0;
        while(k != nRows - i){
            for(int j = 0; j < mCols; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
            k++;
        }
    }
}

int main(){

    int nRows, mCols;
    int arr[100][100];

    cout << "Enter number of rows and columns: ";
    cin >> nRows >> mCols;

    for(int i = 0; i < nRows; i++){
        for(int j = 0; j < mCols; j++){
            cin >> arr[i][j];
        }
    }    

    print2DArray(arr, nRows, mCols);
}