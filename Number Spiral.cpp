#include <iostream>		
using namespace std;

long long fun(long long x, long long y) {
	long long l = max(x, y) - 1;
	if (l & 1) {
		if (x < y) return l * l + x;
		else return l * l + 2 * l - y + 2;
	}
	else {
		if (x < y) return l * l + 2 * l - x + 2;
		else return l * l + y;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long x, y;
		cin >> x >> y;
		cout << fun(x, y) << endl;
	}
	return 0;
}
