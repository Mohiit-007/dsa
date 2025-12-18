#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int getlength(char arr[]){
    int i = 0;
    int count = 0;
    while(arr[i] != '\0'){
        i++;
        count++;
    }
    return count;
}

void replacecharacter(char arr[],char symbol,char space){
    int n = getlength(arr);
    for(int i=0;i<n;i++){
        if(arr[i] == space){
            arr[i] = symbol;
        }
    }
}

void convertinLowercase(char arr[]){
    int n = getlength(arr);
    for(int i=0;i<n;i++){
        char ch = arr[i];
      if(ch>='A' &&  ch<='z'){
        ch = ch - 'A' + 'a'; // to convert in lower case
        // ch = ch - 'a' + 'A'; // to convert in upper case
      }
        arr[i] = ch;
    }
}

void reverseCharArray(char arr[]){
    int n = getlength(arr);
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i];
    // }
    // cout<<endl;
    int s=0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}


bool checkpalindrome(char arr[]){
    int n = getlength(arr);
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    char arr[100]; // size of char will be 100
    cout<<"enter your name: ";

    // char arr1[100];
    // cin>>arr1;

    // char arr2[100];
    // cin>>arr2;

    // char arr3[300];
    // strcpy(arr3, arr1);       // copy arr1 into arr3
    // strcat(arr3, arr2);       // append arr2 into arr3
    // cout << arr3 << endl;


    // cin>>arr;
    cin.getline(arr,100,'\n'); // to remove delimeter  and return a value with space and '/n' is default delimeter
    // cin.getline(arr,100,'\t'); // to remove delimeter  and it will return a value with space until tab is not pressed
    // cin.getline(arr,100,'A'); // custom delimeter applies that print before A 
    cout<<arr<<endl;
    cout<<"length :"<<strlen(arr)<<endl;
    
    // for(int i=0;i<11;i++){
    //     cout<<arr[i]<<"->"<<(int)arr[i]<<endl; // char ASCII value , 0 ASCII value means null value 
    // }
    // cout<<"length of char is : "<<getlength(arr)<<endl;
    // replacecharacter(arr,'@',' ');
    // cout<<arr<<endl;

    // convertinUppercase(arr);
    // cout<<arr<<endl;

    // convertinLowercase(arr);
    // cout<<arr<<endl;

    // reverseCharArray(arr);
    // if(checkpalindrome(arr)){
    //     cout<<"palindrome number";
    // }
    // else{
    //     cout<<"Not a palindrome number";
    // }
    
}