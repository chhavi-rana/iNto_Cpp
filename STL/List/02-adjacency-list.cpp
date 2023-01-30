/*  
Adjacency list - represents graphs as an array of linked lists.
*/

#include<iostream>
#include<list>

using namespace std;

int main(){

    list<pair<int, int>> *listArr;

    int vertices;
    cin >> vertices;

    listArr = new list<pair<int, int>>[vertices];

    int edges;
    cin >> edges;

    for(int i = 0; i < edges; i++){
        int x, y, wt;
        cin >> x >> y >> wt;

        listArr[x].push_back(make_pair(y, wt));
        // Since list is bidirectional
        listArr[y].push_back(make_pair(x, wt));

    }
    // Print the linked lists:
    for(int i = 0; i < vertices; i++){
        cout << "linked list " << i << " -->";
        for(auto ip: listArr[i]){
            cout << "(" << ip.first << "," << ip.second <<")" <<  " , ";
        }
        cout << endl;
    }

    return 0;
}


/* 

3
3
0 1 4
0 2 3
1 2 4
linked list 0 -->(1,4) , (2,3) , 
linked list 1 -->(0,4) , (2,4) ,
linked list 2 -->(0,3) , (1,4) ,

*/
