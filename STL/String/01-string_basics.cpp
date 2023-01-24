/* 

String class is a way to create objects for sequence of characters. It is a alternative for character arrays.

The string class stores the characters of a string as a collection of bytes in contiguous memory locations.

Comparison	           |                       String	                            |       Character Array
                       |                                                            |
Access Speed           |                Slow                                        |           Fast 
                       |                                                            |
Array Decay            |        Array decay (loss of the type and dimensions        |
                       |        of an array) is impossible.                         |        Array decay might occur. 
                       
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

    // String init

    string s0;
    string s1("I'm back");
    string s2 = "Surprised!";
    string s3(s2);
    string s4 = s3;

    char a[] = {'a', 'b', 'c', '\0'};

    string s5(a);

    cout << s0 << endl;                                 // Null String
    cout << s1 << endl;                                 // I'm back
    cout << s2 << endl;                                 // Surprised!
    cout << s3 << endl;                                 // Surprised!
    cout << s4 << endl;                                 // Surprised!
    cout << s5 << endl;                                 // abc


    if(s0.empty()){
        cout << "s0 is empty" << endl;                    // s0 is empty
    }

    // Append
    s0.append("Apple");
    cout << s0 << endl;                                   // apple

    s0 += " and bananas";
    cout << s0 << endl;                                   // apple and bananas

    // Remove
    cout << "Before removing: " << s0.length() << endl;                        // 17
    s0.erase();
    cout << "After removing: " << s0.length() << endl;                        // 0


    // Compare two strings

    string str1 = "Apple" ;
    string str2 = "Banana";

    // 0 : if both strings are equal
    cout << str1.compare(str2) << endl;                                  // -1     


    // Find substrings
    string big = "I love to watch animes and my favorite is Naruto.";
    int index = big.find("anime") ;                                         // 16
    cout << index << endl;

    // Remove a word from a string
    string word = "anime";
    int len = word.length();
    cout << big << endl;                      // I love to watch animes and my favorite is Naruto.
    big.erase(index, len);
    cout << big << endl;                      // I love to watch  and my favorite is Naruto.


    // Iterate over the string
    for(int i = 0; i < big.length(); i++){
        cout << big[i] << ":";                 // I: :l:o:v:e: :t:o: :w:a:t:c:h: : :a:n:d: :m:y: :f:a:v:o:r:i:t:e: :i:s: :N:a:r:u:t:o:.:
    }
    cout << endl;

    // Iterators
    for(auto it = big.begin(); it != big.end(); it++) {
        cout << *it << "~";                      // I~ ~l~o~v~e~ ~t~o~ ~w~a~t~c~h~ ~ ~a~n~d~ ~m~y~ ~f~a~v~o~r~i~t~e~ ~i~s~ ~N~a~r~u~t~o~.~
    }
    cout << endl;

    // Enhanced for loop
    for(auto x: big){
        cout << x << "-";                    // I- -l-o-v-e- -t-o- -w-a-t-c-h- - -a-n-d- -m-y- -f-a-v-o-r-i-t-e- -i-s- -N-a-r-u-t-o-.-
    }
    cout << endl;


    return 0;
}