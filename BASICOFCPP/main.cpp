#include<iostream> // header file   
#include<cmath>
#include <typeinfo>
using namespace std;

double pi  = 3.14280714;
int marks;


int main(){

    //implict typecasting - to change a datatype
    int num1 = 10;
    float num2 = 15.5;
    float result = num1 + num2;
    cout<<result<<endl;

    int a1= 5;
    float b1 = a1;
    cout<<typeid(b1).name()<<endl;
    cout<<b1<<endl;

    //explicit typecasting
    int num3 = (int)pi;
    cout<<num3<<endl;

    cout<<"Hello world"<<endl;
    cout<<pi<<endl;
    // cout<<pis<<endl;
    cout<<"enter marks: "<<endl;
    // std::cout<<"print when using namespace std id not used"<<std::endl;
    cin>>marks;
    cout<<"your marks is: "<<marks ;
    //switch-case statement
    char grade;
    cout<<"enter your grade: ";
    cin>>grade;
    switch(grade){
    case 'A':cout<<"Excellent";
    break;
    case 'B':cout<<"Better";
    break;
    case 'C':cout<<"Good";
    break;
    case 'D':cout<<"Very Bad";
    break;
    default:cout<<"failed!!!";
    };

    // ternary operator
    int age;
    cout<<"enter your age";
    cin>>age;
    age>18 ? cout<<"u can vote" : cout<<"u can't vote";

    // for loop
    for(int i = 1;i<=10;i++){
        cout<<i;
        cout<<". jai shree ram"<<endl;
        if(i == 5){
            break;
        }
        // if(i == 2){
        //     continue;
        // }
    };

    //reverse of for loop
    for(int i = 10;i>=1;i--){
        cout<<i;
        cout<<". jai shree ram"<<endl;
    };

    //while loop
    int j = 1;
    while(j<=5){
        cout<<j<<" ";
        j++;
    }

    // do-while loop
    int k=1;
    do{
        cout<<k<<' ';
        k = k+1;
    } 
    while(k<=6);

    //nested loop
    for(int i = 1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cout<<"i :"<<i <<endl<<"j :"<<j<<endl;
        }
    };
   
} 

