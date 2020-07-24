//
// Created by Mohamed Sayed on 7/24/20.
//

#include <cstring>
#include "ShortestPath.h"
#include "../../Graph/Graph.h"
#include <iostream>

int ShortestPath::dijkstra(char s, char d) { // V * V

    bool visited[26];
    int dis[26];
    memset(visited, 0, sizeof visited);

    for (int & di : dis)
        di = 1 << 30 ;

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
            if (idx == i ) continue ;
            int cellValue = *(Graph::getInstance()->getAdjMatrix() + ((idx * 26) + i));
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

void ShortestPath::solveFromEightToNine() {
 cout <<"Output #8: " <<  dijkstra('A', 'C') << endl;
 cout <<"Output #9: " << dijkstra('B', 'B') << endl;

}
