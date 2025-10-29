#include<iostream>
#include<cmath>
using namespace std;


int sum(int a,int b,int c){
    return a+b+c;
};

int printmyname(){
   cout<<"mohit sahu"<<endl;
   return 0;
}

int eligibiltyAge(int age){
    if(age>18) cout<<"vote"<<endl;
    else cout<<"can't vote"<<endl;
    return 0;
}

int primenumbers(int num){
    if(num %= 1){
        cout<<num;
    }
}

int printcounting(int count){
    for (int i = 1; i <= count; i++)
    {
        cout<<i<<" ";
    }
    return 0;
    
}

int binaryconversion(int num){
    int binary = 0;
    int i=0;
    while(num>0){
        int binarybit = num % 2;
        binary = binarybit*pow(10,i++) + binary;
        num = num/2;
    } 
    return binary;
}

int decimalconversion(int n){
    int binary=0;
    int i=0;
    while(n>0){
        int bit = n%10;
        binary = binary + bit*pow(2,i++);
        n /= 10;
    }
    return binary;
}

void print2table(int n){
    for(int i=0;i<10;i++){
        cout<<n*(i+1)<<endl;
    }
}

bool vote(int n){   // this function returns a boolean value
    if(n>18)
    return true;
    else
    return false;
}

int calculatepower(int n, int m){
    int finalans=1;
    for(int i=1;i<=m;i++){
      finalans = finalans * n ;
    }
    return finalans;
}

bool isprime(int num){
   if(num != 1 ){   
     for(int i=2;i<=(num-1);i++){
        if(num%i == 0 ){
            return false;
        }
    }
    return true;
   }
   else{
    return false;
   }
}

void printeveninsiderange(int s , int l){
    // int num = s-1 ;
    for(int i=s;i<=l;i++){
        // num = num + 1;
        if(i%2 == 0 ){
            cout<<i<<" ";
            cout<<endl;
        }
    }
}

void passbyvalue(int num){
    num = num + 10; 
}

void passbyrefrence(int &num){ //it menas passing hte actual value of num1 if any cahnges in num will effect also on num1
    num = num + 10;
}


int main(){

    int result = sum(1,2,3);
    cout<<result<<endl;
    printmyname();
    eligibiltyAge(12);
    printcounting(10);
    primenumbers(10);

    int n;
    cout<<"enter a decimal number to convert in binary number: ";
    cin>>n;
    int binarynumber = binaryconversion(n);
    cout<<binarynumber<<endl;

    int m;
    cout<<"enter a binary number to convert in decimal number: ";
    cin>>m;
    int decimal = decimalconversion(m);
    cout<<decimal<<endl;


    print2table(20);

    int age = 20;
    if(vote(age)){
        cout<<"vote now.."<<endl;
    }
    else{
        cout<<"u can't vote now"<<endl;
    }

    // int result = calculatepower(2,10);
    // cout<<result<<endl;

    int num = 10;
    if( isprime(num) ){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    } 

    printeveninsiderange(1,100);

    //pass by value - copy banti h parameter ko argumnet mei pass karna h
    int val = 10;
    val++;
    passbyvalue(val);
    cout<<val<<endl;  

    // pass by refrence - actual body pass karni h
    int num1 = 10;
    int &demo = num1; // it means 10 is contain by both val and demo with the same address
    num1--;
    passbyrefrence(num1);
    cout<<demo;


}
