#include <iostream>
using namespace std;

int a[1001] = { 0 };
int dp[1001] = { 0 };

int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	for (int i = n-1; i >= 0; i--) {
		dp[i] = 1;
		for (int j = i; j < n; j++) {
			if (a[i] > a[j] && dp[i] < dp[j] + 1) { dp[i] = dp[j] + 1; }
		}
	}
	int ans = dp[0];
	for (int i = 1; i < n; i++) { if (ans < dp[i]) ans = dp[i]; }
	cout << ans << '\n';
}