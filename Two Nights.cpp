#include <iostream>		
using namespace std;


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long count = 1LL + (i - 1) * (i - 2) / 2;
		count = count * (i - 1) * (i + 4);
		cout << count << endl;
	}
	return 0;
}
