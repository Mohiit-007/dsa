#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

// exponential seacrh - always applied on sorted array
// time-complexity -o(log(2^logn-1))
        
int binarysearch(vector<int>&arr,int s,int e,int x){
    int mid = (s+e)>>1;
    while(s<=e){
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid]<x) {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)>>1;
    }
    return -1;
}


int main(){
    vector<int> arr = {12,23,44,56,63,20,11,41,53,60};
    sort(arr.begin(),arr.end());
    int x = 12;
    int n = arr.size();

    if(arr[0] == x) return 0;
    int i=1;
    while(i<n && arr[i]<=x){
        i = i*2;   // exponential search
    }
    cout<<"element is fount at index: "<<binarysearch(arr,i/2,min(i,n-1),x)<<endl;

}
