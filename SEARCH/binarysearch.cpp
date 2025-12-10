#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<string>
#include<numeric>
using namespace std;

// time complecity of binary-search is o(logn)
int binarysearch(int nums[], int target,int n) {   //vice-versa for decresaing order
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(nums[mid] == target ){
                return mid;
            }
            else if(nums[mid]<target){
                start = mid+1;              }
            else{
                end = mid-1;
            }
            mid = (start+end)/2;
        }
            return -1;
}


void binarysearch_first_occurence(int nums[],int target,int n,int &AnsIndex){
     int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(nums[mid] == target ){
                AnsIndex = mid;
                // start = mid+1;  // for last occurence
                end = mid-1; //for first occurence
            }
            else if(nums[mid]<target){
                start = mid+1;          
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
}
  

void binarysearch_last_occurence(int nums[],int target,int n,int &AnsIndex2){
     int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(nums[mid] == target ){
                AnsIndex2 = mid;
                start = mid+1;  // for last occurence
                // end = mid-1; for first occurence
            }
            else if(nums[mid]<target){
                start = mid+1;          
            }
            else{
                end = mid-1;
            }
            mid = start + (end-start)/2;
        }
}

void binaryserachin2D(vector<vector<int>> &a,int target){
    int rows = a.size();
    int cols = a[0].size();
    int n = rows*cols;
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(target == a[rowIndex][colIndex]){
            cout<<"target is found: "<<target;
        }
        if(target<a[rowIndex][colIndex]){
            e = mid-1;
        }
        else{
            s= mid+1;
        }
        mid = s + (e-s)/2;
    }
    

}

void removeElement(vector<int> nums, int val) {
    vector<int> a;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] != val){
              a.push_back(nums[i]); 
            }
        }
     int m = a.size();
    cout<<m ;   
}

