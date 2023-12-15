#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Graph
{
public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void BFS(int startVertex);

private:
    int numVertices;
    vector<vector<int>> adjLists;
};

Graph::Graph(int vertices) : numVertices(vertices), adjLists(vertices) {}

void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_back(dest);
    adjLists[dest].push_back(src);
}

void Graph::BFS(int startVertex) {
    vector<bool> visited(numVertices, false);
    queue<int> queue;

    visited[startVertex] = true;
    queue.push(startVertex);

    while (!queue.empty())
    {
        int currVertex = queue.front();
        cout << "Visited " << currVertex << " ";
        queue.pop();

        for (int adjVertex : adjLists[currVertex])
        {
            if (!visited[adjVertex])
            {
                visited[adjVertex] = true;
                queue.push(adjVertex);
            }
        }
    }
    cout<< endl;
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.BFS(2);

    return 0;
}
