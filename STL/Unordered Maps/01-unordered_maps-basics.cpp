/* 
Resources : https://www.scaler.com/topics/unordered_map-cpp/

Data insertion in an unordered_map is done using a hash function. 
The hash function generates a unique hash value for the key in the key-value pair, 
and this key-value pair is inserted in the unordered_map at the index same as the hash value.

When we search data in an unordered_map, the hash value corresponding to the searched key is generated, 
and the key-value pair at this hash value index is extracted from the unordered_map.

The best case, average case, and worst case time complexity of all the operations in an unordered_map are O(1), O(1), and O(n), respectively. 
TC: O(N) occur on repetitive collisions and rehashing. 

While in the case of a map, the time complexity of all the operations is O(log(n)) in all the cases (Best, Average and Worst).

 */

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string, int> mp;

    // Inserting elements 
    mp.insert(make_pair("chhavi", 21));

    mp.insert({"Naruto", 30});

    pair<string, int> p;

    p.first = "kl";
    p.second = 30;

    mp.insert(p);

    mp["sakura"] = 29;                  // O(1)


    // Search
    auto it = mp.find("sakura");          // O(1)
    if(it != mp.end()){
        cout << it->second << endl;
    }else{
        cout << "NO VALUE" << endl;
    }
    

    // Erase
    // mp.erase(it);                       // O(1)
    // mp.erase("Sakura");                // Removes the key value sakura from map.


    // Traverse through the map

    for(auto x: mp){
        cout << x.first << " " << x.second << endl;
    }

    cout << "MEthod-2: for traversing" << endl;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    /* (not sorted)
    kl 30
    Naruto 30
    chhavi 21   
     */

    // size() – Returns the number of elements in the map.
    cout << "Number of elements in map: " << mp.size() << endl;

    // clear() – Removes all the elements from the map.
    // mp.clear();

    return 0;


}