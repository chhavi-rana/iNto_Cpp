#include<iostream>
#include<vector>

using namespace std;

int main(){

    // Vector init

    vector<int> v = {1,2,3,4,5};
    vector<int> v2(v);
    vector<int>v3(5,10);     // 5 times value 10 in vector --> {10, 10, 10, 10, 10}
    
    //Iteration on vector
    cout << "Vector v3: " << endl;
    for(int i = 0; i < 5; i++){
        cout << v3[i] << " ";
    }
    cout << endl;

    cout << "Vector v2: " << endl;
    for(auto it = v2.begin(); it != v2.end(); it++ ){
        cout << *it << " ";
    }
    cout << endl;

    cout << "Vector v: " << endl;
    // For each loop
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;

    // User INput 
    cout << "Enter no of elements: " << endl;
    int n;
    cin >> n;

    vector<int> v4;

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        v4.push_back(val);
    }

    // Comparison between v and v4: 

    cout << v.size() << endl;                      // 5
    cout << v.capacity() << endl;                 //  5       {Since initialised with 5 elements only}
    cout << v.max_size() << endl;                //   2305843009213693951      {max. no. of elements vector can hold in the worst case acc. to available memory in the system}


    cout << v4.size() << endl;                    // 5
    cout << v4.capacity() << endl;               //  8      {Since pushback doubles its size, so after 4 element, it doubles itself to 8}
    cout << v4.max_size() << endl;              // 2305843009213693951


    return 0;
}