void pivotindex(vector<int> a,int target){
    int n = a.size();
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(mid+1 < n && a[mid]>a[mid+1]){
            cout<<mid;
        }
        if(a[s]<target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
}

int getQuotient(int divisor,int dividend){
    int s = 0;
    int e = dividend;
    int mid = s + ((e-s)>>1);
    int ans = -1;

    while(s<=e){
        if((mid*divisor) == dividend){
            return mid;
        }
        if((mid*divisor) < dividend ){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + ((e-s)>>1);
    }
    return ans;
}

int searchnearlysortedarray(int nums[], int target,int n) {   //vice-versa for decresaing order
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(nums[mid] == target ){
                return mid;
            }
            if(nums[mid-1] == target ){
                return mid-1;
            }
            if(nums[mid+1] == target ){
                return mid+1;
            }
            else if(nums[mid]<target){
                start = mid+2;              }
            else{
                end = mid-2;
            }
            mid = start + (end-start)/2;
        }
    return -1;
}

int sqrt(int n){
    int s =0 ;
    int e = n-1;
    int mid = s+e >>1;
    int ans = -1;
    while(s<=e){
        mid = s+e >>1;
        if(mid*mid<n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

double precisionsqrt(int n,int precision){
    double ans = sqrt(n);
    double step = 0.1;
    while(precision--){
        double j = ans;   // 7.0
       while(j*j<=n){
        ans = j;
        j = j + step;  // 7.9
       }
       step /= 10 ;    // 0.01
    }
    return ans;
}

void binarysearchin2Dmatrix(vector<vector<int>> &a,int target){
    int row = a.size();
    int col = a[0].size();

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sort(a[i].begin(),a[i].end()); // col-wise sort
        }
    }

    sort(a.begin(),a.end()); // row-wise sort

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int n = row*col;
    int s = 0 ;
    int e = n-1;
    int mid = (s+e)>>1; 
    while(s<=e){
        int rowindex = mid/col;
        int colindex = mid%col;

        if(a[rowindex][colindex] == target){
            cout<<target<<endl;
        }
        if(a[rowindex][colindex]<target){
           s = mid+1;
        } 
        else{
            e = mid-1;
        }
        mid = (s+e)>>1;
    }
    // return -1;
}

bool isPossiblesolution(vector<int> arr,int m,int n,int mid){
    int count = 1;
    int totalpages = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(totalpages + arr[i] > mid){
            count ++;
            totalpages = arr[i];
            if(count>m){
                return false;
            }
            else{
                totalpages += arr[i];
            }
        }
    }
    return true;
}

int binarysearchbookallocation(vector<int> arr,int student,int pages){
    int n = arr.size();
    int s = 0;
    int e = accumulate(arr.begin(),arr.end(),0);
    int mid = (s+e)>>1;
    int ans = -1;
    while (s<=e)
    {
        if(isPossiblesolution(arr,student,pages,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
           s= mid+1;
        }
        mid = (s+e)>>1;
    }
    return ans;
    
}

bool aggressivecows(int a[],int n,int k,int mid){
    int cows = 1;
    int pos = a[0];
    for(int i=1;i<n;i++){
        if(a[i]-pos>=mid){
            cows++;
            pos = a[i];
            if(cows == k){
                return true;
            }
        }
    }
    return false;
}

int binarysearchaggressivecows(int arr[],int n,int k){
    int s = 0;
    int e = *max_element(arr,arr+n) - *min_element(arr,arr+n);
    int ans = -1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(aggressivecows(arr,n,k,mid)){ //mid- represents min. distance b/w cows
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

bool woodcutting(int a[],int n,int m,int mid){
    int sum = 0;
    for(int i=0;i<n;i++){
        if(a[i]>mid) sum += (a[i] - mid);
    }
    return sum>=m;
}

int  binarysearchwoodcutting(int arr[],int n,int m){
    int s =0 ;
    int e = *max_element(arr,arr+n);
    int ans = -1;

    while(s<=e){
        int mid = s + (e-s)/2;
        if(woodcutting(arr,n,m,mid)){
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;
    }
    return ans;
}

int main(){
    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int n = 10;
    // int target = 8;
    // cout<<binarysearch(arr,target,n)<<endl;

    //direct-method for binary search
    // vector<int> v = {1,2,3,4,4,5,6,7,8};
    // int n3 = 9;
    // int target3 = 5;
    // bool it = binary_search(v.begin(),v.end(),target);
    // cout<<it<<endl;  // 1 means found 0 means not found

    //find firstoccurence - use store and compute method
    // int brr[] = {10,20,20,20,20,30,40,50,50,60};
    // int n2 = 10;
    // int target2 = 20;
    // int firstindex = -1;
    // int lastindex = -1;
    // binarysearch_first_occurence(brr,target2,n,firstindex);
    // binarysearch_last_occurence(brr,target2,n,lastindex);
    // cout<<firstindex<<" "<<lastindex<<endl;
    // cout<<"total occurence: "<<((lastindex-firstindex)+1)<<endl;


    // int a[] = {1,10,99,4};
    // int a1 = 4;
    // int maxele = INT_MIN;
    // for(int i=0;i<4;i++){
    //     maxele = max(maxele,a[i]);
    // }
    // int target3 = maxele;
    // cout<<target3;
    // cout<<endl;
    // cout<<binarysearch(a,target3,a1)<<endl;

    // vector<int> b = {0,1,2,4,5,6,7};
    // int n3 = b.size();
    // rotate(b.begin(),b.begin()+3,b.end());
    // for(int i=0;i<n3;i++){
    //     cout<<b[i]<<" ";
    // }

    // cout<<endl;
    // vector<vector<int>> c = {
    //     {1,3,5,7},
    //     {10,11,16,20},
    //     {23,30,34,60}
    // };
    // int target4 =  21;
    // binaryserachin2D(c,target4); // time-complexity - o(n)

    // vector<int> nums = {0,1,2,2,3,0,4,2};
    // int val = 2;
    // removeElement(nums,val);

    // vector<int> nums2 = {4,5,6,7,0,1,2};
    // int target5 = 0;
    // pivotindex(nums2,target5);

    // int divisor = 4;
    // int dividend = 243;
    // int ans = getQuotient(abs(divisor),abs(dividend));
    // if((dividend>0 && divisor<0)||(dividend<0 && divisor>0)){
    //     ans = ans*-1;
    // }
    // cout<<ans<<endl;

    // int array[] = {10,3,40,20,50,80,70};
    // int n = 7;
    // int target = 70;
    // cout<<"element found at index: "<<searchnearlysortedarray(array,target,n)<<endl;

    // int p =63;
    // int q =7;
    // double result = (double)p/q;
    // cout<<result<<endl;
    // int n = 63;
    // int precision = 13;
    // double ans = precisionsqrt(n,precision);  // o(logn) + o(precision)
    // cout<<ans<<endl;
    // printf("precision sqrt: %.13f\n",ans);

    // vector<vector<int>> arr = {
    //     {11,9,10,12},
    //     {2,3,4,1},
    //     {6,8,7,5},
    // };

    // int target = 12;
    // binarysearchin2Dmatrix(arr,target);

    // book allocation problem
    // vector<int> arr = {12,34,67,90};
    // int m = 2;  //noo. of students 
    // int n = 4; //no. of pages in an array
    // int ans = binarysearchbookallocation(arr,m,n); // return a min. value of permutaion of book allocated to students
    // cout<<ans<<endl;

    // aggressive cows problem
    // int arr[] = {1,2,4,8,9};
    // int n = 5;
    // int k = 3;
    // sort(arr,arr+n);
    // cout<<"minimum distance between cows: "<<binarysearchaggressivecows(arr,n,k);

    //EKO - SPOJ problem or wood min height cutting problem
    // int arr[] = {4,42,40,26,46};
    // int n = 5;
    // int m = 20; // m means at least 20m is required wood
    // cout<<binarysearchwoodcutting(arr,n,m);

    // paratha making problem

}