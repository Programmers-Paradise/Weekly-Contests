#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> arr(N);
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());
	int ans = 1;
	for (int i = 1; i < N; i++) {
		if (arr[i] != arr[i-1]) {
			ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}