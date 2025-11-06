#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// heap is a binary tree of two types max_heap and min_heap

int main() {
    vector<int> v = {10, 20, 60, 20, 30, 40, 50};
    
    make_heap(v.begin(),v.end()); //time-complexity - o(n)
    for(int a:v){
        cout<<a<<" ";
    }

    cout<<endl;
    v.push_back(80);
    push_heap(v.begin(),v.end());
    for(int a:v){
        cout<<a<<" ";
    }

    cout<<endl;
    pop_heap(v.begin(),v.end());
    for(int a:v){
        cout<<a<<" ";
    }

    cout<<endl;
    sort_heap(v.begin(),v.end());
    for(int a:v){
        cout<<a<<" ";
    }



}
