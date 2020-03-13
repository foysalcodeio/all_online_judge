//https://csacademy.com/lesson/breadth_first_search
#include <bits/stdc++.h>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <queue>
using namespace std;
const int MAX_N = 100005;

vector<int> graph[MAX_N];
int dist[MAX_N];
bool visited[MAX_N];

void bfs(int startNode) {
    dist[startNode] = 0;
    queue<int> bfsQueue;
    bfsQueue.push(startNode);
    visited[startNode] = true;
    while (!bfsQueue.empty()) {
        int currentNode = bfsQueue.front();
        bfsQueue.pop();
        for (auto neighbour: graph[currentNode]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                dist[neighbour] = dist[currentNode] + 1;
                bfsQueue.push(neighbour);
            }
        }
    }
}

int main() {
    int N, M, v, x, y;
    cin >> N >> M >> v;
    for (int i = 1; i <= M; i += 1) {
        cin >> x >> y;
        graph[x].push_back(y);
    }
    for (int i = 1; i <= N; i += 1) {
        dist[i] = -1;
    }
    bfs(v);
    for (int i = 1; i <= N; i += 1) {
        cout << dist[i] << " ";
    }
    return 0;
}


