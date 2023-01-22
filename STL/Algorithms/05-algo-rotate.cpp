#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v = {1, 2, 3, 4, 5, 6};

    // start, middle, end
    // rotate about the middle.
    // ie. middle elements onwards bring it forward.
    // middle is just a name, could be any position bw begin and end.

    rotate(v.begin(), v.begin() + 4, v.end());

    for(int x : v){
        cout << x << " ";                           // 5, 6, 1, 2, 3, 4
    }
    cout << endl;

    vector<int> z = {1, 2, 3};

    // next permutation lexographically.

    next_permutation(z.begin(), z.end());                          // 1 3 2
    next_permutation(z.begin(), z.end());                         //  2 1 3
    next_permutation(z.begin(), z.end());                        //   2 3 1
    next_permutation(z.begin(), z.end());                       //    3 1 2


    for(int x: z){
        cout << x << " ";
    }

    return 0;
}