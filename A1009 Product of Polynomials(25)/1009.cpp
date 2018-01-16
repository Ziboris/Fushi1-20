#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#define maxn 20
#define maxm 110
typedef struct polynomialNode{
	int exponent;
	double coefficient;
}node;
node nodeA[maxn], nodeB[maxn];
node ans[maxm];
using namespace std;

int k1, k2;

int main(void){
	cin >> k1;
	for (int i = 1; i <= k1; ++i){
		scanf("%d%lf", &(nodeA[i].exponent), &(nodeA[i].coefficient));
	}
	cin >> k2;
	for (int i = 1; i <= k2; ++i){
		scanf("%d%lf", &(nodeB[i].exponent), &(nodeB[i].coefficient));
	}

	//for (int i = 1; i <= k1; ++i){
	//	printf("%d-%f ", (nodeA[i].exponent), (nodeA[i].coefficient));
	//}

	int maxexponent = nodeA[1].exponent + nodeB[1].exponent;
	int k = 1;
	ans[k].exponent = maxexponent;
	ans[k].coefficient = nodeA[1].coefficient*nodeB[1].coefficient;

	int exp = maxexponent-1;
	double coe ;
	int p1 , p2;
	while (exp >= 0){
		coe = 0;
		for (p1 = 1; p1 <= k1; ++p1){
			for (p2 = 1; p2 <= k2; ++p2){
				if (nodeA[p1].exponent + nodeB[p2].exponent == exp)
					coe += nodeA[p1].coefficient*nodeB[p1].coefficient;
			}
		}
		if (coe != 0){
			++k;
			ans[k].coefficient = coe;
			ans[k].exponent = exp;
		}
		exp--;
	}
	cout << k;
	for (int i = 1; i <= k; ++i){
		printf(" %d %.1f", ans[i].exponent, ans[i].coefficient);
	}

	return 0;
}