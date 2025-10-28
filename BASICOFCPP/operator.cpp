#include<iostream> // header file   
using namespace std;

int main(){
    //unary operator
    int a=1; // pre incremnet
    cout<<(++a)<<endl ;
    cout<<(a++)<<endl;// print 2 hi hoga but a will become 3 //post incrment
    cout<<a<<endl;
    cout<<(--a)<<endl;
    cout<<(a--)<<endl;//print 2 hoga but a will become 1
    cout<<a<<endl;

    //arithmetic opeartor
    int x=15;
    int y=10;
    cout<<(x+y)<<endl;
    cout<<(x-y)<<endl;
    cout<<(x*y)<<endl;
    cout<<(x/y)<<endl;
    cout<<(x%y)<<endl;

    //Relational operator <,>,<=,>=,!=,==
    // int m = 10;
    // int n = 5;
    // if(m>n) cout<<true<<endl; // it returns 1

    // logical operator
    int p,q,r;
    p=10,q=14,r=20;
    if(p>9 && q>10 && r>15){  // all condition should be true in && and case
        cout<<"all condition are true"<<endl;
    }
    if(p>9 || q>20 || r>15){  // any condition should be true in || or case
        cout<<"any condition should be true"<<endl;
    }
    if(p!=10){
        cout<<"not true"<<endl;
    };

    //assignment operator
    // (= , += , -= , *= , /= ,%=)
    int b=10;
    b += 5;
    cout<<b<<endl;
    b *= 5;
    cout<<b<<endl;
    b /= 5;
    cout<<b<<endl;
    b %= 5;
    cout<<b<<endl;
    

    //bitwise operator //used for bit levellike after decimal digits
    // ( << , >> , | , & , ^ , ~ )
    cout<<~(5)<<endl; //not
    cout<<(5 & 3)<<endl; //and
    cout<<(5 | 3)<<endl; //or
    cout<<(5 ^ 6 ^ 5)<<endl; //xor
    cout<<((-1000) >> 1)<<endl; //rightshift
    cout<<((-1000) << 1)<<endl; //leftshift

    // in leftshift (<<) the number become (number*2^n);
    // in rightshift (>>) the number become (number/2^n);

    int n = 10;
    if( (n&1) == 0 ){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

    // ternary operator
    int age = 20;
    age>18 ? cout<<"u can vote" : cout<<"u can't vote";

}