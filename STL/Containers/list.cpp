#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> mylist;
    list<int> mylist2 = {100,200,300,400};

    cout<<mylist.max_size()<<endl;

    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(10);
    mylist.push_back(50);
    mylist.push_front(100);
    mylist.pop_back();
    mylist.pop_front();

    // swap function
    mylist.swap(mylist2);   

    // mylist.remove(10);  // to remove element from list

    cout<<mylist.size()<<endl;
    // mylist.clear();   // to remove all list elements

    mylist.insert(mylist.begin(),20);
    // mylist.erase(mylist.begin(),mylist.end());

    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;

    list<int>::iterator it=mylist.begin();
    while(it!=mylist.end()){
        cout<<*it<<" ";
        it++;
    }

    cout<<endl;
    if(mylist.empty() == true ) cout<<"empty list"<<endl;
    else cout<<"non-empty list"<<endl;
    

}