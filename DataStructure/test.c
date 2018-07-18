#include <stdio.h>
#include <math.h>

int primeNumber(int a){
	int i;
	if(a<=2){
		return 0; 
	}
	for(i=2; i<= a; i++){
		if(a%i ==0){
			return 0;
		}else {
			return i;
			printf("%d ", i);
		}
	}
}
int main(){
	int b;
	printf("\n nhap: "); scanf("%d", &b);
	printf("%d ", primeNumber(b));
	return 0;
}
