#include <iostream>
using namespace std; 

bool b[101];

int main(){

    int N; 
    cin>>N;
    
    for(int i=2; i<N+1; i++){
        b[i] = true;
    }
    
    for(int i=1; i<N+1; i++) {
        if(b[i]){
            cout<<i<<" ";
            for(int j=i*2; j<N+1; j+=i){
                b[j]=false;
            }
        }
    }
    return 0;
}
