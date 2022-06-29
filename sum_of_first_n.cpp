/* Date: 29 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void sum_of_first_n(int i, int sum){
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }

//     sum_of_first_n(i-1, sum+i);
// }

int sum_of_n(int n){
    if(n<=0) return 0;
    return n + sum_of_n(n-1);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int val; cin>>val;
    // sum_of_first_n(val, 0);
    cout<<sum_of_n(val);

    return 0;
}