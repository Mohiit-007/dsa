#include<iostream>
#include <iomanip>
using namespace std;

void kmtomiles(int k){
    float m = k * 0.621371;
    cout<<m<<" miles"<<endl;
}
    
void printinteger(int n){
    for(int i=n;i>0;i--){
        cout<<-i<<" ";
    }
    for(int i=1;i<=n;i++){
        cout<<i<<"  ";
    }
}

void printdigits(int n){
    while(n){
        int digit = n%10;
        cout<<"Digit: "<<digit<<endl;
        n /= 10;
    }
}

void areaofcircle(int r){
    float area = 3.14*r*r;
    cout<<"area of circle: "<<area<<endl;
}

void evenorodd(int n){
    if((n&1) == 0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}

void factorial(int n){
    long double num = 1;
    for(int i=1;i<=n;i++){
       num *= i;  
    }
    cout<<num<<setprecision(0);
}

bool isprime(int num){
        for(int i=2;i<=(num-1);i++){
        if(num%i == 0 ){
            return false;
        }
    }
    return true;
   
}

void printreverse(int n){
    while(n){
        int digit = n%10;
       cout<<digit;
       if(n<0){
        n = (-1)*n;
        n /= 10;
       }
       else{
        n /= 10;
       }
    }
}

int printkthbit(int n , int k){
    return n|(1<<k);
}


int main(){
    int n,m;
    cout<<"enter a number: ";
    cin>>n;
    // kmtomiles(k);
    printinteger(n);
    printdigits(n);
    areaofcircle(n);
    evenorodd(n);
    factorial(n);
    if( isprime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    for(int i=2;i<=n;i++){
       bool isiprime = isprime(i);
       if(isiprime){
        cout<<i<<" ";
       }
    }
    printreverse(n);
    printkthbit(n,m);


}