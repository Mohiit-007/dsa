#include<iostream>
#include<vector>
using namespace std;

// time - complexity
// best case - o(nlogn)
// Avg case - o(nlogn)
// worst case - o(n^2)
    
void quicksort(vector<int> &arr,int start,int end){

    if(start >= end) return;

    int pivot = end;
    int i = start - 1;
    int j = start;

    while (j<pivot){
       if(arr[pivot] > arr[j]){
        i++;
        swap(arr[i],arr[j]);
       }
       j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    quicksort(arr,i+1,end);
    quicksort(arr,start,i-1);

}

int main(){

    vector<int> arr = {1,3,5,7,9,2,4,6,8};
    int start = 0 ;
    int end = arr.size() - 1;
    quicksort(arr,start,end);

    for(auto  it : arr){
        cout<<it<<" ";
    }

}