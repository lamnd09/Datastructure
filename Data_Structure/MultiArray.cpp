#include <iostream>

using namespace std;

int main() {
	int arr[3][4] = { { 2,2,4,5 },{ 6,5,8,6 },{ 1,2,3,4 } };
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

	cout << "\n";

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			cout << arr[j][i] << " ";
		}

		cout << endl;
	}

	system("pause");
	return 0;
}