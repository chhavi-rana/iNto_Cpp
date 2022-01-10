// C++ program to check what is the output of this program. ----> Realted to scope of the variables

/*     int main(){
        int a  = 10;
        cout << a << "aa ";
        while(a > 5){
            cout << a << "chh ";
            int a = 1;
            cout << a << "ki ";
            a--;
            cout << a << "to ";
        }
        cout << a << "little";
    } */

// To understand how this program works, run the above commented program. swad aa jaygaa :)

    #include<iostream>
    using namespace std;

    int main(){
        int a  = 10;
        while(a > 5){
            int a = 1;
            cout << a << " ";
            a--;
        }
    }

