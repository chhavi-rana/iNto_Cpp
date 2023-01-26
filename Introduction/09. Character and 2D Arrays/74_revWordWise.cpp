/* Reverse Word Wise
Send Feedback
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
 */
#include<iostream>
using namespace std; 

void reverseOrderWords(char str[]) {
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    
    char a[100];
    int k = 0;
    for(int i = len - 1; i >= 0; i--){
        if(str[i] == ' '){
            int j;
            for( j = i + 1; str[j] > 96 && str[j] < 123; j++){
                a[k] = str[j];
                k++;
            }
            a[k] = ' ';
            k++ ;
        }
        else if(i == 0){
            int j;
            for(j = i; str[j] > 96 && str[j] < 123; j++){
                a[k] = str[j];
                k++;
            }
           
        }
    }
    a[len] = '\0';
    cout << a;
}

int main(){
    char str[100];
    cin.getline(str, 100);
    
    reverseOrderWords(str);
}