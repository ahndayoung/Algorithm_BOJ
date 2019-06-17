#define max(a,b) (((a)>(b))?(a):(b))
#include <iostream>
using namespace std;

long long a[100001][2];
long long dp[100001][3];

int main()
{
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i][0];
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i][1];
		}
		dp[0][0] = dp[0][1] = dp[0][2] = 0;
		for (int i = 1; i <= n; i++) {
			dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
			dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + a[i][0];
			dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + a[i][1];
		}
		long long ans = 0;
		for (int i = 1; i <= n; i++) {
			ans = max(max(ans, dp[i][0]), max(dp[i][1], dp[i][2]));
		}
		cout << ans << '\n';
	}
	return 0;
}