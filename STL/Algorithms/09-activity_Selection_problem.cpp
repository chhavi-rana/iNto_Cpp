/*
You are given n activities (from 0 to n-1) with their start and finish times. 
Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Input Format

The first line consists of an integer T, the number of test cases. 
For each test case, the first line consists of an integer N, the number of activities. 
Then the next N lines contain two integers m and n, the start and end time of each activity.

Constraints

1<=t<=50
1<=n<=10000
1<=A[i]<=100

Output Format
For each test case find the maximum number of activities that you can do.

Sample Input
1 
3
10 20
12 15
20 30

Sample Output
2

Sample Input
1 
5
3 4
1 2
5 6
3 8
2 3

Sample Output
4
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t){

        int n, x, y;
        cin >> n;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            cin >> x;
            cin >> y;
            v.push_back(make_pair(x, y));
        }

        sort(v.begin(), v.end());                           // sorting activities acc. to time
        
        int j = 1, st = 0, count = 1;
        while(j < n){
            
            if(v[j].first >= v[st].second){                  // next activity starting time should be greater than previous activiy end time.
                count++;
                st++;
            }
            j++;
        }
        cout << "Max number of activities: " << count << endl;

        t--;
    }

    return 0;
}