#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <iostream>
#include <string>
#define maxn 10010
using namespace std;

int n;//numbers
int input[maxn];
int head,tail;
int maxsum=0, sum;

int main(void){
	cin >> n;
	for (int i = 0; i < n; ++i){
		scanf("%d", &input[i]);
	}
	for (int i = 0; i < n; ++i){
		sum = 0;
		while (input[i] < 0) { 
			++i; 
		}
		sum = input[i];
		int j = i + 1;
		while (input[j]>0&&j<n){
			sum += input[j];
			++j;
		}
		if (0 == sum&& i<n &&j<n){
			maxsum = 0;
			head = 0;
			tail = n - 1;
		}
		if (sum > maxsum){
			maxsum = sum;
			head = i;
			tail = j - 1;
		}
	}
	cout << maxsum << " " << input[head] << " " << input[tail];

	return 0;
}