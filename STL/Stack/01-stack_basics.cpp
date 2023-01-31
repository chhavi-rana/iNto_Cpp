/* 

Stack follows Last In First Out(LIFO) principle.

Examples of stacks in computing:
    Back/Forward stacks on browsers;
    Undo/Redo stacks in Excel or Word;
    Activation records of method calls;

There is no concept of indexing in stack.

Common Methods : push(), pop(), top(), empty() ;      --> All have O(1) time complexity.

Array, Dynamic array, vector or a linked list could be used internally to implement stack.

*/

#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<int> s;

    cout << "Is the stack empty: " << s.empty() << endl;               //    1

    //cout << s.top() << endl;        --> if stack is empty and we try to use top(), program terminates with SIGSEGV, Segmentation fault.

    s.push(2);

    cout << s.top() << endl;

    for(int i = 0; i < 3; i++){
        int x;
        cin >> x;
        s.push(x);
    }                                      // 8 7 6 2

    cout << s.top() << endl;               // 8

    s.pop();                              // 7 6 2

    // After popping :
    cout << s.top() << endl;             // 7

    cout << "Is the stack empty: " << s.empty() << endl;              // 0

    return 0;
}