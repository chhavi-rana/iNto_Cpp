// cin.get() takes input untill $ sign and also reads space characters unlike cin.

#include<iostream>
using namespace std;

int main(){
    int count = 0;
    char c;
    c = cin.get();
    while(c != '$'){
        count++;
        c = cin.get();
    }
    cout << count;
}