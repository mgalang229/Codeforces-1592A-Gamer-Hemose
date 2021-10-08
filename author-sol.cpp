#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, h;
		cin >> n >> h;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// it is optimal to the alternately use the two weapons with the highest damage
		sort(a.begin(), a.end());
		int x = a[n - 1];
		int y = a[n - 2];
		if (h % (x + y) == 0) {
			cout << 2 * (h / (x + y));
		} else if (h % (x + y) <= x) {
			cout << 2 * (h / (x + y)) + 1;
		} else {
			cout << 2 * (h / (x + y)) + 2;
		}
		cout << '\n';
	}
	return 0;
}
