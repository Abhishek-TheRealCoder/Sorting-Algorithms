
#include<bits/stdc++.h>
using namespace std;

void merging(vector<int>&arr,int low, int mid, int high){
    vector<int>ans;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            ans.push_back(arr[left]);
            left++;
        }else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        ans.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        ans.push_back(arr[right]);
        right++;
    }

    //copying the sorted array to original array
    for(int i = low ;i <= high ;i++){
        arr[i] = ans[i - low];
    }
}

void mergeSort(vector<int>&arr,int low , int high){
    if(low >= high) return ;
    int mid = low + (high - low) / 2;
    //dividing
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    //merge 
    merging(arr,low,mid,high);
}

int main(){
    vector<int>arr = {1,3,4,1,2,6,5,4,7};
    int n = arr.size();
    cout<<"Array Before :"; 
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<"\nArray After :";
    mergeSort(arr,0,n-1);
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}