#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;

bool search2darray(int a[][4],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a[i][j] == target ){
                return true;
            }
        }
    }
    return false;
}

bool searchvector2darray(vector<vector<int>> arr,int target){
    int row = arr.size();
    int col = arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == target ){
                return true;
            }
        }
    }
    return false;

}

void findminimum2Darray(int brr[][4]){
    int minvalue = INT_MAX;
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            minvalue = min(minvalue,brr[i][j]);
        }
    }
    cout<<minvalue<<endl;    
}


void findmaximum2Darray(int brr[][4]){
    int minvalue = INT_MIN;
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            minvalue = max(minvalue,brr[i][j]);
        }
    }
    cout<<minvalue<<endl;    
}

void colwisesum(int a[][4]){

    for(int i=0;i<4;i++){
       int sum=0;
        for(int j=0;j<3;j++){
            // cout<<a[i][j]<<" ";
            sum = sum + a[j][i];
        }
        // cout<<endl;
        cout<<sum<<" ";
    }
}   

void rowwisesum(int a[][4]){

    for(int i=0;i<3;i++){
       int sum=0;
        for(int j=0;j<4;j++){
            // cout<<a[i][j]<<" ";
            sum = sum + a[i][j];
        }
        // cout<<endl;
        cout<<sum<<" ";
    }
}   

void diagonalwisesum(int a[][4]){
        int sum=0;
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           if(i == j){
             sum = sum + a[i][j];
           }
        }
    }
     cout<<sum<<" ";
}

void transposematrix(int a[][3]){
    int n=3;
    int ans[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout<<a[i][j]<<" ";
                ans[i][j] = a[j][i]; 
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transposematrix2(int a[][3]){
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){   // it will print only upper triangle
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


void matrixmultiplication(int a[][3],int b[][2]){
    int c[2][2] = {0} ;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                c[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int brr[3][4] = {23,24,4,5,35,35,2,5,54,6,4,31};
    // findminimum2Darray(brr);
    // findmaximum2Darray(brr);
    // colwisesum(brr);
    cout<<endl;
    // rowwisesum(brr);
    cout<<endl;
    int brrr[4][4] = {23,24,4,5,35,35,2,5,54,6,4,31,45,67};
    // diagonalwisesum(brrr);
    int frr[3][3] = {10,20,30,40,50,60,70,80,90};
    // transposematrix(frr);
    // transposematrix2(frr);
    


    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // int brr[3][2] = {1,2,3,4,5,6};
    // int crr[2][3] = {1,2,3,4,5,6};
    // for(int i=0;i<=2;i++){
    //     for(int j=0;j<=2;j++){
    //     cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<=2;i++){
    //     for(int j=0;j<=2;j++){
    //     cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<3;i++){
    //     cout<<arr[i][i]<<" ";
    // }
    // cout<<endl;
    // cout<<endl;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // input in 2D array
    // int drr[2][3];                    
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<"enter value for "<<"("<<i<<","<<j<<") :";
    //         cin >>drr[i][j];
    //     }
    // }
    // cout<<"Input 2D array for row is : "<<endl;
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<drr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Input 2D array for col is : "<<endl;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<drr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    //searching 
    // int a[3][4] = {10,20,30,40,50,60,70,80,90,100,110,120};
    // int target;
    // cout<<"enter the target element to find: ";
    // cin>>target;

    // if(search2darray(a,target)){
    //     cout<<"element is found"<<endl;
    // }
    // else{
    //     cout<<"element is not found"<<endl;
    // }

    //searching in vector
    // int a[3][4] = {10,20,30,40,50,60,70,80,90,100,110,120};
    // vector<vector<int>> arr(3,vector<int>(4));
    // vector<int> v1 = {10,20,30,40};
    // vector<int> v2 = {50,60,70,80};
    // vector<int> v3 = {90,100,110,120};
    // arr.push_back(v1);
    // arr.push_back(v2);
    // arr.push_back(v3);
    // int target;
    // cout<<"enter the target element to find: ";
    // cin>>target;

    // if(searchvector2darray(arr,target)){
    //     cout<<"element is found"<<endl;
    // }
    // else{
    //     cout<<"element is not found"<<endl;
    // }

    int M[2][3] = {
        {1,2,3},
        {4,5,6},
    };

    int N[3][2] = {
        {1,2},
        {3,4},
        {5,6},
    };

    matrixmultiplication(M,N);

    
   
}