/* Date: 30 - 06 - 2022
Author: Sailendra */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap_val(int arr[], int first, int last){
    int temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp;
}

void reverse_array(int arr[], int start, int end){
    if(start>=end) return;
    // swap_val(arr, start, end);
    swap(arr[start], arr[end]);
    reverse_array(arr, start+1, end-1);
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

    reverse_array(arr, 0, size-1);

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}