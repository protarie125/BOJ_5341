#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	cin >> n;
	while (0 < n) {
		cout << n * (n + 1) / 2 << '\n';

		cin >> n;
	}

	return 0;
}