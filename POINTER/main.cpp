#include<iostream>
#include<vector>
using namespace std;

// size of pointer is architecture dependent so for 32 bit system is 4 byte and for 64 bit system is 8 byte
// size of pointer is usually 8 bytes to store large address
// array is always passed through by pointer

// for vector void solve(vector<int> &arr)
void solve(int* arr){ // int *arr = arr  basically array is pass by pointer
    int size = sizeof(arr);
    cout<<size<<endl;
    int n = 5;
    int i = 0;
   while(i<n){
       cout<<i[arr]<<" "; // it is just *(arr + i)
       i++;
   }
}

int main(){

    int a = 10;
    int &ra= a;// pass by refrence just give another name of variable
    cout<<ra;
    
    // int *pa; // wring approach
    // pa = a;
    int *pa = &a; // pass by pointer just store address of variable
    cout<<*pa;

    // int arr[] = {1,2,3,4,5};
    // // vector<int> brr;
    // solve(arr);


    // int a[] = {5,7};
    // // a = a+1; returns an error not passed like that
    // cout<<a<<endl; // print base adrress of array
    // cout<<" "<<a+1<<endl;
    // cout<<&a<<endl; // print base address of array
    // // int *ptr = a;
    // int *ptr = &a[0];
    // cout<<a<<endl; // print value stored at a
    // cout<<&a<<endl; // print address of a
    // cout<<" "<<ptr+1<<endl; // print value stored at ptr
    // cout<<ptr+1<<endl; // print next adrress
    // cout<<&ptr<<endl; // print address of ptr
    // cout<<*ptr + 1<<endl; // print value at ptr
    // cout<<sizeof(ptr)<<endl;

    // // intialization of pointer with 0

    // // int *ptr3 = 0;
    // // cout<<*ptr3;

    // intntlization of pointer

    // int *ptr ;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    // // copy of pointer

    // int b = 5;
    // int *ptr2 = &b;
    // int *ptr3 = ptr2; // copy of pointer
    // int *ptr4 = ptr3; // copy of pointer
    // cout<<ptr2<<endl;
    // cout<<ptr3<<endl;
    // cout<<*ptr2<<" "<<*ptr3<<" "<<*ptr4<<endl;

    // array for pointer

    // int arr[] = {10,20,30,40,50};
    // int *ptr = arr;
    // cout<<arr[0]<<endl;
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr+1<<endl;
    // cout<<ptr+1<<endl; 
    // cout<<*ptr<<endl; // print 0th element
    // cout<<*(ptr+1)<<endl; // arr[i] = *(arr+i) = i[arr] = *(i+arr)
    // cout<<*(ptr+3)<<endl; // print 3rd element
    // cout<<*ptr+3<<endl;
    // cout<<ptr<<endl;

    // char pointer

    // char ch[] = "mohitsahu";
    // char *cptr = &ch[0];
    // cout<<ch[0]<<endl;
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<" "<<&ch[0]<<endl;
    // cout<<" "<<&cptr<<endl;
    // cout<<*cptr<<endl;
    // cout<<*(cptr+3)<<endl;
    // cout<<*(cptr)+'a'<<endl;
    // cout<<cptr<<endl;
    // cout<<cptr+3<<endl;

    // char ch = 'a';
    // char *cptr = &ch;
    // cout<<cptr<<endl;

    // int arr[] = {10,20,30,40};
    // int *ptr = arr;
    // cout<<sizeof(ptr)<<endl;

    // char ch[] = "mohit sahu";
    // char *cptr = ch;
    // cout<<sizeof(cptr)<<endl;

    // void pointers

//       int a = 5;
//   char b = 'a';
//   void *ptr;
//   ptr = &a;
//     ptr = &b;
//   cout<<*(int*)ptr<<endl;
//   cout<<*(char*)ptr<<endl;

// pointer to array of full
// int arr[10] = {1,2,3,4,5,4,6,7,8,9};
// int (*ptr)[10] = &arr;          
// cout<<(*ptr)[0]<<endl;
// cout<<(*ptr)[1]<<endl;
// cout<<(*ptr)[2]<<endl;

// int* arr[3]; // array of pointers
// int nums[] = {1,2,3};

// int *ptr = nums;

// arr[0] = &nums[0];
// arr[1] = &nums[1];
// arr[2] = &nums[2];

// // print array through pointer
// cout<<*arr[0]<<endl;
// cout<<*arr[1]<<endl;
// cout<<*arr[2]<<endl;

// // print arary through pointer
// cout<<*(ptr)<<endl;
// cout<<*(ptr+1)<<endl;
// cout<<*(ptr+2)<<endl;

// double pointer

// int a = 10;
// int *ptr = &a;
// int **ptr2 = &ptr;
// int **ptr3 = ptr2; // copy of pointer 
// int ***ptr4 = &ptr3; // 3 level pointer
// cout<<**ptr2<<endl;
// cout<<***ptr4<<endl;
// cout<<*ptr2<<endl; // print address of ptr
// cout<<**ptr4<<endl; // print address of ptr

// int b = 5;
// int *p = &b; //store address of b
// int **q = &p; // store address of p
// int ***r = &q; // store address of q
// int ****s = &r; // store address of r
// cout<<*p<<endl;
// cout<<**q<<endl;
// cout<<***r<<endl;
// cout<<****s<<endl;


// input in an array

int *ptr = new int;
int *ptr2 = new int[50];
cout<<*ptr2<<endl;
int **ptr1 = new int*[50];
cout<<**ptr1<<endl;

}