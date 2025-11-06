#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // binary_search
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(30);
    arr.push_back(50);

    int target = 40;
    bool it  = binary_search(arr.begin(),arr.end(),target);   // it returns true or false value means 0 or 1
    cout<<it<<endl;

    auto it2 = lower_bound(arr.begin(),arr.end(),30); // it returns a value equal to or if not present than return greater than given value
    cout<<*it2<<endl;

    auto it3 = upper_bound(arr.begin(),arr.end(),30); // it returns a value always greater than given value
    cout<<*it3<<endl;

    auto it4 = equal_range(arr.begin(),arr.end(),30);
    cout<<(it4.first-arr.begin())<<endl;
    cout<<(it4.second-arr.begin())<<endl;

}