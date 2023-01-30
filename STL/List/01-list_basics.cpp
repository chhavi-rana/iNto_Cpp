/* 
    List corresponds to doubly linked list.
*/

#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> l;

    // List init

    list<int> l2{1, 2, 4, 8, 16};                          // 1-->2-->4-->8-->16-->

    l2.push_back(32);                                     // 1-->2-->4-->8-->16-->32-->

    l2.pop_front();                                      // 2-->4-->8-->16-->32-->

    list<string> fruits{"grapes", "pineapple", "apple", "watermelon", "banana"};

    // Sort
    fruits.sort();                                       // apple-->banana-->grapes-->pineapple-->watermelon-->

    // Reverse
    fruits.reverse();                                  // watermelon-->pineapple-->grapes-->banana-->apple-->

 
    // inserting element at a particular position
    list<string>::iterator it = fruits.begin();

    fruits.insert(it, "mangoes");                  // mangoes-->watermelon-->pineapple-->grapes-->banana-->apple-->

    for(auto x: fruits){
        cout << x << "-->";
    }

    cout << endl << fruits.size();                  // 6

    return 0;
}