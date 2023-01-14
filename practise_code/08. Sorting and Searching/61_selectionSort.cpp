#include<iostream>
using namespace std;
#include<climits>

int main(){
    int arr[100], n, temp, k;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i = 0;
    while(i < n){
        int low = INT_MAX;
        for(int j = i; j < n; j++){
            if(arr[j] < low){
            low = arr[j];
            k = j;
            }

        }

        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;

        i++;
        
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}