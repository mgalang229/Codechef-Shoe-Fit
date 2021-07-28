#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a[3];
		cin >> a[0] >> a[1] >> a[2];
		// check if 1 and 0 are present in either a, b, or c
		if (count(a, a + 3, 1) > 0 && count(a, a + 3, 0) > 0) {
			cout << 1;
		} else {
			cout << 0;
		}
		cout << '\n';
	}
	return 0;
}
