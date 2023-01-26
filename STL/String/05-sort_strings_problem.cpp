/*

Given a list of 'n' strings S0,S1,S2,……,Sn-1, each consisting of digits and spaces, 
the number of spaces is the same for each entry, the goal is to implement a variation of a sort command. 

None of the strings contains consecutive spaces. Also, no string starts with a space nor ends with it. 
Spaces are used to divide string into columns, which can be used as keys in comparisons.

The program has to support the required parameters:
key: integer denoting the column used as a key in comparisons. The left-most column is denoted by 1.
reversed: boolean variable indicating whether to reverse the result of comparisons.
comparison-type: either lexicographic or numeric. Lexicographic means that we use Lexicographical order where for example (122 < 13) . 
Numeric means that we compare the strings by their numerical values, so (13 < 122) . 
If the comparison type is 'numeric' and numeric values of keys of Si and Sj are equal for i < j , then Si is considered strictly smaller than Sj because it comes first.

Input Format
In the first line, there is a single integer 'n' denoting the number of strings to sort. In the i-th of the following n lines there is a string Si.
In the last line, there are 3 space-separated values, denoting the values of variables 'key','reversed' , comparison-type.

Sample Input
3
92 022
82 12
77 13
2 false numeric

Sample Output
82 12
77 13
92 022

Explanation
The key for ordering is 2, reversal is false and ordering is numeric. 
Therefore, the keys 022, 12 and 13 should be ordered as 12, 13 and 022. Therefore, the final output is 82 12, 77 13 and 92 022.

*/

/* 

In simple words ‘lexicographically’ means ‘alphabetically ordered’. 
This is dictionary order.


*/
#include<bits/stdc++.h>
using namespace std;

string extractKey(string st, int key){
     

    /*     
    strtok requires char * array.
	so extract the underlying char array from the string objectS
	return the token at key specified

    char *s = strtok((char *)str.c_str(), " ");
	while(key > 1) {
		s = strtok(NULL, " ");
		key--;
	}

	return (string)s; 
    
    */

    char *str = (char*)st.c_str();
    if(key == 1){
        return strtok(str, "");
    }
    key --;
    char *ptr = strtok(str, " ");
    while(key--){
        ptr = strtok(NULL, " ");
        
    }
    char *d = ptr;
    string s = (string)(d);
    return s;    

}

bool compare(pair<string, string>s1, pair<string, string>s2){
    string a = s1.second;
    string b = s2.second;
    
    return stoi(a) < stoi(b);
}

bool lexiCompare(pair<string, string>s1, pair<string, string>s2){
    string a = s1.second;
    string b = s2.second;
    return a  < b;
}

int main(){
    
    int n;
    cin >> n;
    
    string arr[n];
    
    cin.get();
    for(int i = 0; i < n; i++){
        getline(cin, arr[i]);
    }
    
    int key;
    cin >> key;
    
    bool rev;
    cin >> rev;
    
    string  order;
    cin  >> order;
    
    pair<string, string> strpair[n];
    
    for(int i = 0; i< n; i++){
        strpair[i].first = arr[i];
        strpair[i].second = extractKey(arr[i], key);
    }
    
    if(order == "numeric"){
        sort(strpair, strpair + n, compare);
    }else if(order == "lexicompare"){
        sort(strpair, strpair + n, lexiCompare);
    }
    
    if(rev == true){
        reverse(strpair, strpair + n);
    }
    
    for(int i = 0; i < n; i++){
        cout << strpair[i].first  << endl;
    }
    
    return 0;
}