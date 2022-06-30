/* Date: 30 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int i, string str){
    int size = str.size();

    if(i>=size/2) return true;

    if(!(str[i]==str[size-i-1])){
        return false;
    }
    
    return is_palindrome(i+1, str);
    
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str; cin>>str;
    cout<<is_palindrome(0, str);

    return 0;
}