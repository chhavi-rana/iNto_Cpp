#include <iostream>
using namespace std;

template<class T>

class Vector{
    public:
        int index;
        int capacity;
        T *arr;
        
        Vector(){
            index = 0;
            capacity = 1;
            arr = new T[capacity];
        }
        
        void pushBack(T element){
            if(index == capacity){
                capacity *= 2;
                T *oldArr = arr;
                arr = new T[capacity];
                for(int i = 0; i < index; i++){
                    arr[i] = oldArr[i];
                }
                delete [] oldArr;
            }
            arr[index] = element;
            index++;
        }
        
        int sizeFunction(){
            return index;
        }
        
        void popBack(){
            if(index == 0){
                cout << "No elements present, pop operation not possible." << endl;
                return;
            }
            index-- ;
        }
        
        int operator[](T i) {
            return arr[i];
        }
        
    
    
};

int main()
{
    Vector<int> v;
    v.pushBack(1);
    v.pushBack(2);
    v.pushBack(3);
    v.popBack();
    cout << "Size " << v.sizeFunction() << endl;
    for(int i = 0; i < v.sizeFunction(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pushBack(2);
    v.pushBack(3);
    v.pushBack(4);
    cout << "Size " << v.sizeFunction() << endl;

    
    return 0;
}