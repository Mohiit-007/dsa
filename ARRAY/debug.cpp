#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;


bool findarraysum(int a[],int t){
    // for(int i=0;i<6;i++){             //complexity - o(n^2)
    //     for(int j=i+1;j<6;j++){
    //        if(a[i]+a[j] == t){
    //         cout<<a[i]<<","<<a[j]<<" ";
    //        }
    //     }
    // }
    int i = 0;
    int l = 5;

    while(i<l){  
        int sum = a[i]+a[l];  // timecomplextiy - o(nlogn)
        if(sum == t ){
            return true;
        }
        else if( sum > t ){
           return l--;
        }
        else{
           return i++;
        }
        cout<<i<<","<<l<<" ";
    }
    
    return false;
}


int pivotindex(int a[],int n){
    int lsum = 0;
    int rsum = 0;    

    int i=0;
    for(i=0;i<n;i++){
        for(int j=0;j<i;j++){
        lsum = lsum + a[j] ;
    }

        for(int j=i+1;j<n;j++){
        rsum = rsum + a[j] ;
    }
    }

    if(lsum == rsum ) return i;
    cout<<i;
}

int missingnumber(int a[],int n){
    int i;
    for( i=0;i<n;i++){
        if(a[i] != i ) return i;
        // else return i;
    }
    return n;
}

int missingnumber2(int a[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^a[i];
    }
    for(int i=0;i<=n;i++){
        ans = ans^i;
    }
    return ans;
}

int removeduplicate(int a[],int n){
    int i=0;
    int j=1;
    while(i<n){
        if(a[i] = a[j]) return j++;
        else{
            i++;
            a[j] = a[i];
            j++;
        } 
    }
    return i+1;
}

void findmaxaverage(int a[],int n,int k){
    int maxvalue = INT_MIN;
    for(int i=0;i<k;i++){
        int sum = 0;
        for(int j=i;j<k+i;j++){
            sum = sum + a[j];
            maxvalue = max(sum,maxvalue);
        }
    }
    cout<<maxvalue<<endl;
    float avgmaxvalue = (float)maxvalue/(float)k;
    cout<<avgmaxvalue;
}

void findmaxaverage2(int a[],int n,int k){
    int j = k-1;
    int i = 0;
    int sum = 0;
    for(int l=i;l<=j;l++)
        sum = sum + a[l];
        int maxvalue = sum;
        j++;
    
    while(j<n){
        sum = sum - a[i++];
        sum = sum + a[j++];
        maxvalue = max(maxvalue,sum);
    }
    cout<<maxvalue<<endl;
    float avgmaxvalue = (float)maxvalue/(float)k;
    cout<<avgmaxvalue;
}    

void sortarray(int a[],int n){
    int i,l,m;
    i = 0;
    l = n-1;
    m = 0;

    while(m<=l){
        if(a[m] == 0){
        swap(a[m],a[i]);
        i++;
        m++;
    }
    else if(a[m] == 1){
        m++;
    }
    else{
        swap(a[m],a[l]);
        l--;
    }

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void negativeleftarray(int a[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]<0){
            i++;
        }
        else if(a[j]>0){
            j--;
        }
        else{
            swap(a[i],a[j]);
        }
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}

// 1 3 4 3 2
// 1 -3 4 3 2
// 1 -3 4 -3 2
// 1 -3 4 -3 -2
int findduplicate(int a[],int n){
    int ans = -1;
    for(int i=0;i<n;i++){
        int index = abs(a[i]);

        if(a[index]<0){
            ans = index;
            return ans;
        }

        a[index] *= -1; 
    }
    return ans;
}


// 1 3 3 4 5
void missingelementwithduplicatearay(int a[],int n){
    for(int i=0;i<n;i++){
        int index = abs(a[i]);

        if(a[index-1]>0){
            a[index-1] *= -1; 
        }
}

for(int j=0;j<n;j++){
   if(a[j]>0){
    cout<<j+1<<" ";
   }
}

}

void firstrepetativeelment(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j]){
                cout<<i+1<<" ";
                return;
            }
        }
    }
    cout<<-1;
}

void findcommonelemet(int a[],int b[],int c[],int n1,int n2,int n3){  //time-complexity - o(n^3)
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            for(int k=0;k<n3;k++){
                if(a[i]==b[j] && b[j]==c[k]){
                    cout<<a[i]<<" ";
                    return;
                }
            }
        }
    }
}

void  removeduplicate2(int a[],int n){
    for (int i = 0; i < n; i++)
    {
       if(a[i] != a[i+1] ){
        cout<<a[i]<<" ";
       }
    }
    
}

void sortarray2(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] > a[j] ){
                swap(a[i],a[j]);
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}

void negativeleftarray21(int a[],int n){
    int i=0;
    int j=1;
    while(j<n){
        if(a[j]<0){
            swap(a[i],a[j]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}

int missingnumber3(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i] != i){
            return i;
        }
    }
    return n;
}

