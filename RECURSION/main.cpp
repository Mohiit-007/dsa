#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int getsum(int n){
    //  base case
    if(n == 1){
        return 1;
    }
    // recursive call
    int sum = getsum(n-1);
    // processing 
    int ans = sum + n;
    return ans;
}
 
int getfactorial(int n){
    // basecase
    if(n == 0){
        return 1;
    }
    // recursive call
    int recursivecall = getfactorial(n-1);  
    // processing
    int ans = recursivecall * n;
    return ans;

}

int power(int n){
    // base case
    if(n == 0) return 1;
    // recursive call
    int recursivecall = power(n-1);
    int ans =  recursivecall * 2;
    return ans;
}

void printcount(int n){
    // base case
    if(n == 0){
        return ;
    }
    // recursive call
    // cout<<n<<" ";
    printcount(n-1);
    // processing 
    cout<<n<<" ";
}

int fibonacci(int n){
    // base case
    if(n == 1 || n == 0) {
        return n;
    }
    // recursive case
    int ans = fibonacci(n-1) + fibonacci(n-2);
    // processing
    return ans;
}

void printarray(int arr[],int n,int index){
    //base case
    if(index == n) return ;
    // prrocessing
    cout<<arr[index]<<" ";
    // recursive relation
    printarray(arr,n,index+1);
}

bool searcharraytarget(int arr[],int n,int index,int target){
    if(n == index){
        return false;
    }
    if(arr[index] == target){
        return true;
    }
    bool ans = searcharraytarget(arr,n,index+1,target);
    return ans;
}

int searchmaxarray(int arr[],int n,int index){
    if(n == index){
        return INT_MIN;
    }
    // recursive realtion
    int ans = searchmaxarray(arr,n,index+1);
    // processing
    ans = max(arr[index],ans);
    return ans;
}

int searchminarray(int arr[],int n,int index){
    if(n == index){
        return INT_MAX;
    }
    // recursive realtion
    int ans = searchmaxarray(arr,n,index+1);
    // processing
    ans = min(arr[index],ans);
    return ans;
}

void printoddnumbers(int arr[],int n,int index,vector<int> &ans){
    // base case
    if(n == index) return ;
    // bsae case
    if((arr[index]&1)) ans.push_back(arr[index]); //  for even is arr[index] %2 == 0
    // recursive call
    printoddnumbers(arr,n,index+1,ans);
}

int binarysearch(int arr[],int n,int target,int s,int e){
    int mid  = (s + e)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] < target){
        return binarysearch(arr,n,target,mid+1,e);
    }
    else{
        return binarysearch(arr,n,target,s,mid-1);
    }
} 

void printdigit(int n){
    if(n == 0){
        return;
    }
    int digit = n%10;
    n = n/10;
    printdigit(n);
    cout<<digit<<" ";
}

bool sort(int arr[],int index,int n){
    if(index == n-1){
        return true;
    }
    bool ans = false;
    bool ans1 = false;
    if(arr[index]<arr[index+1]){
     ans1 = true;   
    }
    ans = sort(arr,index+1,n);
    return ans && ans1;
}

void subsequence(string s,int index,vector<string> &ans,string output){
    if(index == s.length()){
        ans.push_back(output);
        return ;
    }
    char ch = s[index];
    //exclude
    subsequence(s,index+1,ans,output+ch);
    //include
    subsequence(s,index+1,ans,output);
}

int main(){
    // int n = 9;
    // cout<<getsum(n)<<endl;
    // cout<<getfactorial(n)<<endl;
    // cout<<power(n)<<endl;
    // printcount(n);
    // cout<<endl;
    // cout<<fibonacci(n)<<endl;

    //array in recursion

    // int arr[] = {10,20,30,40,-50};
    // int size = 5;
    // int index = 0;
    // int target = 30;
    // printarray(arr,size,index);
    // cout<<endl;
    // if(searcharraytarget(arr,size,index,target)){
    //     cout<<"target found"<<endl;
    // }
    // else{
    //     cout<<"not found"<<endl;
    // }
    // cout<<searchmaxarray(arr,size,index)<<endl;
    // cout<<searchminarray(arr,size,index)<<endl;

    // print array of aodd
    // int brr[] = {10,11,12,13,14,15};
    // int n =6;
    // int index = 0;
    // vector<int> ans;
    // printoddnumbers(brr,n,index,ans);
    // for(auto it:ans){
    //     cout<<it<<" ";
    // }

    // binary search
    // int arr[] = {10,20,30 ,40,50,60};
    // int n = 6;
    // int target = 60;
    // int start = 0;
    // int end  = n-1;
    // cout<<"index is: "<<binarysearch(arr,n,target,start,end);

    // int n = 369;
    // printdigit(n);

    // int arr[] = {1,2,3,4,5};
    // int n = 5;
    // int index = 0;
    // cout<<sort(arr,index,n);

    // sequencce in strings
    // string s = "abcd";
    // string output = "";
    // int index = 0;
    // vector<string> ans;
    // subsequence(s,index,ans,output);
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }

    vector<string> ans = {"mohit","motih","mosahu",};
    for(int i = 0;i<ans.size()-1;i++){
        for(int j=0;j<ans[i].size();j++){
            if(ans[i][j] == ans[i+1][j]){
                cout<<ans[i][j];
            }
            else{
                break;
            }
        }
    }


}
