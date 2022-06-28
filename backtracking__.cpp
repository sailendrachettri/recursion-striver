/* Date: 28 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n, int i){
    if(i<=1) return;
    print(n, i-1);
    cout<<i<<endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // doing the task after the function call
    int n; cin>>n;
    print(n, n);

    return 0;
}