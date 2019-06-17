#include <iostream>
using namespace std;
int a[1001], dp[1001];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (dp[i] < dp[i - j] + a[j]) {
				dp[i] = dp[i - j] + a[j];
			}
		}
	}
	cout << dp[n] << '\n';
}