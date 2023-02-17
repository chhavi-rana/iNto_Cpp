/* 

Maps are associative containers that store elements in a mapped fashion. 
Each element has a key value and a mapped value. No two mapped values can have the same key values.
Map keeps all the keys in sorted order always.
Maps are implemented by self-balancing search trees. In C++ STL it uses Red-Black Tree.

 */

#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string, int> mp;

    // Inserting elements 
    mp.insert(make_pair("chhavi", 21));

    mp.insert({"Naruto", 30});

    pair<string, int> p;

    p.first = "kl";
    p.second = 30;

    mp.insert(p);

    mp["sakura"] = 29;                  // O(log(n))


    // Search
    auto it = mp.find("sakura");          // O(log(n))
    if(it != mp.end()){
        cout << it->second << endl;
    }else{
        cout << "NO VALUE" << endl;
    }
    

    // Erase
    // mp.erase(it);                       // O(log(n))
    // mp.erase("Sakura");                // Removes the key value sakura from map.


    // Traverse through the map

    for(auto x: mp){
        cout << x.first << " " << x.second << endl;
    }

    cout << "MEthod-2: for traversing" << endl;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    /* 
    chhavi 21
    kl 30
    sakura 29
     */

    // size() – Returns the number of elements in the map.
    cout << "Number of elements in map: " << mp.size() << endl;

    // clear() – Removes all the elements from the map.
    // mp.clear();

    return 0;
}