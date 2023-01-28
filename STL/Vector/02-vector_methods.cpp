/* Vector Methods in cpp */

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v = {1, 2, 3, 14, 25};

    // Push back O(1) most of time, unless incase of doubling the vector
    v.push_back(36);                           // 1 2 3 14 25 36

    // pop back O(1) - Removes the last element
    v.pop_back();                              // 1 2 3 14 25

    // Insert element at the some index
    v.insert(v.begin() + 2, 8);                // 1 2 8 3 14 25
    
    v.erase(v.begin() + 2);                    // 1 2 3 14 25
    v.erase(v.begin(), v.begin() + 2);        // 3 14 25
    
    cout << v.front() << endl;                 // 3
    cout << v.back() << endl;                 // 25
    
    cout << "Size: " << v.size() << endl;              // 3
    cout << "Capacity; " << v.capacity() << endl;     // 10
    
    for(int x : v){
        cout << x << " ";
    }
    
    // reserve, use this to avoid doubling of memory allocation
    vector<int> v2;
    v2.reserve(100);
    // we will observe no change in capacity and the value of capacity will be 100
    for(int i = 0; i < 5; i++) {
        v2.push_back(i);
        cout << "current size : " << v2.size() << endl; 
        cout << "current capacity : " << v2.capacity() << endl;
    }
    

    return 0;
}