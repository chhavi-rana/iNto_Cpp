// C++ program to calculate the length of string.

#include<iostream>
using namespace std;

int stringLength(char name[]){

    int count = 0;
    for(int i = 0; name[i] != 0; i++){
        count++;
    }

    return count;
}

int main(){
    char name[100];

    cout << "Enter a string: ";
    cin >> name;
    cout << "Entered string is: " << name << endl;
    cout << "Array length is: " << stringLength(name);
}