/* 

Given a array of n positive integers where each integer can have digits upto 106, print the array elements in ascending order. 
 

Input: arr[] = {54, 724523015759812365462, 870112101220845, 8723} 
Output: 54 8723 870112101220845 724523015759812365462
Explanation:
All elements of array are sorted in non-descending(i.e., ascending)
order of their integer value

Input: arr[] = {3643641264874311, 451234654453211101231,
                4510122010112121012121}
Output: 3641264874311 451234654453211101231 4510122010112121012121
 

Recommended: Please try your approach on {IDE} first, before moving on to the solution.
A naive approach is to use arbitrary precision data type such as int in python or Biginteger class in Java. But that approach will not be fruitful because internal conversion of string to int and then perform sorting will leads to slow down the calculations of addition and multiplications in binary number system.
Efficient Solution : As size of integer is very large even it can’t be fit in long long data type of C/C++, so we just need to input all numbers as strings and sort them using a comparison function. Following are the key points compare function:- 
 

If lengths of two strings are different, then we need to compare lengths to decide sorting order.
If Lengths are same then we just need to compare both the strings in lexicographically order.
Assumption : There are no leading zeros. 

*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2) {
    if(s1.length() == s2.length()) {
        return s1 < s2; // lewxographically.
    }
    return s1.size() < s2.size(); // .length() and .size() works the same.
}

void bigSort(string str[], int n) {
    
    sort(str, str + n, compare);
    for(int i = 0; i < n; i++) {
        cout << str[i] << " ";
    }
    cout << endl;
}

int main() {

    string s[] = {"54443434343434", "724523015759812365464343432", 
                    "8701121012208333333333333345", "872434343", "1", "0", "100", "1000"};
    int n = sizeof(s) / sizeof(s[0]);
    cout << "Original string : " << endl;
    for(auto i : s) {
        cout << i << " ";
    }        
    cout << "\nSorted string : " << endl;
    bigSort(s, n);
    return 0;
}
/* 

Time complexity: O(sum * log(n)) where sum is the total sum of all string length and n is size of array 
Auxiliary space: O(n) 

*/