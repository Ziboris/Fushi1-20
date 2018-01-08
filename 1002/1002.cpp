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
#define maxn 1010
using namespace std;

int main(void){
	int k1, k2;
	int a1[maxn], b1[maxn],c1[maxn];//exponent
	double a2[maxn], b2[maxn],c2[maxn];//coefficent
	/*input*/
	cin >> k1;
	for (int i = 0; i < k1; ++i){
		/*cin >> a1[i] >> a2[i];ÔËÐÐ³¬Ê±*/
		scanf("%d%f", &a1[i], &a2[i]);
	}
	cin >> k2;
	for (int i = 0; i < k2; ++i){
		/*cin >> b1[i] >> b2[i];*/
		scanf("%d%f", &b1[i], &b2[i]);
	}

	/*operate*/
	int na=0, nb=0, n=0;
	while (na < k1 && nb < k2){
		if (a1[na] == b1[nb]){
			if (c2[n] = a2[na] + b2[nb]){
				c1[n] = a1[na];
				na++;
				nb++;
				n++;
			}
		}
		else if (a1[na] < b1[nb]){
			c1[n] = b1[nb];
			c2[n] = b2[nb];
			nb++;
			n++;
		}
		else{
			c1[n] = a1[na];
			c2[n] = a2[na];
			na++;
			n++;
		}
	}
	while (na < k1){
		c1[n] = a1[na];
		c2[n] = a2[na];
		na++;
		n++;
	}
	while (nb < k2){
		c1[n] = b1[nb];
		c2[n] = b2[nb];
		nb++;
		n++;
	}
	cout << n;
	for (int i = 0; i < n; ++i){
		//cout << ' ' << c1[i] << ' ' << c2[i];
		printf(" %d %f", c1[i], c2[i]);
	}
	return 0;
}