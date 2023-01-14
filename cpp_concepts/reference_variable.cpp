/* 
Reference Variables in cpp
When a variable is declared as reference it becomes an alternative name for an existing variable. 
*/

#include<iostream>

int main(){
    std::cout << "Reference variables in cpp" << std::endl;

    int x = 10, y = 20;
    int &ref_val = x;  // ref_val is a reference variable to val.

    std::cout << x << std::endl;                       // 10
    std::cout << ref_val << std::endl;                   // 10


    x++;
 
    std::cout << x << std::endl;                            // 11
    std::cout << ref_val << std::endl;                        // 11 (we just increased val, but ref_val also got increased. since both point to same memory location.)
    
    std::cout << "Memory location to which ref-variable points is: " << &ref_val << std::endl;          //  0x61fe0c
    std::cout << "ref_val = " << ref_val << std::endl;  // 11

    // Checking if we could change the variable to which ref_val points by equating it with y
    ref_val = y;

    std::cout << "Memory location to which ref-variable points after equating ref_val with y is: " << &ref_val << std::endl;   // 0x61fe0c
    std::cout << "ref_val = " << ref_val << std::endl;   // 20

    // Main Observation : 
    // ** It still points to memory location of x, although it copies the value from variable y. **
    

    return 0;
}
