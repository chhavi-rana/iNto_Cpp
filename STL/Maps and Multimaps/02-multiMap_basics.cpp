/* 

Multimap is similar to a map with the addition that multiple elements can have the same keys. 
Multimap keeps all the keys in sorted order always.


Also, it is NOT required that the key-value and mapped value pair have to be unique in this case. 
    m["apple"] = 20;
    m["apple"] = 50;

The operations work in O(logn) time. [Self-balancing BST]
    insert
    find
    erase

 */

#include<iostream>
#include<map>
using namespace std;

int main(){

    multimap<char, string> mp;

    int n;
    cin >>n;
    for(int i = 0; i < n; i++){
        char x;
        string y;

        cin >> x >> y;
        mp.insert(make_pair(x,y));                      // take input in multimap
    }

    // Traverse through multimap
    for(auto x: mp){
        cout << x.first << " " << x.second << endl;
    }

    // delete the first key->value pair
    auto it = mp.begin();
    mp.erase(it); 

    

}