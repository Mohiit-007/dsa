#include<iostream>
#include<algorithm>
using namespace std;


int printuniquenumber(int a[],int n){  //time-complexity-o(n) space-complexity-o(1)
    int num=0;
    for(int i=0;i<n;i++){
        num = num^a[i];
    }
    return num;
}

int sortzeroone(int a[],int n){ //time-complexity - o(n) space-complexity-o(1)
    for(int i= 0;i<n;i++){
        if(a[i] == 0 ){
            cout<<a[i]<<" ";
        }
    }
    for(int i= 0;i<n;i++){
        if(a[i] == 1 ){
            cout<<a[i]<<" ";
        }
    }
    
}

void printdoublepair(int a[],int n){  //time-complexity - o(n^2)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<a[i]<<","<<a[j]<<")";
        }
        cout<<endl;
    }
}

void findtwosum(int a[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum = a[i] + a[j];
           if(target == sum ){
             cout<<"("<<a[i]<<","<<a[j]<<")";
           }
        }
    }
           
}

void printtriplet(int a[],int n){  //time-complexity - o(n^3) space-complexity - o(1)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<" ";
            }
        }
        cout<<endl;
    }
}

void printtripletsum(int a[],int n,int target){ //time-complexity - o(n^3) space-complexity - o(1)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
               if(target == a[i]+a[j]+a[k] ){
                 cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")"<<" ";
               }
            }
        }
    }
}

void printrotateshiftarray(int a[],int n,int shift){
    int finalshift = shift%n;

    int temp[100];
    int index = 0;
    for(int i=n-finalshift;i<n;i++){
        temp[index] = a[i];
        index++;
    }
    for(int i=n-1;i>=0;i--){
       a[i] = a[i-finalshift];
    }

    for(int i=0;i<finalshift;i++){
        a[i] = temp[i];
    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}


int main(){ 
    int a[] = {1,1,3,3,4};
    int c[] = {1,2,3,4};
    int d[] = {10,5,20,15,30};
    int e[] = {10,20,30,40,50,60};
    // int t;
    // cout<<"target element to find twosum: ";
    // cin>>t;
    int shift;
    // cout<<"enter number for shift of array: ";
    // cin>>shift;
    int n =4;
    // printrotateshiftarray(e,n,shift); 
    printdoublepair(c,n);
    // printtriplet(c,n);
    // findtwosum(d,n,t);
    // printtripletsum(d,n,t);
    // cout<<printuniquenumber(a,n)<<endl; 
    int b[] = {0,1,1,1,0,0,0,1,1,0,1,0,1,1,1,1};
    int m = 16;
    // sort(b,b+16);   // sort method to print it but having a bad time complexity o(nlogn) while in print01 fn having complexity of o(n)
    // for(int i=0;i<16;i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    // sortzeroone(b,m);
    
}                                       
