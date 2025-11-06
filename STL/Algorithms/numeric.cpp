#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    // vector<int> v;
    // v.push_back(30);
    // v.push_back(23);
    // v.push_back(30);
    // v.push_back(23);
    // v.push_back(11);
    // v.push_back(20);

    // int totalsum = accumulate(v.begin(),v.end(),0); // used to find total sum of v
    // cout<<totalsum<<endl;

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    // inner product
    auto it = inner_product(v1.begin(),v1.end(),v2.begin(),0);
    cout<<it<<endl;

    //partial sum
    vector<int> v3(v1.size());
    partial_sum(v1.begin(),v1.end(),v3.begin());
    for(int a:v3){
        cout<<a<<" ";
    }

    cout<<endl;

    //iota
    vector<int> v4(5);
    iota(v4.begin(),v4.end(),300);
    for(int a:v4){
        cout<<a<<" ";
    }
    


}