void printranposematrix(int a[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printranposematrix2(int a[][4],int rowsize,int colsize){
    for(int i=0;i<colsize;i++){
        if((i&1) == 0){
            for(int j=0;j<rowsize;j++){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=rowsize-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        cout<<endl;
    }
}

void printspiralmatrix(int a[][3],int rowsize,int colsize){
    for(int i=0;i<=0;i++){
        for(int j=0;j<colsize;j++){
            cout<<a[i][j]<<" ";
        }
    }
    for(int i=1;i<rowsize;i++){
        for(int j=colsize-1;j<=colsize-1;j++){
             cout<<a[i][j]<<" ";
        }
    }
    for(int i=rowsize-1;i<=rowsize-1;i++){
        for(int j=colsize-2;j>=0;j--){
             cout<<a[i][j]<<" ";
        }
    }
    for(int i=rowsize-2;i<=rowsize-2;i++){
        for(int j=0;j<colsize-1;j++){
             cout<<a[i][j]<<" ";
        }
    }
}

void segregrate(vector<int> a,int n){
    int s = 0;
    int e = n-1;
  while(s<e){
    if(a[s] == 1 && a[e] == 0){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    else{
        if(a[s]==0){
            s++;
        }
        if(a[e]==1){
            e--;
        }
    }
  }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void complementarr(vector<int> a){
    int n = a.size();
    vector<int> twoscomp(n,0);   
    int m = twoscomp.size();

    cout<<"one's complement: ";
    for(int i=0;i<n;i++){
        if(a[i]==0){
            twoscomp[i]=1;
        }
        else{
            twoscomp[i]=0;
        }
        cout<<twoscomp[i]<<" ";
    }
    cout<<endl;


    int carry = 1 ;
    for(int i=n-1;i>=0;i--){
        int sum = twoscomp[i] + carry;
        twoscomp[i] = sum%2;
        carry = sum/2;
    }
    cout<<"two's complement: ";
    if(carry==1){
        cout<<carry<<" ";
    } 
    for(int j=0;j<m;j++){
        cout<<twoscomp[j]<<" ";
    }

}

void  rotateby90(vector<vector<int>> a){
    int n = a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                swap(a[i][j],a[j][i]);
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
       for(int j=n-1;j>=0;j--){
        cout<<a[i][j]<<" ";
       }
       cout<<endl;
    }

}

int main(){
     vector<vector<int>> crr = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
    rotateby90(crr);

    // vector<int> arr = {0,0,0,0};
    // complementarr(arr);
    int arr[] = {1,4,45,6,10,8};
    sort(arr,arr+6);
    // int target;
    // cout<<"enter target element to find :";
    // cin>>target;
    // if(findarraysum(arr,target)){
    //     cout<<"elment is found";
    // }
    // else{
    //     cout<<"element is not found";
    // }
    int brr[] = {1,7,3,6,5,6};
    int n = 6;
    // pivotindex(brr,n);
    int crr[] = {0,2,1};
    sort(crr,crr+3);
    int m = 3;
    // cout<<missingnumber(crr,m)<<" "<<endl;
    // cout<<missingnumber2(crr,m)<<" "<<endl;

    int drr[] = {0,0,1,1,1,2,2,3,3,4};
    int a = 10;
    // cout<<removeduplicate(drr,a)<<" ";

    int err[] = {1,12,-5,-6,50,3};
    int a1 = 6;
    int k = 4;
    // findmaxaverage(err,a1,k);
    // cout<<endl;
    // findmaxaverage2(err,a1,k);

    int frr[] = {2,0,2,1,1,0};
    int a2 = 6;
    // sort(frr,frr+6);
    // sortarray(frr,a2);

    int grr[] = {1,2,-3,4,-5,6};
    int a3 = 6;
    // negativeleftarray(grr,a3);
 
    int hrr[] = {1,3,4,3,2};
    // sort(hrr,hrr+5);
    int a4 = 5;
    // cout<<findduplicate(hrr,a4);

    int irr[] = {1,3,5,3,4};
    // sort(irr,irr+5);
    int a5 = 5;
    // missingelementwithduplicatearay(irr,a5);

    int jrr[] = {1,5,3,4,3,5,6};
    // sort(irr,irr+5);
    int a6 = 7;
    // firstrepetativeelment(jrr,a6);

    int A[] = {3,3,3};
    int B[] = {3,3,3};
    int C[] = {3,3,3};
    int n1 = 3;
    int n2 = 3;
    int n3 = 3;
    // findcommonelemet(A,B,C,n1,n2,n3);
    
    int A1[] = {0,0,1,1,1,2,2,3,3,4};
    int n5 = 10;
    // removeduplicate2(A1,n5); 

    int B11[] = {2,0,2,1,1,0};
    int n6 = 6;
    // sortarray2(B11,n6);

    int C1[] = {1,2,-3,4,-5,-6,-9,7};
    int n7 = 8;
    // negativeleftarray21(C1,n7);

    int arr1[] = {0,1,3};
    sort(arr1,arr1+3);
    int x = 3;
    // cout<<missingnumber3(arr1,x);

    int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
    int x1 = 3;
    // printranposematrix(matrix,x1);


    int matrix2[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    int rowsize = 5;
    int colsize = 4;
    // printranposematrix2(matrix2,rowsize,colsize);

    int matrix3[3][3] = {1,2,3,4,5,6,7,8,9};
    int rowsize1 = 3;
    int colsize1 = 3;
    // printspiralmatrix(matrix3,rowsize1,colsize1);

    vector<int> v = {0,1,1,0,0,1,0,1,1,0,1,0};
    int z1 = v.size();
    segregrate(v,z1);
    

}