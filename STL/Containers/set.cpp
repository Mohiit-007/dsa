#include<iostream>
#include<set>
using namespace std;

// set method - it is used to remove duplicates or sort the array
// unordered_set - not sorted the array having time-complexity - o(1)
// ordered_set - it is just similar to set having time-complexity - o(logn)

int main(){

    set<int> arr;
    arr.insert(50);
    arr.insert(10);
    arr.insert(35);
    arr.insert(10);
    arr.insert(5);

    // arr.clear();
    // arr.erase(arr.begin(),arr.end()); to remove all elements
    if(arr.find(35) != arr.end()) cout<<"elemetn got found"<<endl;
    else cout<<"element not found"<<endl;

    if(arr.count(10) == 1){
        cout<<"element got found"<<endl;
    }
    else{  // in 0 case not found
        cout<<"element not found"<<endl;
    }

    cout<<endl;

    set<int>::iterator it=arr.begin();
    while(it!=arr.end()){
        cout<<*it<<" ";
        it++;
    }

    if(arr.empty() == true ) cout<<"empty set"<<endl;
    else cout<<"non-empty set"<<endl;


}