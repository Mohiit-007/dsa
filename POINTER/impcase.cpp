#include<iostream>
using namespace std;

// int * p declartion of a pointer or same for function having return type is address
// int a declaration of integer or function having return type is integer not address

void swapfunction(int *a,int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main(){

    // int **arr = 
    // int a = 5;
    // int b = 6;
    // swapfunction(a,b); throws an error beacuse it is pass by value not pass by refrence


    // int *ptr = 0;
    // int a = 10;
    // *ptr = 10; // throws an error

    int arr[] = {1,2,3,4,5};
    // int *p = a++; throws an error a is an constant

    int a[] = {10,20,30,40,50};
    // cout<<a<<endl;
    // cout<<*(&a)<<endl;
    // cout<<&a[0]<<endl;
    // cout<<&a[0]+1<<endl;
    // cout<<&a[5]<<endl;
    // cout<<*(&a+1)<<endl;
    // cout<<*(&a+1) - *(&a);
    // cout<<&a+4<<endl;
    // cout<<*(&a+1)<<endl;
    // cout<<*(&a)<<endl;

    char ch[] = "hello";
    char *cptr = ch;
    cout<<cptr<<endl;


}