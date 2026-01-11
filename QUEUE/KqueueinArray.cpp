#include<iostream>
using namespace std;

class KQueue{

    int freespot;
    int n,k;
    int *arr,*front,*rear,*next;

    public:
    KQueue(int size,int k){
        n = size;
        this->k = k;
        freespot = 0;
        arr = new int[size];
        front = new int[k];
        rear = new int[k];
        next = new int[size];

        for(int i=0;i<k;i++)
        front[i] = rear[i] = -1;

        for(int i=0;i<n;i++){
            next[i] = i + 1;
            next[n-1] = -1;
        }
    }

    bool push(int val,int q){
        if(freespot == -1){
            return false;
        }

        int index = freespot;
        freespot = next[index];
        
        if(front[q] == -1){
            front[q] = index;
        }
        else{
            next[rear[q]] = index;
        }

        next[index] = -1;
        rear[q] = index;
        arr[index] = val;
        return true;
    }

    int pop(int q){
        if(front[q] == -1){
            return -1;
        }

        int index = front[q];

        front[q] = next[index];

        next[index]  = freespot;
        freespot = index;

        return arr[index];
    }

    ~KQueue() {
        delete [] arr;
        delete [] next;
        delete [] rear;
        delete [] front;
    }

};

int main(){
    KQueue q(9,3);

    cout<<q.push(10,0)<<endl;
    cout<<q.push(20,0)<<endl;
    cout<<q.push(30,0)<<endl;
    cout<<q.push(10,0)<<endl;
    cout<<q.pop(0)<<endl;

    return 0;
}
