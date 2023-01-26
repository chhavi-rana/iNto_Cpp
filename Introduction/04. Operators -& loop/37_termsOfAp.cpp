/* ms of AP

Write a program to print first x ms of the series 3N + 2 which are not multiples of 4.
input format :
integer x
Output format :
ms of series (separated by space)
Constraints :
1 <= x <= 1,000
Sample input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41
Sample input 2 :
4
Sample Output 2 :
5 11 14 17 */

#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter x: ";
    cin >> x;

    int term, N = 1, count = 1, unDiv;
    while(count <= x){
        term = 3 * N + 2;
        if(term % 4 != 0){
            unDiv = term;
            count++;  
            cout << unDiv << " ";
        }
        
        N++;
    }
}