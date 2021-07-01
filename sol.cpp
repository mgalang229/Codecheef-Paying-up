#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, m;
		cin >> n >> m;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool checker = false;
		// generate all possible subsets
		for (int mask = 0; mask < (1 << n); mask++) {
			int sum = 0;
			for (int i = 0; i < n; i++) {
				// calculate the sum of each generated subset
				if (mask & (1 << i)) {
					sum += a[i];
				}
			}
			// check if 'sum' is equal to 'm'
			if (sum == m) {
				// if yes, then set 'checker' to true and break the loop
				checker = true;
				break;
			}
		}
		cout << (checker ? "Yes" : "No") << '\n';
	}
	return 0;
}
