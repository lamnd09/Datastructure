#include <iostream>
using namespace std; 

int main() {
	int N=5, M; 

	int arr[5] = { 1,2,3,4,1 };
	int index = -1; 
	cout << "Input: M "; cin >> M;

	for (int i = 0; i < N; i++) {
		cout << arr[i]<<" ";
		if (arr[i] == M)
			//cout << i+1 << " ";
		    index = i + 1; 
			
	}
	cout << "\n " << index;
	system("pause");
	return 0;
	
}
