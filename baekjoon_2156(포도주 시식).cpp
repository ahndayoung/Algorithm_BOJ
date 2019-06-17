﻿#define max(a, b) (((a)>(b))?(a):(b))
#include <iostream>
using namespace std;

long long a[10001] = { 0 };
long long dp[10001][3] = { 0 };

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
		dp[i][1] = dp[i - 1][0] + a[i];
		dp[i][2] = dp[i - 1][1] + a[i];
	}
	cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << '\n';
}