#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // shift elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // insert key
        arr[j + 1] = key;
    }
}

int main(){
    vector<int> v = {1,5,4,3,2};
    insertionSort(v);
    for(auto it : v){
        cout<<it<<" ";
    }
}