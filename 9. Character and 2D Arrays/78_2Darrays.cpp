

#include<iostream>
using namespace std;

int main(){
    int row, column;
    int arr[100][100];

    cin >> row;
    cin >> column;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cin >> arr[i][j];
        }
    }

    // Printing array rowwise
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Printing array columnwise
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            cout << arr[j][i] << " ";      // Very important line, print arr[j][i] since we have to keep column constant
        }
        cout << endl;
    }
}