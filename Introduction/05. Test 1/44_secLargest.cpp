/* Second Largest

Take input a stream of n integer elements, find the
second largest element present.
The given elements can contain duplicate
elements as well. If only 0 or 1 element is given,
the second largest should be INT_MIN (-2131 ).
Input format :
Line 1: Total number of elements (n)
Line 2: N elements (separated by space)
Sample Input 1:
4
3909
Sample Output 1:
3
Sample Input 2:
2
44
Sample Output 2:
-2147483648
Sample Output Explanation:
Since both the elements are equal here, hence
second largest element is INT_MIN i.e. (-2^31 ) */





#include<iostream>
using namespace std;

int main(){
    int N, cN, prevNum, largest, secLargest, count = 0;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter stream of elements: ";
    cin >> prevNum;
    cin >> cN;
    if(cN > prevNum){
            largest = cN;
            secLargest = prevNum;
    }
    else if(prevNum > cN){
            largest = prevNum;
            secLargest = cN;
    
    }
    else if(prevNum == cN){
        count++;
    }
    prevNum = cN;
    int i = 0;
    while(i < N - 2){
        cin >> cN;
        if(cN > largest){
            secLargest = largest;
            largest = cN;
        }
        else if(cN < largest && cN > secLargest){
            secLargest = cN;
        }
        else if(prevNum == cN){
            count++;
        }
    prevNum = cN;    
    i++;    
    }
    if(count == N - 2 || count == N - 1){
        cout << -2147483648;
    }else{
            cout << "THe second largest element is " << secLargest;
    }
    return 0;
}