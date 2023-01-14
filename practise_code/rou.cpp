#include<iostream>
using namespace std; 
/* int main(){
    float a = 12.13;
    float b = 12.13f;
    double c = 12.13;
    double d = 12.13f;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    char k = 19990;
    cout << k << endl;
} */



/*     int main(){
        int i  = 10;
        while(i > 5){
            int i = 1;
            cout << i << " ";
            i--;
        }
    } */


/* void func(int a) {
int b = 10;
a = b + 10;
cout << a <<" ";
}

int main() {
int a = 10;
func(a);
cout <<a<<" ";
} */

 
// Merge arr1[0..n1-1] and arr2[0..n2-1] into
// arr3[0..n1+n2-1]

/* int main(){
    int arr[255];
    char input[100];
    cin >> input;
    int k = input[0];
    cout << k;
} */	
/* #include<iostream>

int main()
{
    
    int a = 65;
    char charA = 65;
    char charB = 'B';
    float answer = 0;
    char charC = 67;
    int integer = 80;
    float floatNumber = 0.0;
    
    std::cout<<"a = "<<a<<"\n";
    std::cout<<"charA = "<<charA<<"\n";
    std::cout<<"charB = "<<charB<<"\n";
    
    //we can assign an integer to a float
    floatNumber = integer;
    std::cout<<"integer = "<<integer<<"\n\n";
    std::cout<<"floatNumber = integer = "<<floatNumber<<"\n";
    
    //we can assign a char to a float
    floatNumber = charB;
    std::cout<<"floatNumber = charB = "<<floatNumber<<"\n";  
    
    answer = floatNumber/4;
    std::cout<<"answer = floatNumber/4 = "<<answer<<"\n"; 
    
    //But assigning a float to a char doesn't quite work
    charC = answer;
    std::cout<<"charC = answer = "<<charC<<"\n";
    
    //assigning a float to an interger, results in the float being truncated
    integer = answer;
    std::cout<<"integer = floatNumber = "<<integer<<"\n";   
    return 0;
} */




typedef long long ll;
int main(){
    int a, b, c, 
    ll count = 0;
    cin >> a >> b >> c;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                int num = i * j * k;
                
                for(int m = 1; m <= num; m++){
                    if(num % m == 0)
                        count++;
                }
                
            }
        }
    }
    cout << count;
    return 0;
}