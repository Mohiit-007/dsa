#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

// ordered_map is considered to same as map time-complexity  - o(logn)
// in oredered map the table become sorted order
// unordered_map time-complexity - o(n)


int main(){

    // ordered map
    map<int,string> mp;
    mp.insert({2,"mohit"});
    mp.insert({3,"rohit"});
    mp.insert({1,"purohit"});

    map<int,string>::iterator it4 = mp.begin();
    while(it4!=mp.end()){
        pair<int,string> p = *it4;
        cout<<p.first<<" "<<p.second<<" ";
        it4++;
        cout<<endl;
    }


    // unordered map
    unordered_map<string,string> table;

    table["in"] = "INDIA";
    table.insert({"br","BRAZIL"});
    table.insert(make_pair("en","ENGLAND"));
    pair<string,string> p;
    p.first = "us";
    p.second = "USA";
    table.insert(p);

    // find method
    if(table.find("in") != table.end()) cout<<"key found"<<endl;
    else cout<<"key not found"<<endl;

    // count method
    if(table.count("in") == 1 ) cout<<"key exists"<<endl; // if count is 1 then key exists otherwise not
    else cout<<"key does not exist"<<endl;

    // traverse
    unordered_map<string,string>::iterator it3=table.begin();
    while(it3!=table.end()){
        pair<string,string> p = *it3;
        cout<<p.first<<" "<<p.second<<" ";
        it3++;
        cout<<endl;
    }

    // table.clear(); 
    // no swap function

    cout<<table.at("in")<<endl;
    table.at("in") = "INDIA2";
    cout<<table.at("in")<<endl;

    int n = table.size();
    auto it = table.begin();       // start iterator
    advance(it, n / 2);         // move to middle (3/2 = 2 steps -> key=3)

    table.erase(it);  // ✅ erase element at iterator

    unordered_map<string,string>::iterator it2=table.begin();
    while(it2!=table.end()){
        pair<string,string> p = *it2;
        cout<<p.first<<" "<<p.second<<" ";
        it2++;
        cout<<endl;
    }

    // table.erase(table.begin(),table.end()); //  to delete all elements of map

    cout<<table.size()<<endl;

    if(table.empty()==true) cout<<"empty";
    else cout<<"non-empty";

}