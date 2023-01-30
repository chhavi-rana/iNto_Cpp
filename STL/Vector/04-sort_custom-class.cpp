/*
    You are standing at the origin (0, 0)
    there are various cabs around you with coordinates (xi, yi)
    
    approach:
        make a vector of pair. to store the location
        if you want to make the car name too and make a car class.
        string, vector and custom class.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;

/* 
Approach - 1:

class Car{
    public:
    
        string name;
        pair<int, int> coordinate;
    
        Car(string name, pair<int, int> c){
            this->name = name;
            this->coordinate.first = c.first;
            this->coordinate.second = c.second;
        }
};

// custom comparator function
bool cmp(Car a, Car b){
    int d1 = (a.coordinate.first)*(a.coordinate.first) + (a.coordinate.second)*(a.coordinate.second);
    int d2 = (b.coordinate.first)*(b.coordinate.first) + (b.coordinate.second)*(b.coordinate.second);
    
    if(d1 == d2){
        return a.name < b.name;     // lexographically sorted
    }
    
    return d1 < d2;         // sort in ascending order of distance from origin
}

int main(){
    
    vector<Car> v;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        int x, y;
        cin >> x >> y;
        
        Car c(name, make_pair(x,y));
        v.push_back(c);
        
    }
    
    
    
    sort(v.begin(), v.end(), cmp);
    
    cout << "Sorted Order: " << endl;
    for(auto x : v){
        cout << x.name << " " << x.coordinate.first << " " << x.coordinate.second << endl;
    }
    
    return 0;
} 

*/

// Approach 2:
class Car{
    public:

        string name;
        int x, y;

        Car(string name, int x, int y){
            this->name = name;
            this->x = x;
            this->y = y;
        }

        int distance(){
            return pow(x, 2) + pow(y, 2) ;                   // Since (x - 0)*(x - 0) ---> everytime calculating distance from origin.
        }

};

bool cmp(Car a, Car b){
    int d1 = a.distance();
    int d2 = b.distance();
    
    if(d1 == d2){
        return a.name < b.name;     // lexographically sorted
    }
    
    return d1 < d2;         // sort in ascending order of distance from origin
}

int main(){
    
    int n;
    cin >> n;
    string name;
    // vector of custom class
    vector<Car> v;
    
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> name;
        cin >> x >> y;
        Car c(name, x, y);
        v.push_back(c);
    }

    sort(v.begin(), v.end(), cmp);
    cout << "sorted order : " << endl;
    for(auto c : v) {
        cout << c.name <<  " " << c.x << " " << c.y << " " << " : " << c.distance() << endl;
    }

    
    return 0;
}

/* 
Output -->
sorted order : 
c1 2 4  : 20
c3 2 4  : 20
c2 5 6  : 61
*/