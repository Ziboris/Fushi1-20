#include <cstdio>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>
#define maxn 550
#define INF 1000000000
using namespace std;

int n, m, c1, c2;
int g[maxn][maxn];
int dis[maxn];
bool vis[maxn] = { false };
int res[maxn];//rescue team member num
int num = 0;//最小的路径条数
int pre[maxn];//最小下标路径

void dijkstra(int start,int end){
	for (int i = 0; i < n; ++i)
		pre[i] = i;
	fill(dis, dis + maxn, INF);
	dis[start] = 0;
	for (int i = 0; i < n; ++i){
		int u = -1, min = INF;
		for (int j = 0; j < n; ++j){
			if (dis[j] < INF && vis[j] == false){
				min = dis[j];
				u = j;
			}
		}
		if (-1 == u)
			return;
		vis[u] = true;
		for (int v = 0; v < n; ++v){
			if (vis[v] == false && dis[u] + g[u][v] < dis[v]){
				dis[v] = dis[u] + g[u][v];
				pre[v] = u;
			}
		}
	}
}

int main(void){
	int u, v, w;
	scanf("%d%d%d%d", &n, &m, &c1, &c2);
	fill(g[0], g[0] + maxn*maxn, INF);
	for (int i = 0; i < n; ++i){
		scanf("%d", &res[i]);
	}
	for (int i = 0; i < m; ++i){
		scanf("%d%d%d", &u, &v, &w);
		g[u][v] = w;
		g[v][u] = w;
	}

	dijkstra(c1,c2);

	return 0;
}