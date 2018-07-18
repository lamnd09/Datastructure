#include <iostream>

using namespace std;

#define max 3

int main(){
	int i, j;

	int arr[max];
	
	//cout<<"\n nhap max: "; cin>>max;
	
	for(i=0; i<max;i++){
		cout<<"Nhap a[ "<<i<<"] = ";
		cin>>arr[i];
		
	//	cout<<arr[i]<<endl;
	}
	for(i=0; i<max;i++){
		cout<<arr[i];
	}
//	cout<<arr[max];
	
	return 0;
	
}
