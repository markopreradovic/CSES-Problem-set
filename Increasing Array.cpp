#include <iostream>		
using namespace std;
 
int main() {
	int n;
	cin >> n;
	long long a[200000];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	long long br = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			br += (a[i - 1] - a[i]);
			a[i] = a[i] + (a[i - 1] - a[i]);
		}
	}
	cout << br;
	return 0;
}
