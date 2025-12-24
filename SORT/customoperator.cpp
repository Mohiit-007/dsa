#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

void print2D(vector<vector<int>> &a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool customoperator(int a,int b){
    return a>b; // for desc order 
    // return a<b; for asc order
}

bool customoperator2D(vector<int> &a,vector<int> &b){
    return a[1]<b[0];
}


int main(){

    // 1D vector
    // vector<int> arr = {10,20,30,40,50,60};
    // sort(arr.begin(),arr.end(),customoperator); // customoperator is a  function which returns a value in bool
    // print(arr);
    // cout<<endl;
    // reverse(arr.begin(),arr.end());
    // print(arr);
    // cout<<endl;

    //2D vector
    vector<vector<int>> brr = {
        {5,60},
        {2,40},
        {1,50},
        {2,20},
        {0,10}
    };
    sort(brr.begin(),brr.end(),customoperator2D);
    print2D(brr);


}