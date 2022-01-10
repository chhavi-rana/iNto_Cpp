// C++ Program to print a pattern: 
/* 
1
12
123
1234
12345
......
.......
........
..........upto n 
*/

#include<iostream>
using namespace std;
int main(){

int n, i = 1;

cout << "Enter n: ";
cin >> n;

while(i <= n){
    int j = 1;
    while(j <= i){
        cout << j;
        j = j + 1;
    }
    cout << endl;
    i = i + 1;
}
}

