#include <stdio.h>		
#include <iostream>
#include <string>
using namespace std;
 
int main() {
	string s;
	int max = 1;
	int maxx=1;
	getline(cin, s, '\n');
	for (int i = 1; i <= s.length(); i++) {
		if (s[i] == s[i - 1]) max++;
		else {
			if (max > maxx) maxx = max;
			max = 1;
		}
	}
	cout << maxx;
	return 0;
}
