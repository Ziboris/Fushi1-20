#include <stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;
double odd[9];
char output[3] = { 'W', 'T', 'L' };

int check(int from, int to){
	return (odd[from] > odd[from + 1]) ? (odd[from] > odd[to] ? from : to) : (odd[from + 1] > odd[to] ? from + 1 : to);
}

int main(void){
	for (int i = 0; i < 9; ++i){
		scanf("%lf", &odd[i]);
	}
	int n1 = check(0, 2);
	int n2 = check(3, 5);
	int n3 = check(6, 8);
	double sum = (odd[n1] * odd[n2] * odd[n3] * 0.65 - 1) * 2;

	cout << output[n1 % 3] << " "
		<< output[n2 % 3] << " "
		<< output[n3 % 3] << " ";
	printf("%.2f", sum);
	return 0;

}