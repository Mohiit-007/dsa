#include<iostream>
#include<vector>
using namespace std;

// count inversion - very important

void merge(vector<int> &arr,int s,int mid,int e){
    int leftarrlength = mid - s+1;
    int rightarrlength = e - mid;
    vector<int> leftarr(leftarrlength);
    vector<int> rightarr(rightarrlength);

    int index = s;
    for(int i=0;i<leftarrlength;i++){
        leftarr[i] = arr[index];
        index++;
    }
    index = mid+1;
    for(int j=0;j<rightarrlength;j++){
        rightarr[j] = arr[index];
        index++;
    }

    int i = 0;
    int j = 0;
    int mainarrindex = s;
    while(i < leftarrlength && j < rightarrlength ){
        if(leftarr[i] <= rightarr[j]){
            arr[mainarrindex] = leftarr[i];
            i++;
            mainarrindex++;
        }
        else{
            arr[mainarrindex] = rightarr[j];
            j++;
            mainarrindex++;
        }
    }

    while(i<leftarrlength){
        arr[mainarrindex] = leftarr[i];
        i++;
        mainarrindex++;
    }

    while(j<rightarrlength){
        arr[mainarrindex] = rightarr[j];
        j++;
        mainarrindex++;
    }

}

void mergesort(vector<int> &arr,int s,int e){
    if(s>=e) return;

    int mid = (s+e)>>1;

    // e = mid
    mergesort(arr,s,mid);
    // s = mid+1
    mergesort(arr,mid+1,e);

    merge(arr,s,mid,e);
    
}

int main(){
    // merge sort algorithm
    vector<int> arr = {10,30,50,70,20,40,60,80,110,100};

    int s = 0;
    int e = arr.size() - 1;
    mergesort(arr,s,e);

    for(auto it:arr){
        cout<<it<<" ";
    }

}