/*

 You are standing at the origin (0, 0)
    there are various cabs around you with coordinates (xi, yi)
    Sort them to find the order of cabs near to you (sorting - based on distance)

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// custom comparator function
bool cmp(pair<int, int>a, pair<int, int>b){
    int d1 = (a.first)*(a.first) + (a.second)*(a.second);
    int d2 = (b.first)*(b.first) + (b.second)*(b.second);
    
    if(d1 == d2){
        return a.first < b.first;     // the car with lesser x coordinate
    }
    
    return d1 < d2;         // sort in ascending order of distance from origin
}

int main(){
    
    vector<pair<int, int>> coordinate;
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x;
        cin >> y;
        
        coordinate.push_back(make_pair(x, y));
    }
    
    sort(coordinate.begin(), coordinate.end(), cmp);
    
    cout << "Sorted Order: " << endl;
    for(auto x : coordinate){
        cout << x.first << " " << x.second << endl;
    }
    
    return 0;
}