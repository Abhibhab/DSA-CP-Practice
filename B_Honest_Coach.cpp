#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin >> test;

	for (int tt = 0; tt < test; tt++) {
		int n;
		cin >> n;

		vector<int> a(n);

		for (int &x : a) {
			cin >> x;
		}

		sort(a.begin(), a.end());

		int result = a[n - 1] - a[0];

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				result = min(result, a[j] - a[i]);
			}
		}

		cout << result << endl;
	}

	return 0;
}