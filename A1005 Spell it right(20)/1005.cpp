#include <cstdio>
#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#define maxn 1010
using namespace std;

long long origin;
int convert[maxn];
int to_buf[maxn];
string arr[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

//int main1(void){
//	int digitSpan;
//	scanf("%lld", &origin);
//	while (origin != 0){
//		convert[digitSpan++] = origin % 10;
//		origin /= 10;
//	}
//	//digitspan是总共的位数
//	for (int i = 0; i < digitSpan; ++i){
//		to_buf[digitSpan - i - 1] = convert[i];
//	}
//
//	int sum = 0;
//	for (int i = 0; i < digitSpan; ++i){
//		sum += to_buf[i];//sum<1000
//	}
//	if (sum >= 100){
//
//	}
//
//
//	return 0;
//}

int main(void){
	string a;
	cin >> a;
	int sum = 0;
	for (int i = 0; i < a.length(); ++i){
		sum = (a[i] - '0');
	}
	string s = to_string(sum);
	cout << arr[s[0] - '0'];
	for (int i = 1; i < s.length(); ++i){
		cout << " " << arr[s[1] - '0'];
	}
	return 0;
}