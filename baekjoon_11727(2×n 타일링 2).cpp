#include <iostream>
using namespace std;

int main()
{
	int dp[1001];
	int n; cin >> n;
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 2 * dp[i - 2];
		dp[i] %= 10007;
	}
	cout << dp[n] << '\n';
}