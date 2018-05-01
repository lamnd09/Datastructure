#include <iostream>
using namespace std; 

void bubble_sort(int a[], int N){
    int temp;
    int i, j;
    int count=0;
    
    for(i=0; i<N-1; i++){
        for(j=0; j<N-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                count++;
            }
        }
    }
    cout<<count;
}

int main(){
    int N; 
    cin>>N;
    int a[100];
    
    for(int i=0; i<N;i++){
        cin>>a[i];
        
    }
    
    bubble_sort(a, N);
    
    return 0;


}
