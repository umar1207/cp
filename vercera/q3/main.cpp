#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Graph {
public:
    Graph(int nodes) : nodes(nodes), adjacencyList(nodes + 1) {}

    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    int getMaxFloor(int startingNode) {
        unordered_set<int> visited;
        dfs(startingNode, visited);
        return *max_element(visited.begin(), visited.end());
    }

private:
    void dfs(int currentNode, unordered_set<int>& visited) {
        visited.insert(currentNode);

        for (int neighborNode : adjacencyList[currentNode]) {
            if (visited.find(neighborNode) == visited.end()) {
                dfs(neighborNode, visited);
            }
        }
    }

    int nodes;
    vector<vector<int>> adjacencyList;
};

int main() {
    int N;
    cin >> N;

    Graph graph(1000000000);  // Assuming 10^9 floors

    for (int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        graph.addEdge(A, B);
    }

    int startingFloor = 1;
    int maxFloor = graph.getMaxFloor(startingFloor);

    cout << maxFloor << endl;

    return 0;
}
