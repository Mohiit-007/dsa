#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int i){
    cout<<i*2<<" ";
}

bool checkeven(int i){
    return i%2 == 0;
}

int main(){
    vector<int> arr;
    arr.push_back(40);
    arr.push_back(23);
    arr.push_back(40);
    arr.push_back(23);
    arr.push_back(11);
    arr.push_back(20);

    // for each 
    // for_each(arr.begin(),arr.end(),printDouble);

    //find 
    int target = 40;
    // auto it = find(arr.begin(),arr.end(),target);
    // cout<<*it<<endl;

    // //find_if
    // auto it2 = find_if(arr.begin(),arr.end(),checkeven);
    // cout<<*it2<<endl;

    // //count
    auto it3 = count(arr.begin(),arr.end(),target);
    cout<<it3<<endl;

    // //count_if
    // auto it4 = count_if(arr.begin(),arr.end(),checkeven);
    // cout<<it4<<endl;

    // cout<<"before sort"<<endl;
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    //sort
    // sort(arr.begin(),arr.end());
    // cout<<"after sort"<<endl;
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    // // reverse 
    // reverse(arr.begin(),arr.end());
    // cout<<"after reverse"<<endl;
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    // //rotate
    // rotate(arr.begin(),arr.begin()+2,arr.end());
    // cout<<"after rotate"<<endl;
    // for(int a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;


    //unique
    sort(arr.begin(),arr.end());    
    auto it = unique(arr.begin(),arr.end());
    arr.erase(it,arr.end());
     for(int a:arr){
        cout<<a<<" ";
    };

    // cout<<endl;
    //partition
    auto it2 = partition(arr.begin(),arr.end(),checkeven);
    cout<<*it2<<" ";
    cout<<endl;
    for(int a:arr){
        cout<<a<<" ";
    };


}