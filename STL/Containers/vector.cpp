#include<iostream>
#include<vector>
using namespace std;

// vector is dynamic array
// vector is dynamic in size while array is static size means element can't insert after initialize of size; 
// vector is pass by refrence or pass by value

int main(){

    // 2D vector
    // vector<vector<int>> arr(4,vector<int>(4));
    vector<vector<int>> arr;
    int rowsize = arr.size();
    // int colsize = arr[0].size();
    arr.push_back({1,2,3,4});
    arr.push_back({1,2,3});
    arr.push_back({1,2});
    arr.push_back({1,2,3,4});
    arr.pop_back();  // to delete last row of 2D array

    // to traverse a 2D vector
  for(auto &row : arr){
    for(auto &val : row){
        cout<<val<<" ";
    }
    cout<<endl;
  }

    // 1D vector
    // creation of vector
    vector<int> marks;    //declaration of vector with name marks
    // vector<int> marks(10); // to assign the size of vector
    // vector<int> marks(10,-2); //to assign all values with -2 in a vector of marks size 10

    marks.reserve(10); // it is used to reserve the size of capacity
    cout<<marks.max_size()<<endl;

    // to insert a element from last to vector
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);

    // traversing a vector using iterator
    vector<int>::iterator it=marks.begin();
    while(it != marks.end()){
        cout<<*it<<" ";
        it++;
    }

    cout<<endl;
    // marks.clear(); // to remove all vector elements at a time

    //insert - adds elements at any position.
    marks.insert(marks.begin()+3,2,100);
    // marks.insert(marks.end(),200);

    //erase -  removes element(s).
    // marks.erase(marks.begin()+2);
    // marks.erase(marks.begin(),marks.end());


    //  to find capacity of vector 
    cout<<marks.capacity()<<endl;

    // to access vector at any index
    cout<<marks.at(3)<<endl;

    // to delete a element from last 
    marks.pop_back();

    // to print size of vector
    cout<<marks.size()<<endl;

    // to access vector at it's starting index and last index
    cout<<*(marks.begin())<<endl;
    cout<<*(marks.end())<<endl; //40 no pop include
    cout<<marks.front()<<endl;
    cout<<marks.back()<<endl;  // 30

    // to print all elements of vector
    for(int i:marks){
        cout<<i<<" ";
    }

    cout<<endl;
    // swap - exchanges contents of two vectors.
    vector<int> object;
    object.push_back(1);
    object.push_back(2);
    object.push_back(3);
    object.push_back(4);
    object.push_back(5);
    object.swap(marks);

    for(int i:object){
        cout<<i<<" ";
    }
 
}