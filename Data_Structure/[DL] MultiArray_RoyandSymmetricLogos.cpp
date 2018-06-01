/* Author: Lam D. Nguyen */
/* 
Roy likes Symmetric Logos.

How to check whether a logo is symmetric?
Align the center of logo with the origin of Cartesian plane. Now if the colored pixels of the logo are symmetric about both X-axis and Y-axis, then the logo is symmetric.

You are given a binary matrix of size N x N which represents the pixels of a logo.
1 indicates that the pixel is colored and 0 indicates no color.
*/

#include <iostream>

using namespace std; 

int main() {
	int T, i, j, flagx, flagy, mid; cin >> T;

	while (T--) {
		int N; cin >> N; 

		flagx = flagy = 0; 
		string str[N];
		for (i = 0; i < N; i++) {
			cin >> str[i];
		}

		if (N % 2 == 0) {
			mid = N / 2;
		}
		else {
			mid = N / 2 + 1;
		}

		for (i = 0; i < mid; i++) {
			if (str[i] == str[N - i - 1])
				flagx = 1;
			else {
				flagx = 0;
				break;
			}
		}
		for (i = 0; i < N; i++) {
			for (j = 0; j < mid; j++) {
				if (str[i][j] = str[i][N - j - 1])
					flagy = 1;
				else {
					flagy = 0;
					break;
				}
			}
			if (flagy == 0)
				break;
		}

		if (flagx == 1 && flagy == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

	return 0; 
}
