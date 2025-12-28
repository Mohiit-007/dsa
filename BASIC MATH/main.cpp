#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool isprime(int i){
    if(i<=1) return false;
    for(int j=2;j*j<=i;j++){
        if(i%j == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 50;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    // // to find gcd(greatest common divisor)
    // int a = 1;
    // int b = 1;
    // while(a>0 && b>0){
    //     if(a>b){
    //         a = a - b;
    //     }
    //     else{
    //         b = b - a;
    //     }
    // }
    // if(b == 0){
    //     cout<<a;
    // }
    // else if(a == 0){
    //     cout<<b;
    // }

    // cout<<endl;
    // int m1 = 2;
    // int n1 = 13;
    // cout<<pow(m1,n1);

    // cout<<endl;
    // // fast exponenetial method
    // int ans = 1;
    // while(n1>0){
    //     if(n1%2 == 1){
    //         ans = ans*m1;
    //     }
    //     m1 = m1*m1;
    //     n1 = n1/2;
    // }
    // cout<<ans;

    // int n = 25;
    // vector<bool> prime(n,true);
    // prime[0] = prime[1] = false;

    // int ans1 = 0;
    // for(int i=2;i<n;i++){
    //     if(prime[i]){
    //     cout<<i<<" ";
    //     ans1++;
    //     int j = i*i;
    //     while(j<n){
    //     prime[j] = false;
    //     j += i;
    // }
    //     }
    // }
    // cout<<endl;
    // cout<<ans1<<endl;

}   