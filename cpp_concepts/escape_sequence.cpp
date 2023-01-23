/* 

The backslash (\) escape character turns special characters into string characters:

Escape          character	        Result-Description
\'	                '	                 Single quote
\"	                "	                 Double quote
\\ or \b	        \	                 Backslash
\n                                       New line 
\t                                       Tab
\?                  ?                    Question mark
\0                                       Null character (Represents termination of string) 


An escape sequence is a sequence of characters used in formatting the output and are not displayed while printing text on to the screen, each having its own specific function. 

*/


#include<iostream>
using namespace std;


int main(){

    /* cout << "Hello, "Chhavi"";                           // compiler error */
    
    
    cout << "Hello, \"Chhavi\". " << endl;                  // Hello, "Chhavi".

    return 0;
}