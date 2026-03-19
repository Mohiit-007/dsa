#include<iostream>
using namespace std;

// inline function works at compile time while MACROS before compile time bcoz it is pre-processor directive
// inline function replace the function call in main with code inside fun at compile time
// inline function is a function where the compiler replaces the function call with the actual function code — to reduce the overhead of function calls.
// inline keyword is used for code optimization and reduce the executable time of code
// inline function uses inline keyword
// inline function only use for small function due to large executable of code
// inline function replace the function call with actual function code — to reduce the overhead of function calls.

inline void solve(int a){
    cout<<a<<endl;
}

int main(){

    solve(5); // by using inline function this line will replace with cout<<a<<endl;
    solve(5);
    solve(5);
    solve(5);
    solve(5);
    solve(5);
    solve(5);
    solve(5);

}