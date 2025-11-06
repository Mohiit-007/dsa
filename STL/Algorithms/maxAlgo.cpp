#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 20, 20, 30, 40, 50};

    auto it = *max_element(v.begin(),v.end());
    cout<<it<<endl;
    auto it2 = min_element(v.begin(),v.end());
    cout<<*it2<<endl;

    int a=20;
    int b=40;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

}
