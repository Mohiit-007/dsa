// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5];
    for(int i=0;i<5;i++){
        cout<<"enter element at"<<i<<"index"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<i[arr]<<" ";
    }

    return 0;
}