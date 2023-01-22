#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(coins)/sizeof(coins[0]);
    int money ;
    cin >> money ;                                  // 1680
    int count = 0;
    
    while(money){
        auto lb = upper_bound(coins, coins + n, money);
        auto it = lb - 1;
        //cout << *it << endl;
        if(money == 1){
            money = 0;
        }else{
            money = money - (*it);
        }
        
        count++;
        // cout << money << endl;
    }

    
    /* 1180(500) 680(500) 180(500) 80(100) 30(50) 10(20) 0(10) */


    cout << "Minimum number of coins required: " << count << endl;          // 7
} 