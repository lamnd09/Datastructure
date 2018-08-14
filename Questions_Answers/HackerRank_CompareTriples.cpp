/* HackerRank
Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from  to  for three categories: problem clarity, originality, and difficulty. */





#include <iostream> 
using namespace std; 

int main(){
	int A[3]; 
	int i=0;
	for(i=0; i<3; i++){
		cin>>A[i];
	} 
	
	int B[3];
	for(int i=0;i<3; i++){
		cin>>B[i];
	}

	int awardA=0; awardB=0;
	for(i=0; i<3; i++){
		if(A[i] > B[i]){
			awardA +=1;
		} else if (A[i] <B[i]){
			awardB +=1;
		}
	}

	cout<<awardA<<" "<<awardB; 

	return 0; 
}