#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> a,int s,int e,int target){
    while(s<=e){
        int mid = (s+e)>>1;
        if(a[mid] == target)  return mid;
        else if(target > a[mid]) s = mid+1;
        else e = mid-1;
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int n = arr.size(); //for an infinite array search and end is not defined
    int x = 10;
    int i=0,j=1;
    while(arr[j]<x){
        i = j;
        j = j*2;
    }
    cout<<binarysearch(arr,i,min(j,n-1),x);
}