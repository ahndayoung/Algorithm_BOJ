#include <iostream>
using namespace std;

int a[1001] = { 0 };
int dp[1001] = { 0 };
int dp2[1001] = { 0 };
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && dp[i] < dp[j] + 1) { dp[i] = dp[j] + 1; }
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		dp2[i] = 1;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i] && dp2[i] < dp2[j] + 1) { dp2[i] = dp2[j] + 1; }
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (ans < dp[i] + dp2[i] - 1) { ans = dp[i] + dp2[i] - 1; }
	}
	cout << ans << '\n';
}