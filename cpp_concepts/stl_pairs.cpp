// STL is a compilation of algorithms, containers, iterators and functions in the minimised manner.

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    pair<int, int>key = {1,2};
    cout << key.first << endl;       // 1 
    cout << key.second << endl;      // 2
    
    pair<int, pair<int, int>>tri = {1, {2,3}};
    cout << tri.first << endl;             // 1 
    cout << tri.second.first << endl;      // 2
    cout << tri.second.second << endl;    // 3
    
    
    // forming a array of type pair<int, int>
    
    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].first << endl;                    // 3 
    cout << arr[2].second << endl;                   // 6
    
    return 0;
}