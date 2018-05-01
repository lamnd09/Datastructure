#include <iostream>
#include <math.h>
using namespace std; 

void bubble_sort(int a[], int n){
    int temp;
    int i,j;
    
    for(i=0;i<n-1;i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int binarySearch(int arr[], int low, int high, int key) {
	int mid;
	
	while (low <= high) {
		mid = low + (high-low) / 2;
		
		if (arr[mid] < key) {
			low = mid + 1;
		}
		else if (arr[mid] > key) {
			high = mid - 1;
		}
		else {
			return mid;
		}
	}
	
	return -1;
}

int main() {

    int N;
    cin>>N;
    int arr[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int q;
	cin >> q;
	int x[q];
	
	for(int i=0; i<q; i++){
	    cin>>x[i];
	    cout<<endl;
	}
	
	bubble_sort(arr, N);
	
	for(int i=0; i<q;i++){
	    cout<<binarySearch(arr, arr[0], arr[N-1], x[i])+1<<endl;
	}
	return 0;

}
