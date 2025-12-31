#include<iostream>
#include<vector>
using namespace std;


void lastoccurence(string s,char ch,int index,int &ans){
    if(index == s.size()) return ;
    if(s[index] == ch) ans = index;

    lastoccurence(s,ch,index+1,ans);
}

void reversestring(string &s,int i,int j){
    if(i>=j) return;

    swap(s[i],s[j]);
    reversestring(s,i+1,j-1);

}

bool palindrome(string &s,int i,int j){
    if(i>=j) return true;

    if(s[i] != s[j]){
        return false;
    }
    bool ans = false;
    ans = palindrome(s,i+1,j-1);
    return ans;
}

void printsubarray_utl(vector<int> arr,int index,int end){
    if(end == arr.size()){
        return;
    }

    for(int i=index;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printsubarray_utl(arr,index,end+1);
}

void printsubarray(vector<int> arr){
    for(int index=0;index<arr.size();index++){
        int end = index;
        printsubarray_utl(arr,index,end);
    }
}

int solve(vector<int> arr,int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    int reAns = (n-1)*(solve(arr,n-1) + solve(arr,n-2)); // n-2 means swapped two values and applying for n-2 blocks
    return reAns;
}

int paintingfence(int n,int k){
    // base case 
    if(n == 1){
        return k;
    }
    if(n == 2){
        return k + k*(k-1); // k -> fences with same color or k*(k-1) -> fences with diff. color
    }

    int ans = (k-1)*(paintingfence(n-1,k) + paintingfence(n-2,k)); // same -> paintingfence(n-2,k) // diff -> paintingfence(n-1,k)
    return ans;
}


int main(){

    // vector<int> arr = {1,2,3,4,5};
    // printsubarray(arr);

    // string s = "racecar";
    // int index = 0;
    // int end = s.size() - 1;
    // cout<<palindrome(s,index,end);

    // string s = "helloworld";
    // int index = 0;
    // int end = s.size() - 1;
    // reversestring(s,index,end);
    // cout<<s;

    // string s = "abcddedgd";
    // char x = 'd';
    // int ans=  -1;
    // lastoccurence(s,x,0,ans);
    // cout<<ans;

    // permutation and deearrangement
    // vector<int> arr = {1,2,3,4};
    // int n = 4;
    // cout<<solve(arr,n)<<endl;

    // painting fence algorithm -> paint the fence such that at most two adjacent fences have same colors
    int n = 3; //n -> no. of fences
    int k = 3; // k -> no. of diff. colors
    cout<<paintingfence(n,k);

    

}