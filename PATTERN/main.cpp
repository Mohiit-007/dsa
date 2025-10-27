#include <iostream>
using namespace std;

void printsquare(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void hollowsquare(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==0 || i==n-1 || j==0 || j==n-1 ){
            cout<<"* ";
           }
           else{
            cout<<"  ";
           }
        }
        cout<<endl;
    }
}

void rectangle(int m,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printPyramid(int n){
    for(int row=0; row<n; row++){
        // Print spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        // Print stars
        for(int col=0; col<row+1; col++){
            cout << "* ";
        }
        cout << endl;  // Move to next row
    }
}

void reversepyramid(int m){
    for(int row=0; row<m; row++){
        for(int col=0;col<row;col++)
        cout<<" ";
        for(int col=0;col<m-row;col++)
        cout<< "* ";
        cout<<endl;
    }
}

void printdiamond(int n){
    printPyramid(n);
    reversepyramid(n);
}

void hollowpyramid(int n){
    for(int row=0; row<n; row++){
        // Print spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        // Print stars
        for(int col=0; col<row+1; col++){
            if( row==0||row==n-1||col==0||col==row )
            cout<<"* ";
            else cout<<"  ";
        }
        cout << endl;  // Move to next row
    }
}

void reversehollowpyramid(int m){
    for(int row=0; row<m; row++){
        for(int col=0;col<row;col++)
        cout<<" ";
        for(int col=0;col<m-row;col++)
         if( row==0||row==m-1||col==0||col==m-row-1 )
            cout<<"* ";
            else cout<<"  ";
        cout<<endl;
    }
}

void hollowdiamond(int n){
     for(int row=0; row<n; row++){
        // Print spaces
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        // Print stars
        for(int col=0; col<row+1; col++){
            if( row==0||col==0||col==row )
            cout<<"* ";
            else cout<<"  ";
        }
        cout << endl;  // Move to next row
    }
    for(int row=0; row<n; row++){
        for(int col=0;col<row;col++)
        cout<<" ";
        for(int col=0;col<n-row;col++)
         if(row==n-1||col==0||col==n-row-1 )
            cout<<"* ";
            else cout<<"  ";
        cout<<endl;
    }
    
}

void mixpyramids(int n){
    //upper part
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
        cout<<"*";
        for(int j=0;j<2*i+1;j++)
        cout<<" ";
        for(int j=0;j<n-i;j++)
        cout<<"*";
        cout<<endl;
    }
    //lower part
     for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)
        cout<<"*";
        for(int j=0;j<2*(n-i)-1;j++)
        cout<<" ";
        for(int j=0;j<i+1;j++)
        cout<<"*";
        cout<<endl;  
    };

}

void fancy12pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2 == 0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void fullfancy12(int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2 == 0){
                cout<<i+1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<2*(n-i)-3;j++){
            if(j%2 == 0){
                cout<<n-i-1;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void ABCpattern(int n){
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        ch--;
        while (ch>'A')
        {
            ch--;
            cout<<ch;
        }
        
        cout<<endl;
    }
}

void numerichollowpyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==0||i==n-1||j==0||j==i){
                cout<<(j+1);
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void numerichollowhalfpyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
           if(i==0||i==n-1||j==1+i||j==n){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void palindromeopyramid(int n){
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        for(int col=0; col<row+1; col++){
            cout << col+1;
        }
        for(int col=row;col>0;col--){
            cout<<col;
        }
        
        cout << endl; 
    }
}

void solidhalfdiamond(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
        cout<<"*";
        cout<<endl;
    }
}

void fancypattern1(int n){
    for(int i=0;i<n;i++){
        int start_index = 8-i;
        int num = i+1;
        int count_num = num;
        for(int j=0;j<17;j++){
            if(j==start_index && count_num>0 ){
                cout<<num;
                start_index += 2;
                count_num--;
            }
            else{
                cout<<"*";
            }

        }
        cout<<endl;
    }
}

void fancypattern2(int n){
    int num = 1;
    int num2 = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num;
            num++;
            if(j<i){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start = num-n;
    for(int i=0;i<n;i++){
        int k =start;
        for(int j=0;j<n-i;j++){
            cout<<k;
            k++;
            if(j<n-i-1){
                cout<<"*";
            }
        }
        start = start - (n-i-1);
        cout<<endl;
    }
    
}


void pattern122(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}

void fancyprint3(int n){
    for(int row=0; row<n; row++){
        for(int col=0;col<1;col++){
            cout<<"*";
        }
        for(int col=0; col<row+1; col++){
            cout << col+1<< " ";
        }
        for(int col=row;col>0;col--){
            cout<<col<<" ";
        }
        for(int col=0;col<1;col++){
            cout<<"*";
        }
        
        cout << endl; 
    }
    
    for(int row=0; row<n; row++){
        int start = n-row-2;
         for(int col=0;col<1;col++){
            cout<<"*";
        }
        for(int col=0; col<n-row-1; col++){
            cout << col+1<<" ";
        }
        for(int col=start;col>0;col--){
            cout<<start<< " ";
            start--;
        }
        for(int col=0;col<1;col++){
            cout<<"*";
        }
        
        cout << endl; 
    }
}

void flyodtrainglepattern(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
}

void pascaletrianglepattern(int n){
    for(int i=1;i<n+1;i++){
        int c =1;
        for(int j=1;j<i+1;j++){
            cout<<c<<" ";
            c = c * (i-j)/j;
        }
        cout<<endl;
    }
}

void butterflytpattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)
        cout<<"*";
        for(int j=0;j<2*(n-i-1);j++)
        cout<<" ";
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        cout<<"*";
        for(int j=0;j<2*i+2;j++)
        cout<<" ";
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cout << "Enter value of n: ";
    cin >> n>>m;
    printsquare(n);
    hollowsquare(n);
    rectangle(n,m);
    printPyramid(n);
    reversepyramid(n);
    printdiamond(n);
    hollowpyramid(n);
    reversehollowpyramid(n);
    hollowdiamond(n);
    mixpyramids(n);
    fancy12pattern(n);
    fullfancy12(n);
    ABCpattern(n);
    numerichollowpyramid(n);
    numerichollowhalfpyramid(n);
    palindromeopyramid(n);
    solidhalfdiamond(n);
    fancypattern1(n);   // range upto 9
    fancypattern2(n);
    pattern122(n);
    fancyprint3(n);
    flyodtrainglepattern(n);
    pascaletrianglepattern(n);
    butterflytpattern(n);
     
}
