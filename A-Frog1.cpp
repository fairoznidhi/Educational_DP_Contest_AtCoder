#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n;
	cin >> n;
	vector<ll> h(n);
	for (ll i = 0; i < n; i++) {
		cin >> h[i];
	}

	vector<ll>dp(n);

	dp[0] = 0;
	dp[1] = abs(h[1] - h[0]);

	for (ll i = 2; i < n; i++) {
		ll dis1 = abs(h[i] - h[i - 1]) + dp[i - 1];
		ll dis2 = abs(h[i] - h[i - 2]) + dp[i - 2];
		dp[i] = min(dis1, dis2);
	}

	cout << dp[n - 1] << endl;
}