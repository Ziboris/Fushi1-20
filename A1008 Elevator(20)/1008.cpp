#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define maxn 110
using namespace std;
int main(void){

	int n;
	cin >> n;
	int a[maxn];
	int pnow, pb4 = 0;
	int sum = 0;
	a[0] = 0;
	for (pnow = 1; pnow <= n; ++pnow){
		scanf("%d", &a[pnow]);
		if (a[pb4] < a[pnow])
			sum += (a[pnow] - a[pb4]) * 6;
		else if (a[pnow]<a[pb4])
			sum += (a[pb4] - a[pnow]) * 4;
		pb4 = pnow;
	}
	sum += 5 * n;

	cout << sum;
	

	return 0;
}