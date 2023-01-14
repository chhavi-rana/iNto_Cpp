/* 
Namespace in cpp 

A namespace is a declarative region that provides a scope to the identifiers(names of variables, functions, types, etc..) inside it.

They are used to organise code into logical groups and to prevent name collisions that can occur especially when the code base includes multiple libraries.


Eg : std::cout and std::cin
    The prefix std:: indicates that the names cout and cin are defined inside the namespace named std.
    ::   --> Scope resolution operator --> It basically tells cout inside scope of standard library.

using namespace std  --> This statement tells program that whatever names are being used in program are from standard library.

Why using namespace std is a bad programming practice? --> https://www.geeksforgeeks.org/using-namespace-std-considered-bad-practice/

*/

#include<iostream>
using namespace std;

namespace Chhavi{
    int age = 22;
}

namespace KL_Rahul{
    int age = 30;
}

int main(){
    
   /* cout << age << endl;                    // Error - identifier age is undefined                   */                   
    cout << Chhavi::age << endl;               // 22   
    cout << KL_Rahul::age << endl;             // 30

    return 0;
}





