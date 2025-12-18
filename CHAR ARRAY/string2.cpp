#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include<cstring>
#include <cmath>  
using namespace std;

bool removechar(string str,int s,int e){
    while(s<=e){
        if(str[s] == str[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}

bool validpalindrome(string str,int s,int e){
    while(s<=e){
        if(str[s] == str[e]){
            s++;
            e--;
        }
        else if(str[s] != str[e]){
            if(removechar(str,s+1,e) == 1 && removechar(str,s+1,e) == 0){
                return true;
            }
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    // string str = "abccccccba";
    // int n = str.length();
    // int s = 0;
    // int e = n-1; 
    // cout<<validpalindrome(str,s,e);
    
    // vector<vector<int>> arr = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // cout<<arr[0][2]<<endl;

    int x = -121;
    int ans = abs(x);
    int sum = 0;
    while(ans>0){
        int digit = ans%10;
        sum = sum*10 + digit;
        ans = ans/10;
    }
    cout<<sum;
    cout<<endl;

    if(x>0)
    if(sum == x){
        cout<<"palindrome number";
    }
    else{
        cout<<"not a palindrome number";
    }


}   