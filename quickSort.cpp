#include<bits/stdc++.h>
using namespace std;


int partition(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i = low ;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high) i++;
        while(arr[j] > pivot && j >= low) j--;
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}


void quickSort(vector<int>&arr,int low, int high){
    if(low < high){
        int partitionIdx = partition(arr,low,high); 
        quickSort(arr,low,partitionIdx - 1);
        quickSort(arr,partitionIdx + 1,high);
    }
}

int main(){
    vector<int>arr = {1,3,4,1,2,6,5,4,7};
    int n = arr.size();
    cout<<"Array Before :"; 
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<"\nArray After :";
    
    quickSort(arr,0,n-1);
    
    for(auto x : arr){
        cout<<x<<" ";
    }
    
    return 0;
}