#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

// Graph class to build the Graph independently
class Graph {
   public:
    // Map to hold edges and vertexs
    unordered_map<int, list<int>> nodes;

    // Add new edge to the grpah
    int add_edge(int vertex, int edge, bool bidirection) {
        nodes[vertex].push_back(edge);

        // if bidirection is true then make bidirection communication
        if (bidirection == true) {
            nodes[edge].push_back(vertex);
        }
    }

    // Print the whole graph
    void print() {
        for (auto vertex : nodes) {
            cout << vertex.first << "-->";
            for (auto edges : vertex.second) {
                cout << edges << "-->";
            }
            cout << "\n";
        }
    }
};

int main() {
    Graph graph;
    graph.add_edge(1, 3, false);
    graph.add_edge(1, 90, true);
    graph.add_edge(2, 5, false);
    graph.add_edge(5, 6, true);
    graph.print();

    // OUTPUT
    /*

      6,1,5,90,2 are the vertexs and other are the edges connected to the
      vertexs;

      6-->5-->
      1-->3-->90-->
      5-->6-->
      90-->1-->
      2-->5-->

    */
}
