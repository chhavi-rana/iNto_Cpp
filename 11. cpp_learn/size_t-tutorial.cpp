/* 
It’s a type which is used to represent the size of objects in bytes and is therefore used as the return type by the sizeof operator. 
It is guaranteed to be big enough to contain the size of the biggest object the host system can handle. 
Basically the maximum permissible size is dependent on the compiler; if the compiler is 32 bit then it is simply a typedef(i.e., alias) for unsigned int but 
if the compiler is 64 bit then it would be a typedef for unsigned long long. The size_t data type is never negative.

A type is ill-formed if its size cannot be expressed by size_t.

For returning sizes and lengths, this size_t is also returned by a variety of string and num functions, including strcspn(), memchr(), memcpy(), strlen(), and strspn().

size_t or any unsigned type might be seen used as loop variable as loop variables are typically greater than or equal to 0.
Mostley used to loop when using string functions, since for(int i = 0; i < strlen(k); i++) - here strlen is returning a size_t datatype, so we have
to convert int to size_t to compare the values which is not recommended.

 */

#include <iostream>
#include <stddef.h>
#include <stdint.h>

using namespace std;
 
int main(void)
{
    const size_t N = 100;
    int numbers[N];
    for (size_t ndx = 0; ndx < N; ++ndx)
        numbers[ndx] = ndx;
    cout << SIZE_MAX << endl;                          // 18446744073709551615
    size_t size = sizeof numbers;
    cout << size << endl;                              // 400
}