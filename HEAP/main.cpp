#include<iostream>
using namespace std;

// it is to find kth smallest or greatest element
// kth smallest - max-heap
// kth largest - min-heap


class heap{
    public:
    int capacity;
    int* arr;
    int index;

    heap(int n){
        this->capacity = n;
        arr = new int[capacity];
        index = 0;
    }

    void printHeap(){
        for(int i=1;i<capacity;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void inserttoheap(int val){
        if(index == capacity - 1){
            cout<<"overflow"<<endl;
        }

        index++;
        arr[index] = val;
        int i = index;

        while(i > 1){
            int parentindex = i/2;
            if(arr[parentindex] < arr[i]){
                swap(arr[parentindex],arr[i]);
                i = parentindex;
            }
        }
    }

    void deletefromheap(){
        swap(arr[1],arr[index]);
        index--;
        heapify(arr,index,1);
    }

    void heapify(int* arr,int n,int index){
        int i = index;
        int leftindex = 2*i;
        int rightindex = 2*i + 1;
        int largestindex = i;

        if(leftindex <= n && arr[leftindex] > arr[largestindex]){
            largestindex = leftindex;
        }

        if(rightindex <= n && arr[rightindex] > arr[largestindex]){
            largestindex = rightindex;
        }

        if(i != largestindex){
            swap(arr[largestindex],arr[i]);
            i = largestindex;
            heapify(arr,n,i);
        }
    }

    void buildheap(int* arr,int n){
        for(int i=n/2;i>0;i--){
            heapify(arr,n,i);
        }
    }
    
    void heapsort(int* arr,int n){
        while(n > 1){
            swap(arr[1],arr[n]);
            n--;
            heapify(arr,n,1);
        }
    }
};



int main(){
    // insertion - o(logn)
    // deletion - o(logn)
    // heapify - o(logn)
    // searching of min.max - o(1)
    // sorting - o(nlogn)
    // creation - o(n)
    heap hp(10);
    int arr[] = {-1,10,20,30,40,50};
    int n = 5;
    hp.buildheap(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    hp.heapsort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    // hp.inserttoheap(10);
    // hp.inserttoheap(20);
    // hp.inserttoheap(30);
    // hp.inserttoheap(40);
    // hp.inserttoheap(50);
    // hp.printHeap();
    // hp.deletefromheap();
    // hp.printHeap();

}