#include<iostream>
#include<cstring>

using namespace std;

void stringTokenizer( char s[], char delimiters){
   
   int i = 0, startRead = 0;
   while(s[i] != '\0'){
        if(s[i] == delimiters){
            s[i] = '\0';
            for(int j = startRead; j < i; j++){
                cout << s[j];
            }
            startRead = i + 1;
            cout << endl;
        }
        i++;
    }
    for(int j = startRead; j < i; j++){             // for printing the last word.
                cout << s[j];
    }
}

int main(){

    char s[100] = "Today is a sunny day. couldn't we have multiple delimiters";

    stringTokenizer(s, ' ');

    return 0;
}

/* 
Output :

Today
is
a
sunny
day.
couldn't
we
have
multiple
delimiters 

*/