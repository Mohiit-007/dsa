#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,0,0,0};

    vector<int> brr = {2,5,6};

    vector<int> crr;
 
    // to print all elemnts of two vector without duplicate
    set_union(arr.begin(),arr.end(),brr.begin(),brr.end(),inserter(crr,crr.begin()));
    for(int a:crr){
        cout<<a<<" ";
    }
    cout<<endl;
    
    // to print only duplicate element among two vector
    // set_intersection(arr.begin(),arr.end(),brr.begin(),brr.end(),inserter(crr,crr.begin()));
    // for(int a:crr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // to print differnce among two vector
    // set_difference(arr.begin(),arr.end(),brr.begin(),brr.end(),inserter(crr,crr.begin()));
    // for(int a:crr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // to print only non-duplicate element of two vector
    // set_symmetric_difference(arr.begin(),arr.end(),brr.begin(),brr.end(),inserter(crr,crr.begin()));
    // for(int a:crr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

}