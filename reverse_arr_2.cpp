/* Date: 30 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse_array(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse_array(i+1, arr, n);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size; cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    reverse_array(0, arr, size);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}