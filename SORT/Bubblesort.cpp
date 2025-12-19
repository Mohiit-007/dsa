#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[] = {5,2,3,4,1};   // time complexity - o(n^2)
    int n= 5;                // space complexity - o(1)

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j+1],a[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}