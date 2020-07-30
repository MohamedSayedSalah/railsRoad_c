//
// Created by Mohamed Sayed on 7/24/20.
//

#include <cstring>
#include "ShortestPath.h"
#include <iostream>
#include <queue>

/**
 *
 * @param s  your source vertex
 * @param d  your destination vertex
 * @return  the shortest path from source to destination
 *
 * every iteration :
 *          - pick the shortest edge from your source that has not been visited yet
 *          - relax
 *          - for every vertex v test if distance from source s to every other_vertex i in distance array is the shortest or not    s->v->i < s->i
 *          - if not update the array and mark v as visited
 *
 *
 *          the solution complexity is O (V*V)
 */

int ShortestPath::dijkstra(char s, char d) { // V * V

    bool visited[26];
    int dis[26];
    memset(visited, 0, sizeof visited);

    for (int &di : dis)
        di = 1 << 30;

    dis[s - 'A'] = 0;
    while (true) {
        int val = 1 << 30;
        int idx = -1;

        for (int i = 0; i < 26; i++) {
            if (dis[i] < val && !visited[i])
                val = dis[i], idx = i;
        }
        if (idx == -1) break;
        visited[idx] = true;
        for (int i = 0; i < 26; i++) {
            if (idx == i) continue;
            int cellValue = *(graph->getAdjMatrix() + ((idx * 26) + i));
            if (!cellValue) {
                cellValue = 1 << 30;
            }
            if (cellValue + dis[idx] < dis[i] || !dis[i]) { // Relax
                dis[i] = cellValue + dis[idx];
            }
        }
    }

    return dis[d - 'A'];
}

/**
 *
 * @param s  your source vertex
 * @param d  your destination vertex
 * @return  the shortest path from source to destination
 *
 * every iteration :
 *          - push a new edge to the queue with 0 weight
 *          - priority queue will sort by least weight
 *          - relax
 *          - for every vertex v test if distance from source s to every other_vertex i in distance array is the shortest or not    s->v->i < s->i
 *          - if not update the array and mark v as visited
 *
 *
 *          the solution complexity is O (V * LOG(E))
 */

int ShortestPath::dijkstraWithPriorityQueue(char s, char d) {


    int dis[26];

    for (int &di : dis)
        di = 1 << 30;

    priority_queue<Edge *> q;
    Vertex *starter = new Vertex('0');
    Vertex *to = graph->getAdjList()[s - 'A'];
    q.push(new Edge(starter, to, 0));
    dis[s-'A'] = 0 ;

    while (!q.empty()) {
        Edge *e = q.top();
        q.pop();


        for (auto edge : *e->getTo()->getEdges()) {
           Edge *tempEdge  = new Edge(edge->getFrom() , edge->getTo() , edge->getWeight()) ;
             if (dis[edge->getTo()->getId() - 'A'] > dis[edge->getFrom()->getId() - 'A'] + edge->getWeight()) {
                dis[edge->getTo()->getId() - 'A'] = dis[edge->getFrom()->getId() - 'A'] + edge->getWeight();
                tempEdge->setWeight(dis[edge->getFrom()->getId() - 'A'] + e->getWeight());
                q.push(tempEdge);
            }
        }
    }


    return dis[d-'A'];
}


void ShortestPath::solve() {
    cout << "Output #8: " << dijkstraWithPriorityQueue('A', 'C') << endl;
    cout << "Output #9: " << dijkstra('B', 'B') << endl;

}


