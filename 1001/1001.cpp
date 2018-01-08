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
#define maxn 25
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	string s = to_string(a + b);
	int len = s.length();

	for (int i = 0; i < len; ++i){
		cout << s[i];
		if (s[i] == '-') continue;
		if ((i + 1) % 3 == len % 3 && i != len - 1)cout << ',';
	}

	return 0;
}