/* Only P-0 features implemented for vector class. */

#include <iostream>
using namespace std;

template<class T>

class Vector{
    int index;
    int capacity;
    T *arr;

    public:
        
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
    try {
        Vector<int> v;
        v.pushBack(1);
        v.pushBack(2);
        v.pushBack(3);
        v.popBack();
        
        std::cout << "Size: " << v.size() << std::endl;
        for (const auto& elem : v) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;

        v.pushBack(2);
        v.pushBack(3);
        v.pushBack(4);

        std::cout << "Size: " << v.size() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    
    return 0;
}
