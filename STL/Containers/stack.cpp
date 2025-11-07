#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> arr;
    stack<int> arr1;

    arr.push(10);
    arr.push(20);
    arr.push(30);
    arr.push(40);
    arr.push(50);
    arr1.push(100);
    arr1.push(200);
    arr1.push(300);
    arr1.push(400);
    arr1.push(500);
    arr.pop();
    arr.pop();

    // swap function
    arr.swap(arr1);
    while(!arr.empty()){
        cout<<arr.top()<<" ";
        arr.pop();
    }

    cout<<endl;

    // to see top element of array
    cout<<arr.top()<<endl;

    cout<<arr.size()<<endl;

    if(arr.empty() == true) cout<<"stak is empty"<<endl;
    else cout<<"non-empty"<<endl;

}