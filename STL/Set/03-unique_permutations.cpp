/* Print all the unique permutations of the input string. */

#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}

int main(){
    
    set<string> s;
    
    string str;
    
    cin >> str;
    s.insert(str);
    int sizeOfString = str.size();
    int fact = factorial(sizeOfString) - 1;
    while(fact--){
        next_permutation(str.begin(), str.end());
        s.insert(str);
    }
    
    cout <<  "Number of permutations: " << s.size() << endl;
    
    for(string x: s){
        cout << x << endl;
    }
    
    return 0;
}