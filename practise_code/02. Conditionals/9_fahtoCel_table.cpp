/* Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values 
 from Start to End at the gap of W, into their corresponding Celsius values and print the table. */

 #include<iostream>
using namespace std;


int main(){

    int S, E, W, i;
    
    cin >> S >> E >> W;
    i = S;
    
    while(i < E+1){
        int k = ((5.0/9) * (i-32));
        cout << i << "\t"  << k << endl;
        i = i + W;    
    }
    return 0;
}