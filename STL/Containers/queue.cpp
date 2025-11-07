#include<iostream>
#include<queue>
using namespace std;

//  queue : there are two ends front and rear end it follows FIFO order element always insert from rear side and delete from front side

int main(){

    queue<int> arr;
    queue<int> arr1;
    arr.push(10);  //  always push from rear end means back side
    arr.push(20);
    arr.push(30);
    arr.push(40);
    arr.push(50);
    arr1.push(100);  //  always push from rear end means back side
    arr1.push(200);
    arr1.push(300);
    arr1.push(400);
    arr1.push(500);
    arr.pop();   // always element get delete from front end bcoz it follows FIFO order
    arr.pop();

    // swap function
    arr1.swap(arr);
    while (!arr1.empty()) {
        cout << arr1.front() << " ";  // access the front element
        arr1.pop();                    // remove it
    }

    cout<<endl;

    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    cout<<arr.size()<<endl;

    if(arr.empty() == true ) cout<<"empty queue"<<endl;
    else cout<<"non-empty queue"<<endl;

}
