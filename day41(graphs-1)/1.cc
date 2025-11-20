#include<iostream> //building a graph using adjacency list
#include<list>
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
};

int main(){
    Graph graph(5);
    //undirected 
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.printAdjList();
    return 0;
}