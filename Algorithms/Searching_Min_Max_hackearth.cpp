#include <iostream>

using namespace std; 

int main() {
	
	int a[n], b[n];
	int sum = 0;
	int sum1 = 0;
	int max_sum=0; 
	int min_sum=0;

	for (i = 0; i < n; i++) {
		sum += arr[i];
	}
	min_sum = sum;
	max_sum = arr[0];
	for(i = 0; i < n; i++){
		b[i] = sum - arr[i];
		if (max_sum < b[i])
			max_sum = b[i];
		if (min_sum > b[i])
			min_sum = b[i];
	}

	cout << max_sum << min_sum;

	cout << "max_sum " << max_sum;
	cout << "min_sum" << min_sum;
	system("pause");
	return 0;
	
}
