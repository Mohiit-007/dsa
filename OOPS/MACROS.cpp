#include<iostream>
using namespace std;

// macros is pre-processor directive which can replace peice of code before compilation
#define PI 3.1428 // using macros i can use PI anywhere in code with value 3.1428
#define MAX(a,b) (a > b ? a : b) // using macros i can use MAX anywhere in code

float areaofcircle(int r){
    return PI*r*r;
}

int periofcircle(int r){
    return 2*PI*r;
}

void solve(){
    int a = 4;
    int b = 5;

    int c = MAX(a,b);
    cout<<c<<endl;
}

int main(){

    int r = 10;
    cout<<areaofcircle(r)<<endl;
    cout<<periofcircle(r)<<endl;
    solve();

}