/* Date: 28 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_name(string name, int tms){
    if(tms==5) return;

    cout<<name<<endl;
    tms++;
    print_name(name, tms++);

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string name; cin>>name;
    print_name(name, 0);


    return 0;
}