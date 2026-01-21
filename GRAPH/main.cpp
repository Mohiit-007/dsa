#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;
// topologocal sort is only for DAG(directed acyclic graph)  
class graph
{
public:
    unordered_map<int, vector<pair<int, int>>> mp;

    void add(int u, int v, bool direction, int weight)
    {
        if (direction)
        { // directed  a->b it means b is dependent on a
            mp[u].push_back({v, weight});
        }
        else
        { // undirected
            mp[u].push_back({v, weight});
            mp[v].push_back({u, weight});
        }
    }

    void print(int n)
    {
        for (int i = 0; i <= n; i++)
        {
            if (mp.find(i) != mp.end())
            {
                cout << i << " - ";
                auto &adj = mp[i];
                for (auto &it : adj)
                {
                    cout << it.first << " " << it.second << " ";
                }
                cout << endl;
            }
        }
    }

    void BFStraversal(int src)
    {
        queue<int> q;
        unordered_map<int, bool> visited;
        q.push(src);
        visited[src] = true;
        cout << src << endl;
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            auto &temp = mp[it];
            // temp.first // node
            // temp.second // weight
            for (auto it : temp)
            {
                int node = it.first;
                int weight = it.second;
                if (!visited[node])
                {
                    cout << node << " ";
                    q.push(node);
                    visited[node] = true;
                }
            }
            cout << endl;
        }
    }

    void DFShelper(int src, unordered_map<int, bool> &visited)
    {

        visited[src] = true;
        cout << src << " ";
        auto &temp = mp[src];
        for (auto it : temp)
        {
            int node = it.first;
            if (!visited[node])
            {
                DFShelper(node, visited);
            }
        }
    }

    void DFStraversal(int n)
    {

        unordered_map<int, bool> visited;
        for (int i = 0; i <= n; i++)
        {
            if (!visited[i])
            {
                DFShelper(i, visited);
            }
        }
    }

    void dfshelper(int src,unordered_map<int,bool> &visited,stack<int>& ans){

        visited[src] = true;
        for(auto nbr : mp[src]){
            int nbrnode = nbr.first;
            if(!visited[nbrnode]){
                dfshelper(nbrnode,visited,ans);
            }
        }
        ans.push(src);
    }

    void dfs(int src,unordered_map<int,bool>& vis,unordered_map<int,vector<int>> &adjList){
        cout<<src<<" ";
        vis[src] = true;
        for(auto nbr : adjList[src]){
            if(!vis[nbr]){
                dfs(nbr,vis,adjList);
            }
        }
    }

    int KosarajuAlgo(int V){
        // to Find strongly connected components
        stack<int> ans;
        unordered_map<int,bool> visited;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfshelper(i,visited,ans);
            }
        }

        unordered_map<int,vector<int>> adjList;
        for(auto it : mp){
            for(auto nbr : it.second){
                int u = it.first;
                int v = nbr.first;
                adjList[v].push_back(u);
            }
        }

        int count = 0;
        unordered_map<int,bool> vis;
        while(!ans.empty()){
            int node = ans.top();
            ans.pop();
            if(!vis[node]){
                cout<<"SSC->";
                count++;
                dfs(node,vis,adjList);
                cout<<endl;
            }
        }
        return count;
    }

    void FindBridgeDFS(int src,int parent,vector<int>& tin,vector<int>& low,int &timer,unordered_map<int,bool>& visited){
        visited[src] = true;

        timer++;
        tin[src] = timer;
        low[src] = timer;
        auto& temp = mp[src];
        for(auto nbr : temp){
            int nbrnode = nbr.first;
            if(nbrnode == parent){
                continue;
            }
            else if(!visited[nbrnode]){
                FindBridgeDFS(nbrnode,src,tin,low,timer,visited);
                low[src] = min(low[src],low[nbrnode]); // remember!!!!
                if(low[nbrnode] > tin[src]){ 
                    cout << src << "->" << nbrnode << endl;
                }
            } 
            else{
                low[src] = min(low[src],low[nbrnode]);
            }
        }

    }

    void FindBridge(int V){
        // Tarjan's algo
        // it is used in critical connections questions in leetcode vvvip
        vector<int> tin(V);
        vector<int> low(V);
        int timer = 0;
        int parent = -1;
        unordered_map<int,bool> visited;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                FindBridgeDFS(i,parent,tin,low,timer,visited);
            }
        }

    }
    void DFStopology(int src,unordered_map<int,bool>& visited,stack<int>& ans){
        visited[src] = true;

        for(auto nbr : mp[src]){
            int nbrnode = nbr.first;
            if(!visited[nbrnode]){
                DFStopology(nbrnode,visited,ans);
            }
        }
        // push into stack during backtracking
        ans.push(src);
    }

    void Topologysort(int n,int src,stack<int>& ans){
        // it is only for DAG or it is used in course scheduling or dependencies
        unordered_map<int,bool> visited;
        for(int i=src;i<n;i++){
            if(!visited[i]){
                DFStopology(i,visited,ans);
            }
        }
    }

    void BFStopologysort(int n,vector<int>& toposort){
        // khan's algorithm it is also used ot check cycle in DG if it is equal to total nodes it means there is no cycle otherwise there is cycle
        unordered_map<int,int> indegree;
        
        for(int src=0;src<n;src++){
            for(auto nbr : mp[src]){
            int nbrnode = nbr.first;
            indegree[nbrnode]++;
         }
        }
        int src = 0;
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
                src = i;
                break;
            }
        }

        queue<int> q;
        q.push(src);
        while(!q.empty()){
            int front = q.front();
            toposort.push_back(front);
            q.pop();
            for(auto nbr : mp[front]){
                int nbrnode = nbr.first;
                indegree[nbrnode]--;
                if(indegree[nbrnode] == 0){
                    q.push(nbrnode);
                }
            }
        }
    }

};


int main()
{
    graph g;
    g.add(0, 3, 1, 4);
    g.add(0, 5, 1, 5);
    g.add(0, 2, 1, 9);
    g.add(2, 5, 1, 8);
    g.add(3, 5, 1, 8);
    g.add(5, 4, 1, 8);
    g.add(5, 6, 1, 8);
    g.add(4, 1, 1, 8);
    g.add(6, 1, 1, 8);
    stack<int> ans;
    g.Topologysort(7,0,ans);
    while(!ans.empty()){
        int top = ans.top();
        cout<<top<<"->";
        ans.pop();
    }
    cout<<endl;
    vector<int> toposort;
    g.BFStopologysort(7,toposort);
    for(auto it : toposort){
        cout<<it<<"->";
    }
    // n -> no. of vertices
    // g.print(3);
    // // g.BFStraversal(0);
    // // g.DFStraversal(0);
    // // g.add(0,3,1,1);
    // // g.add(3,2,1,1);
    // // g.add(2,1,1,1);
    // // g.add(1,0,1,1);
    // // g.add(2,4,1,1);
    // // g.add(4,5,1,1);
    // // g.add(5,6,1,1);
    // // g.add(6,4,1,1);
    // // g.add(6,7,1,1);
    // // int n = 8;
    // // cout<<g.KosarajuAlgo(n);
    // g.add(0,1,0,0);
    // g.add(1,2,0,0);
    // g.add(0,2,0,0);
    // g.add(1,3,0,0);
    // g.add(3,4,0,0);
    // int n = 5;
    // g.FindBridge(n);

}
