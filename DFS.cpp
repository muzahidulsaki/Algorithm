#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Graph {
public:
    Graph(int vertices) : numVertices(vertices), adjLists(vertices), visited(vertices, false) {}

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
    }

    void DFS(int vertex) {
        visited[vertex] = true;
        cout << vertex << " ";

        for (int neighbor : adjLists[vertex]) {
            if (!visited[neighbor]) {
                DFS(neighbor);
            }
        }
    }

private:
    int numVertices;
    vector<vector<int>> adjLists;
    vector<bool> visited;
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    g.DFS(1);

    return 0;
}
