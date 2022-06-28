/* Date: 28 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int tms=0;
void print_name(string name){
    if(tms==5) return;

    cout<<name<<endl;
    tms++;
    print_name(name);

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string name; cin>>name;
    print_name(name);


    return 0;
}