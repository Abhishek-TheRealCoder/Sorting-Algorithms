// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr,int n){
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    bubbleSort(arr,n);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}