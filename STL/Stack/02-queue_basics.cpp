/* 


    Queue follows FIFO (First In First Out) principle.

    Elements are added from the back and deleted from the front.
    
    Examples :
    whatsapp message queing ordering is important.
    sender who sent first should be received first.
    network buffer queues.
    A printer queue;
    An input stream;

    various common operations on queue are :
    1) push
    2) pop
    3) front
    4) empty
    
    There is no concept of indexing in queue.
 

*/

#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<int> q;

    for(int i = 0; i < 5; i++){
        q.push(i);
    }

    while(!q.empty()){
        cout << q.front() << " ,";             0 ,1 ,2 ,3 ,4 ,
        q.pop();
    }

    return 0;
}