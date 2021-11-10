#include <stdio.h>		
#include <iostream>
using namespace std;
 
int main() {
	int n, a[200000];
	cin >> n;
	for (int i = 0; i < n-1; i++) cin >> a[i];
	int s1 = 0,s2=0;
	for (int i = 1; i <= n; i++) s1 += i;
	for (int i = 0; i < n - 1; i++) s2 += a[i];
	cout << s1 - s2;
 
	return 0;
}
