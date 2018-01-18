//backtrack
#include <cstdio>
#include <iostream>
using namespace std;

int a[100];
int n=8;
int count1 = 0;

void backtrack(int k){
	if (k > n){
		for (int i = 1; i <= 8; ++i){
			cout << a[i];
		}
		cout << endl;
		count1++;
	}
	else{

	}
}

int main(void){
	backtrack(1);
	cout << count1 << endl;

	return 0;
}