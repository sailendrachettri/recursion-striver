/* Date: 27 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_n_times(int n){
    if(n<1) return;
    cout<<n--<<endl;
    print_n_times(n);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin>>n;
    print_n_times(n);

    return 0;
}