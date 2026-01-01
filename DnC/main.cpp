#include<iostream>
#include<vector>
using namespace std;

bool issafe(int x,int y,vector<vector<int>> &arr,vector<vector<bool>> &visited){
    if(x<0 || y<0 || x>=arr.size() || y>=arr[0].size() ){
        return false;
    }
    if(visited[x][y] == true){
        return false;
    }
    if(arr[x][y] == 0){
        return false;
    }
    return true;
}

void solve(vector<vector<int>> &arr,vector<vector<bool>> &visited,int n,vector<string> &ans,string &output,int i,int j){
    if(i == arr.size()-1 && j == arr[0].size()-1){
        ans.push_back(output);
        return;
    }

    int dx[] = {-1,1,0,0};
    int dy[] = {0,0,-1,1};
    char ch[] = {'U','D','L','R'};
    for(int k=0;k<4;k++){
        int newx =  i + dx[k];
        int newy =  j + dy[k];
        char chr = ch[k];
        if(issafe(newx,newy,arr,visited)){
            output.push_back(chr);
            visited[newx][newy] = true;
            solve(arr,visited,n,ans,output,newx,newy);
            output.pop_back();
            visited[newx][newy] = false;
        }
    }

}
  
int main(){
    vector<vector<int>> arr = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1},
    };
    vector<string> ans;

    int n = arr.size();
    vector<vector<bool>> visited(n,vector<bool>(n,0));
    arr[0][0] = true;
    string output = "";

    solve(arr,visited,n,ans,output,0,0);
    for(auto it : ans){
        cout<<it<<" ";
    }
    // output :- DDRDRR DRDDRR 

}