#include<iostream>
using namespace std;

int main(){
    int a[] = {5,2,4,3,1};   // time complexity - o(n^2)
    int n= 5;                // space complexity - o(1)

    for(int i=0;i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
               minindex = j;
            }
            swap(a[i],a[minindex]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}