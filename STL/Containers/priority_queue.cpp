#include<iostream>
#include<queue>
using namespace std;

// priority_queue - it is the queue which print on the basis of greatest element
// sort from max. to min.
// min-heap priority queue sort on the basis of min to high order and vice-versa for max-heap

int main(){

    // priority_queue<int,vector<int>,greater <int>> pq; //min-heap priority queue 

    priority_queue<int> pq; //max-heap priortity queue
    pq.push(20);
    pq.push(60);
    pq.push(30);
    pq.push(10);
    pq.pop(); // 60 will get delete bcoz it has the highest priority among all of them

    cout<<pq.size()<<endl;

    //swap function also there for swapping of queue

    // traversing
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    if(pq.empty()==true) cout<<"empty queue";
    else cout<<"non-empty queue";


}