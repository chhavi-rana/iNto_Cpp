// C++ Program to pass a 2D array to a function.

#include<iostream>
using namespace std;

void printArray(int arr[][100], int row, int col){

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int row, col;
    cin >> row;
    cin >> col;

    int arr[100][100];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }

    printArray(arr, row, col);
}