#include <iostream>
using namespace std;

int a[1001] = { 0 };
int dp[1001] = { 0 };
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		dp[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && dp[i] < dp[j] + a[i]) { dp[i] = dp[j] + a[i]; }
		}
	}
	int ans = dp[0];
	for (int i = 0; i < n; i++) { if (ans < dp[i]) ans = dp[i]; }
	cout << ans << '\n';
}