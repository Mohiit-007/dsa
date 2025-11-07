#include<iostream>
#include<deque>
using namespace std;

// deque - it can accessible from both sides either front or rear element can insert and delete from both side front and rear

int main(){
    deque<int> arr;
    deque<int> arr1;
    
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_front(50);
    arr1.push_back(100);
    arr1.push_back(200);
    arr1.push_back(300);

    arr.pop_back();
    arr.pop_front();

    // traverse through deque
    cout<<"before swap: "<<endl;
    deque<int>::iterator it=arr.begin();
    while(it!=arr.end()){
        cout<<*it<<" ";
        it++;
    }

    cout<<endl;

    // swap function
    arr.swap(arr1);
    // traverse through deque
    cout<<"after swap: "<<endl;
    deque<int>::iterator it2=arr.begin();
    while(it2!=arr.end()){
        cout<<*it2<<" ";
        it2++;
    }

    cout<<endl;
    // arr.clear();

    // to insert
    arr.insert(arr.begin()+1,2,200);
    arr.erase(arr.end());

    cout<<arr.size()<<endl;

    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    cout<<endl;

    if(arr.empty() == true ) cout<<"empty deque"<<endl;
    else cout<<"non-empty deque"<<endl;

}