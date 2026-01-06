#include<iostream>
using namespace std;

class Nstack{
    int *arr;
    int *top;
    int *next;
    int freespot;
    int n;
    int s;

    public:
    Nstack(int N,int S){
        n = N;
        s = S;
        arr = new int[n];
        next = new int[n];
        top = new int[s];
        freespot = 0;

        for(int i=0;i<n;i++){
            next[i] = i+1; 
        }
        next[n-1] = -1;
        for(int i=0;i<s;i++){
            top[i] = -1;
        }
    }

    bool push(int X,int m){
        if(freespot == -1){
            return false;
        }

        int index = freespot;

        freespot = next[index];

        arr[index] = X;

        next[index] = top[m-1]; // 0 base indexing

        top[m-1] = index;

        return true;
    }

    int pop(int m){
        if(top[m-1] == -1){
            return -1;
        }

        int index = top[m-1];

        top[m-1] = next[index];

        next[index] = freespot;

        freespot = index;

        return arr[index];

    }

    ~Nstack(){
        delete[] arr;
        delete[] top;
        delete[] next;
    }

};

int main(){

    int n = 6;
    int s = 3;
    Nstack st(n,s);
    cout<<st.push(10,1)<<endl;
    cout<<st.push(20,1)<<endl;
    cout<<st.push(30,1)<<endl;
    cout<<st.push(40,1)<<endl;
    cout<<st.push(50,1)<<endl;
    cout<<st.push(60,1)<<endl;
    cout<<st.pop(1)<<endl;
    cout<<st.push(70,1)<<endl;

    return 0;
}