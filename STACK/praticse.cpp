#include<iostream>
#include<stack>
#include<climits>
using namespace std;

void insertAtBottom(stack<int> &s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s,value);
    s.push(temp);
}

void printmiddle(stack<int> &s,int index,int mid,int &middlevalue){
    if(index == mid){
        middlevalue = s.top();
        return ;
    }
    int temp = s.top();
    s.pop();
    
    printmiddle(s,index+1,mid,middlevalue);
    s.push(temp);
}


bool checksort(stack<int> s,int temp){
    if(s.empty()) return true;

    int curr = s.top();
    s.pop();
    if(temp > curr){
        bool ans = checksort(s,curr);
        s.push(curr);
        return ans;
    }
   else{
    return false;
   }

}

void reversestack(stack<int> &s){
    if(s.empty()){
       return;
    }

    int temp = s.top();
    s.pop();
    reversestack(s);
    insertAtBottom(s,temp);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

void sortedinsert(stack<int> &s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int temp = s.top();
    if(temp < value){
        s.push(value);
        return;
    }
    s.pop();
    sortedinsert(s,value);
    s.push(temp);

}

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int maxi = INT_MAX;
    int value = 45;
    sortedinsert(s,value);
    print(s);
    // reversestack(s);
    // print(s);
    // int n = s.size()/2;
    // int middlevalue = 0;
    // int temp = INT_MAX;
    // cout<<checksort(s,temp)<<endl;

    // printmiddle(s,0,n,middlevalue);
    // cout<<middlevalue<<endl;

    // int value = 25;
    // insertAtBottom(s,value);
    // print(s);
   
    // cout<<endl;

    // stack<char> c;

    // string str = "HelloWorld";
    // for(int i=0;i<str.size();i++){
    //     char ch = str[i];
    //     c.push(ch);
    // }

    // while(!c.empty()){
    //     cout<<c.top();
    //     c.pop();
    // }

}