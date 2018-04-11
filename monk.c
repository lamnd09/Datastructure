#include <iostream>
using namespace std; 

int main(){
    int i;
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    
    for(i=0; i<n; i++){
        c[i]=a[i]+b[i];
        cout<<c[i]<<" ";
    }
    return 0;
    
}
