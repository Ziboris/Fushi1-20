#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define maxn 100
using namespace std;
int level[maxn];//每一层的叶子节点数目
int num[maxn];
int maxlevel = -1;
vector<int> myvec[maxn];
void bfs(){
	queue<int> myque;
	myque.push(1);
	level[1] = 0;
	while (!myque.empty()){
		int index = myque.front();
		myque.pop();
		maxlevel = max(level[index], maxlevel);
		if (myvec[index].size()==0)
			num[level[index]]++;
		for (int i = 0; i < myvec[index].size(); i++) {
			myque.push(myvec[index][i]);
			level[myvec[index][i]] = level[index] + 1;
		}
	}
}

int main(void){
	int n, m, k, node, c;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; ++i){
		scanf("%d %d", &node, &k);
		for (int j = 0; j < k; ++j){
			scanf("%d", &c);
			myvec[node].push_back(c);
		}
	}
	bfs();
	printf("%d", num[0]);
	for (int i = 1; i <= maxlevel; ++i){
		printf(" %d", num[i]);
	}
	return 0;
}