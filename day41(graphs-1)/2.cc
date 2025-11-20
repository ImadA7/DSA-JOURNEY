#include<iostream> //bfs code
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V; // number of vertices
    list<int> *l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u); // undirected graph
    }

    void printAdjList(){
        for(int i = 0; i < V; i++){
            cout << i << " -> ";
            for(int nbr : l[i]){
                cout << nbr << ", ";
            }
            cout << endl;
        }
    }
 
    void bfs(){//O(V+E)
        queue<int> q;
        vector<bool> visited(V, false);
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int f = q.front();
            cout << f << " ";
            q.pop();
            list<int>  nbrs = l[f];
            for(int nbr : nbrs){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        cout << endl;
    }

    void dfs
    
};

int main(){
    Graph graph(7);
    //undirected 
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
     graph.addEdge(2, 4);
          graph.addEdge(3, 4);
     graph.addEdge(3, 5);
     graph.addEdge(4, 5);
     graph.addEdge(5, 6);

    graph.printAdjList();
    return 0;
}