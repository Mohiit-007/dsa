#include<iostream>
using namespace std;

int main(){

    // compare
    // string A = "love";
    // string B = "amit";
    // int ans = A.compare(B);
    // cout<<ans<<endl;
 
    // find string
    string name = "hello jee kaise ho";
    int ans  = name.find("kaise"); // if founds return a index of that char and if not return -1
    cout<<ans<<endl;
    

    // insert a string
    string str = "hello jee kaise ho";
    cout<<str.insert(5," yrrr")<<endl;
    cout<<str.erase(5,2); //remove from 5 index upto 2 char 

    // string str = "Hi";
    // str +=  " world";
    // cout<<str;



//     string str = "a";
//     cout<<str.back();
//     cout<<str.front();

//    string str = "mohit";
// //    string str;
//    cout<<"enter the input: "<<endl;

//    string A = "mohit";
//    string B = "kumar";
//    string C = "sahu";
//    string ans = A + B + C;
//    cout<<ans<<endl;

//     // getline(cin,str); 
   
// //    str.push_back('m');
// //    str.push_back('o');
// //    str.push_back('h');
// //    str.push_back('i');
// //    str.push_back('t');
// //    str.pop_back();
// //    str.clear();
//    cout<<str[0]<<endl;
//    cout<<str.front()<<endl;
//    cout<<str.back()<<endl;
//    cout<<str.length()<<endl;
//    cout<<str.size()<<endl;

//    auto it = str.begin();
//    while(it != str.end()){
//     cout<<*it<<" ";
//     it++;
//    }

//    cout<<endl;
//    if(str.empty()){
//     cout<<"string is an empty"<<endl;
//    }
//    else{
//     cout<<"string is not empty"<<endl;
//    }

    // getline(cin,str); // default value s '/n' means after new line it will not take input
    // getline(cin,str,'A'); // custom value
    // to take input
    //    cin>>str;
    // to print output
//    cout<<str;


    
}