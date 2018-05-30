/* Author: Lam D. Nguyen*/

#include <iostream>
#include <string>

using namespace std; 

int main() {
	char s[100];
	cin >> s;
	
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			s[i] = s[i] + 32;
		}
		else {
			s[i] = s[i] - 32;
		}
	}
	cout << s;

	

	return 0;
}