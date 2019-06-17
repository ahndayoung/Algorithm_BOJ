#include <iostream>
using namespace std;

int a[100001] = { 0 };
int d[100001] = { 0 };
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> a[i]; }
	for (int i = 0; i < n; i++) {
		d[i] = a[i];
		if (d[i] < a[i] + d[i - 1]) { d[i] = a[i] + d[i - 1]; }
	}
	int ans = d[0];
	for (int i = 1; i < n; i++) { if (ans < d[i]) ans = d[i]; }
	cout << ans << '\n';
}