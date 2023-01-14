/* Problem
Result
Pyramid Number Pattern
Send Feedback
Print the following pattern for the given number of
rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
5
Sample Output:

   1
   212
  32123
 4321234
543212345
 */

#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;

    int i = 1;
    while (i <= N)
    {
        int space = 1;
        while(space <= N - i){
            cout << " ";
            space++;
        }

        int j = 1;
        int val = i;
        while(j <= i){
            cout << val;
            j++;
            val--;
        }

        int k = 1;
        while(k <= i - 1){
            cout << k+1;
            k++;
        }
        
        cout << endl;
        i++;

    }
    return 0;
}