// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr,int n){
    
    for(int i = 0;i < n-1 ;i++){
        int mini = i;
        for(int j = i+1;j < n;j++){
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    
}
int main() {
    vector<int>arr = {13,46,24,52,20,9};
    int n = arr.size();
    
    cout<<"Array Before :";
    for(auto x : arr){
        cout<<x<<" ";
    }
    
    cout<<"\nArray After :";
    selectionSort(arr,n);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}