#include <iostream>
#include <unordered_map>
#include <set>
#include <limits.h>
#include <vector>
using namespace std;

class graph
{
public:
    unordered_map<int, vector<pair<int, int>>> mp;

    void add(int u, int v, int weight, int direction)
    {
        if (direction == 0)
        {
            mp[u].push_back({v, weight});
        }
        else
        {
            mp[u].push_back({v, weight});
            mp[v].push_back({u, weight});
        }
    }

    void DijkastraAlgo(int V, int src) // time complexity - o((V+E)logV)
    {   // DijkastraAlgo not allowed negative weights and neg. cycle and it is based on greedy approach
        //it is used to find shortest dist through src node to multiple nodes
        // it can be implemented by min heap or set

        set<pair<int, int>> st;
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;
        st.insert({0, src});
        while (!st.empty())
        {
            auto topnode = *(st.begin());
            int srcnode = topnode.second;
            st.erase(st.begin());
            for (auto nbr : mp[srcnode])
            {
                int nbrnode = nbr.first;
                int distance_nbr_to_src = nbr.second;
                if (dist[srcnode] != INT_MAX && dist[srcnode] + distance_nbr_to_src < dist[nbrnode])
                {
                    auto it = st.find({dist[nbrnode], nbrnode});
                    if (it != st.end())
                    {
                        st.erase(it);
                    }
                    dist[nbrnode] = dist[srcnode] + distance_nbr_to_src;
                    st.insert({dist[nbrnode], nbrnode});
                }
            }
        }

        for (int i = 0; i < (int)dist.size(); i++)
        {
            cout << dist[i] << " ";
        }
    }

    void BellmanFordAlgo(int V, int src)
    {   //it is used to find shortest dist through src node to multiple nodes with neg. weights also
        //and it is used to the neg. cycle
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;
        for (int i = 0; i < V - 1; i++)
        {
            for (auto it : mp)
            {
                for (auto nbr : it.second)
                {
                    int srcnode = it.first;
                    int nbrnode = nbr.first;
                    int weight = nbr.second;
                    if (dist[srcnode] != INT_MAX && dist[srcnode] + weight < dist[nbrnode])
                    {
                        dist[nbrnode] = dist[srcnode] + weight;
                    }
                }
            }
        }

        for (auto it : dist)
        {
            cout << it << " ";
        }
    }

    bool negativeCyclecheck(int V, int src)
    {
        vector<int> dist(V, INT_MAX);
        dist[src] = 0;
        for (int i = 0; i < V - 1; i++)
        {
            for (auto it : mp)
            {
                for (auto nbr : it.second)
                {
                    int srcnode = it.first;
                    int nbrnode = nbr.first;
                    int weight = nbr.second;
                    if (dist[srcnode] != INT_MAX && dist[srcnode] + weight < dist[nbrnode])
                    {
                        dist[nbrnode] = dist[srcnode] + weight;
                    }
                }
            }
        }
        bool flag = false;
        for (auto it : mp)
        {
            for (auto nbr : it.second)
            {
                int srcnode = it.first;
                int nbrnode = nbr.first;
                int weight = nbr.second;
                if (dist[srcnode] != INT_MAX && dist[srcnode] + weight < dist[nbrnode])
                {
                    flag = true;
                    if (flag)
                        return true;
                    dist[nbrnode] = dist[srcnode] + weight;
                }
            }
        }
        return false;
    }

    void FloydWarshallAlgo(int V)
    {
        // this algo is used to find shortest dist. b/w multiple nodes to multiple nodes and
        // we store it in 2D matrix
        // we use a helper(take all nodes) to find shortest b/w multiple nodes
        vector<vector<int>> dist(V, vector<int>(V, 1e9));
        for (int i = 0; i < V; i++)
        {
            dist[i][i] = 0;
        }
        for (auto it : mp)
        {
            for (auto nbr : it.second)
            {
                int u = it.first;
                int v = nbr.first;
                int weight = nbr.second;
                dist[u][v] = weight;
            }
        }

        for (int helper = 0; helper < V; helper++)
        {
            for (int u = 0; u < V; u++)
            {
                for (int v = 0; v < V; v++)
                {
                    dist[u][v] = min(dist[u][v], dist[u][helper] + dist[helper][v]);
                }
            }
        }
        for (auto row : dist)
        {
            for (auto col : row)
            {
                cout << col << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    graph g;
    // g.add(0,5,9,1);
    // g.add(0,3,6,1);
    // g.add(5,4,2,1);
    // g.add(4,3,11,1);
    // g.add(5,1,14,1);
    // g.add(4,1,9,1);
    // g.add(4,2,10,1);
    // g.add(3,2,15,1);
    // g.add(2,1,7,1);
    // g.DijkastraAlgo

    // g.add(0,1,-1,0);
    // g.add(1,4,2,0);
    // g.add(0,2,4,0);
    // g.add(3,2,5,0);
    // g.add(4,3,-3,0);
    // g.add(1,2,3,0);
    // g.add(1,3,2,0);
    // g.add(3,1,1,0);
    // g.BellmanFordAlgo(5,0);

    // g.add(0, 1, -1, 0);
    // g.add(1, 0, -2, 0);
    // if (g.negativeCyclecheck(2, 0))
        // cout << "negative cycle is present" << endl;
    // else
        // cout << "negative cycle not present" << endl;

    g.add(0,2,-2,0);
    g.add(1,0,4,0);
    g.add(1,2,3,0);
    g.add(2,3,2,0);
    g.add(3,1,-1,0);
    g.FloydWarshallAlgo(4);    
}