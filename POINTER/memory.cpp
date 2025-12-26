#include<iostream>
#include<vector>
using namespace std;

// stack memory - faster but limited size and managed by compiler
// heap memory - slower but large size than stack memory and managed by programmer
// stack memeory returns a value
// heap memory return a address use keyword like new(for creation) and delete(for free a memory) 
// memory leak - when forget about to delete the data from heap memory

int main(){
    // variable intialize in stack memory
    int a = 5;
    cout<<a<<endl;

    // variable intialize in heap memory
    int *b = new int(5);
    cout<<*b<<endl;
    //  free b from memory
    delete b; // free from memory   
    cout<<*b<<endl;

    //  array in stack memory
    int arr[5] = {0};
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    // array in heap memory
    int *brr = new int[5]; // good pratice
    cout<<brr<<" "<<(brr+1)<<" "<<(brr+2)<<endl;
    cout<<brr[0]<<" "<<brr[1]<<" "<<brr[2]<<endl;
    delete[] brr; // deallocation of memory

    // input in array created inside heap memory
    // for(int i=0;i<5;i++){
    //     cin>>brr[i];
    // }
    // for(int i=0;i<5;i++){
    //     cout<<*(brr+i)<<" ";
    // }

    // 2d array in stack
    int arr2[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    // declaration of 2D array in stack
    // int *n = &x[0][0];
    // int *n [3][5] = x; or &x;

    // u have two derefrence two times to reach value of 2D array
    //  2d array in heap memeory
    int **brr2 = new int*[4]; // create 4 row pointers
    for(int i=0;i<4;i++){     // create 3 col pointer
        brr2[i] = new int[3];
    }
    // above 2D array is create of size 4 rows and 3 cols

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>brr2[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<brr2[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        delete[] brr2[i]; // deallocation from memory
    }


}