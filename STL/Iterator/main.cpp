#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};

    // traverse through for loop
    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // }

    // traverse through while loop
    // vector<int>::iterator it=v.begin();
    // while(it!=v.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }

    //input iterator - means only read the vector and moves in only forward direction
    vector<int>::iterator it=v.begin();
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }

    //output iterator - means only write the vector and moves in only forward direction
    vector<int>::iterator it2=v.begin();
    while(it2!=v.end()){
        *it2 = (*it2) + 4;
        it2++;
    }

    cout<<endl;
    //Forward iterator - for both read and write and movies in only forward direction
    // vector<int>::iterator it3=v.begin();
    // while(it3!=v.end()){
    //     *it3 = (*it3) + 4;
    //     cout<<*it3<<" ";
    //     it3++;
    // }

    //bidirectional iterator - for both read and write operation and moves in both dir. forwward and backward

    // vector<int>::iterator it3=v.begin();
    // while(it3!=v.end()){
    //     *it3 = (*it3) + 10;
    //     cout<<*it3<<" ";
    //     it3++;
    // }

    vector<int>::iterator it3=v.end();
    while(it3!=v.begin()){
        it3--;
        *it3 = (*it3) + 10;
        cout<<*it3<<" ";
    }

    cout<<endl;
    //Rnadom access iterator - for both read and write operation and moves in both dir. forwward and backward and access any value in vector at any position
    vector<int>::iterator it4=v.begin()+3;
    cout<<*it4<<endl;

//   random access iterator - use for vector , array and deque

}