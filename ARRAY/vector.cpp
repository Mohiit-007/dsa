#include<iostream>
#include<vector>
using namespace std;

// vector is dynamic array
// vector is dynamic in size while array is static size means element can't insert after initialize of size; 

void printvector(vector<int> v){
    //int *arr = new int[n]  // to take input of size of array 
    // int capacity = v.capacity();
    int size  = v.size();
    cout<<"print vector: "<<endl;
    for(int i=0;i<size;i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    cout<<v.front()<<endl;  // to print starting element of array vector
    cout<<v.back()<<endl;  // to print end element of array vector
    v.insert(v.begin()+2,3,70);  // lets you insert anywhere inside the vector.
    v.insert(v.end()-2,3,80);  // lets you insert anywhere inside the vector.
    v.erase(v.begin()+3,v.end()-3); //removes elements from index 3 to last index at 3
    printvector(v);
    v.pop_back(); // means 1 element will delete form right side
    // printvector(v);
    // v.clear();  // all element will delete in vector
    // printvector(v); 

    // input in vector
    int n,m;
    cout<<"enter size of array: "; 
    cin>>n;  // after intialize of size still can add elements
    for(int i=0;i<n;i++){
        cout<<"enter elements of vector at "<<i<<" index" <<": "<<endl;
        cin>>m;
        v.push_back(m);
    }  
    printvector(v);

    //initalization in vector
    vector<int> arr = {1,2,3,4,5};
    vector<int> brr{1,2,3,4,5};
    vector<int> err(5,10);  // print 10 at 5 places
    // printvector(arr);

    // copy of vector;
    vector<int> drr(v);
    printvector(drr);


}