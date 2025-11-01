#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

// sabse important - array is pass by refrence in function not by pass by value , array ko function mei pass karne par uski actual array ki value h milti h

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void multiplyarray(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]  =  arr[i]*n;
    }
}

bool findtarget(int a[] , int size , int target){
    for(int i=0;i<size;i++){
        if(a[i] == target ){
            return true;
        }
    }
    return false;
}


int printmin(int a[] , int size ){
    int maxAns = INT_MAX;  //INT_MAX is equal to max value of int which is 2^31-1 or it is largest number in integer range
    for(int i=0;i<size;i++){
    for(int i=0;i<size;i++){
        maxAns = min(maxAns,a[i]);  //inbuilt min function
    }
    return maxAns;
}
}int printmax(int a[] , int size ){
    int maxAns = INT_MIN;  // INT_MIN is equal to min value of int which is -2^-31 or it is smallest number in integer range
    for(int i=0;i<size;i++){
        maxAns = max(maxAns,a[i]); //inbuilt max function
    }
    return maxAns;
}

void find01(int a[],int n){
    int countzero = 0;
    int countone = 0;
    for(int i=0;i<n;i++){
        if(a[i] == 0 ){
            countzero = countzero + 1; 
        }
        else if(a[i] == 1 ){
            countone = countone + 1;
        }
    }
    cout<<"total no. of zero is: "<<countzero<<endl;
    cout<<"total no. of one is: "<<countone<<endl;
}

void extremeprinting(int a[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        cout<<a[i]<<" ";
        i++;
        cout<<a[j]<<" ";
        j--;
    }
    cout<<endl;
}

void printreverse(int a[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    //function in array
    int num = 6;
    int a[] = {10,20,30,40,50,60};
    // reverse(a,a+6); // dorect method to print reverse
    // rotate(a,a+(n-k),a+n) // for rotation of array k means kth times rotation
    int num2 = 7;
    int b[] = {0,1,1,1,0,0,1};
    // find01(b,num2);
    printreverse(a,num);
    // extremeprinting(a,num);

    //swapping
    int x = 20;
    int y = 30;
    swap(x,y); // to swap two numbers
    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl; 

    // temp variable method for swap
    int a1 = 54;
    int b1 = 45;
    int c;
    c = a1;
    a1 = b1;
    b1 = c;
    cout<<"a1 : "<<a1<<endl;
    cout<<"b1 : "<<b1<<endl; 

    //arthimetic method for swapping
    int a2 = 6;
    int b2 = 5;
    b2 = a2 + b2;
    a2 = b2 - a2; //5
    b2 = b2 - a2 ;// 6
    cout<<"a2: "<<a2<<endl;
    cout<<"b2: "<<b2<<endl;

    
    // int target;
    // cout<<"enter target to find: "<<" "<<endl;
    // cin>>target;
    // if(findtarget(a,num,target)){
    //     cout<<"elemnt is found"<<endl;
    // }
    // else{
    //     cout<<"elemnt is not found"<<endl;
    // }
    // cout<<"max number is: "<<printmax(a,num)<<endl;
    // cout<<"min number is: "<<printmin(a,num)<<endl;
    // multiplyarray(a,num);
    // printarray(a,num);

    // // creation of array
    // int arr[5] = {1,2,3,4,5};
    // cout<<arr[3]<<endl;
    // int brr[3] = {2};
    // cout<<brr[2]<<endl;
    // int crr[] = {1,2,3,4,5};

    // // fill method - to fill the complete array with same elements
    // int drr[5];
    // fill(drr,drr+5,23);
    // for(int i=0;i<5;i++){
    //     cout<<drr[i]<<" ";
    // };
    // cout<<endl;

    // // input in array
    // int n;      
    // cout<<"enter size of array: "; 
    // cin>>n;  // bad praticse of taking input
    // int err[n];
    // for(int i=0;i<n;i++){
    //     cout<<"enter value of element at "<< i<<" index: "<<endl;
    //     cin>>err[i];
    //     // cout<<err[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<err[i]<<' ';
    //     // cout<<i[err]<<' '; it also works at compile time bcoz compiler will print it like *(err + i ) for err[i] is *(i + err )
    // }



}   