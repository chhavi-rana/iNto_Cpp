/*  STL is a compilation of algorithms, containers, iterators and functions in the minimised manner.

Pair in C++ is a container that combines two elements of same or different types. 

Syntax : pair <data_type1, data_type2> pair_name;

Header file for pair in c++ is <utility>.

Pairs can be assigned, compared and copied.

First element is referenced as first and second element is referenced as second and the order is fixed (first, second,).

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    pair<int, int>key = {1,2};
    cout << key.first << endl;       // 1 
    cout << key.second << endl;      // 2
    
    // Nested Pairs
    pair<int, pair<int, int>>tri = {1, {2,3}};
    cout << tri.first << endl;             // 1 
    cout << tri.second.first << endl;      // 2
    cout << tri.second.second << endl;    // 3

    // make_pair function
    pair<int, string> p1 = make_pair(1,"one");
    pair<int, string> p2 = make_pair(2, "two");
    
    // swap function
    p1.swap(p2);

    cout << p2.first << endl;        // 1
    cout << p1.first << endl;        // 2
    
    // forming a array of type pair<int, int>
    
    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].first << endl;                    // 3 
    cout << arr[2].second << endl;                   // 6
    
    return 0;
}