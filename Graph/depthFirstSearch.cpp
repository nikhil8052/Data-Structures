#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

// Graph class to build the Graph independently
class Graph {
   public:
    // Map to hold edges and vertexs
    unordered_map<int, list<int>> graph;
    unordered_map<int, bool> visited;

    // Add new edge to the grpah
    int add_edge(int vertex, int edge, bool bidirection) {
        graph[vertex].push_back(edge);

        // if bidirection is true then make bidirection communication
        if (bidirection == true) {
            graph[edge].push_back(vertex);
        }
    }

    // Depth First Search
    void dfs(int src) {
        cout << src << " ";
        visited[src] = true;

        for (auto e : graph[src]) {
            if (visited[e] != true) {
                dfs(e);
            }
        }
    }
};

// Code starts from here
int main() {
    Graph graph;
    graph.add_edge(1, 3, true);
    graph.add_edge(3, 1, true);
    graph.add_edge(1, 90, true);
    graph.add_edge(1, 15, true);
    graph.add_edge(1, 63, true);
    graph.dfs(1);
}
