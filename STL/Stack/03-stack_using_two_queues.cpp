/* Implement a stack using two queues. */

/*

    push --> O(1) store the element in the non-empty queue.
    pop --> O(n) move n-1 elements into empty queue and pop the last element.
    top --> O(n) move n-1 elements into empty queue and push the last element in the other queue.
    empty --> O(1)
    time complexity of push and pop can be interchanged
    if while pushing we juggle the elements between 2 queues.

*/
#include<iostream>
#include<queue>
using namespace std;
template<class T>

class Stack{
    public:
        queue<T> q1, q2;

        void Push(T element){
            q1.push(element);
        }

        void Pop(){
            
            while(q1.size() > 1){
            // remove the last added element from q1
            // pop n-1 elements from q1 and add it to q2, so that last element gets leftout(pop->stack->lifo)
            // interchange the names of q1 and q2, call swap method.
            
                if(q1.empty()) { 
                    // underflow, no element to pop.
                    return; 
                }
                
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop(); // the last element is popped.
            // swap q1 and q2.
            q1.swap(q2);
        }

        int Top(){
            
            if(q1.empty()) {
                return -1;
            }
            
            return q1.back() ;
        }

        bool isEmpty(){
            return q1.empty();
        }
        
        int size() {
            return q1.size() + q2.size();
        }
};
   
int main(){

    
    Stack<int> s;
    
    cout << s.isEmpty() << endl;;                // 1
    s.Push(2);                                  //  2
    
    cout << s.isEmpty() << endl;                                  //    0
    
    s.Push(3);                                                  //   2 3
    s.Push(233);                                               //    2 3 233
    
    cout << s.Top() << endl;                                 //     233
    
    s.Pop();                                                //     2 3                   
    cout << s.Top() << endl;                               //      3
    

    return 0;
}