#include<iostream>
using namespace std;

int main(){

    // similar to dictionary in python.
    pair<int, int> p1;

    p1.first = 10;
    p1.second = 20;

    cout << p1.first << " : " << p1.second << endl;

    pair<string, pair<int, int>> car;

    car.first = "nexon";
    car.second.first = 1;
    car.second.second = 2;

    cout << car.first << " : " << car.second.first << " : " << car.second.second << endl;

    // Another way

    pair<int, int> p2 = make_pair(11, 12);
    
    cout << p2.first << " : " << p2.second << endl;

    return 0;
}