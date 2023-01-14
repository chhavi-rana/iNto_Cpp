/* In-built functions for character array:

● strlen(string_name) : To calculate the length of the string

● strcmp(string1, string2) : Comparison of two strings returns an integer value. If it
returns 0 means equal strings. If it returns a positive value, it means that string2 is
greater than string1 and if it returns a negative value, it means that string1 is greater
than string2.

● strcpy(destination_string, source_string) : It copies the source_string to
destination_string.

● strncpy(destination_string, source_string, number_of_characters_to_copy): it
copies only a specified number of characters from source_string to
destination_string. */

#include<iostream>
using namespace std;
#include<cstring>

int main(){
/* 
    char input[100];
    cin >> input;

    int len = strlen(input);
    cout << len;
 */

    /*
    char input1[100], input2[100];
    cin >> input1;
    cin >> input2;
    cin >> input3;
 
    cout << "Input1: " << input1 << endl;
    cout << "Input2: " << input2 << endl;
    cout << endl;
    cout << "After copying: " << endl;
    cout << endl;

    strcpy(input1, input2);
    strcpy(input3, "hello");

    cout << "Input1: " << input1 << endl;
    cout << "Input2: " << input2 << endl;
    */

    /* 
    char input1[100], input2[100];
    cin >> input1;
    cin >> input2;

    if(strcmp(input1, input2) == 0){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    } 
    */

    char input1[100], input2[100];
    cin >> input1;
    cin >> input2;

    cout << "Input1: " << input1 << endl;
    cout << "Input2: " << input2 << endl;

    strncpy(input1, input2, 1);

     cout << "After copying: " << endl;

    cout << "Input1: " << input1 << endl;
    cout << "Input2: " << input2 << endl;

}