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
    // list<string>::iterator it = fruits.begin() + 3; --> INcorrect since list underlying memory is not linear like vector.
    // indexing is not allowed in linked list. 
    /* 
    To do that particular option :
        list<string>::iterator it = fruits.begin();
        it++;
        it++;
        it++;
    */


    fruits.insert(it, "mangoes");                  // mangoes-->watermelon-->pineapple-->grapes-->banana-->apple-->

    

    fruits.insert(it, "guava");
    it = fruits.end();
    fruits.insert(it, "guava");

    // mangoes-->guava-->watermelon-->pineapple-->grapes-->banana-->apple-->guava-->

     /* removes all the occurences of the word. */
    fruits.remove("guava");

    for(auto x: fruits){
        cout << x << "-->";
    }
    // mangoes-->watermelon-->pineapple-->grapes-->banana-->apple-->

    cout << endl << fruits.size();                  // 6

    return 0;
}