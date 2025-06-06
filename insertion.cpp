
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr,int n){
    
    for(int i = 0;i < n;i++){
        int j = i;
        while(j > 0 && arr[j] < arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
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
    selectionSort(arr,n);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}