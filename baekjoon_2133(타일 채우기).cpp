#include <iostream>
using namespace std;

int dp[31] = { 0 };
int main()
{
	int n; cin >> n;
	dp[0] = 1;
	for (int i = 2; i <= n; i+=2) {
		dp[i] = 3 * dp[i - 2];
		for (int j = i - 4; j >= 0; j -= 2) {
			dp[i] += 2 * dp[j];
		}
	}
	cout << dp[n] << '\n';
}