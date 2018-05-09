/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

Bangalore City, where peace prevails most of the time. Not everyone is a huge fan of peace, though. Certainly not Mr. XYZ, whose identity is not known to us - yet. Mr. XYZ has somehow managed to bring vampires and zombies to Bangalore City to attack and destroy the city.

Fatal Eagle, an ordinary citizen of the city is extremely worried on seeing his city being attacked by these weird creatures. But, as of now, he has no power to stop these creatures from their silent attacks. He wants to analyze these creatures firstly. He figured out some things about these creatures, like:

Zombies have power in terms of an EVEN number.
Vampires have power in terms of an ODD number.
If he sees a zombie or a vampire, he marks them in his list with their power. After generating the entire list of power of these creatures, he decides to arrange this data in the following manner:

All the zombies arranged in sorted manner of their power, followed by the total power of zombies.
All the vampires arranged in sorted manner of their power, followed by the total power of vampires.
You've to help him produce the following list to help him save his city.

Input constraints:
The first line of input will contain an integer — N, denoting the number of creatures. The next line will contain N integers denoting the elements of the list containing the power of zombies and vampires.

Output constraints:
Print the required list in a single line.

Constraints:
1 = N = 103
1 = Ni = 103


*/

// Write your code here
/* Author: @lamnd09*/

/* Requirement:  

*/

#include <iostream>
using namespace std; 

void insertionSort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		int temp = a[i];
		int j = i;

		while (j > 0 && temp < a[j - 1]) {
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;
	}

}

int main() {
	int n; 
	cin >> n;
	int a[n];
	int j=0, k=0;
	int even[n], odd[n];
	int count1 = 0; 
	int count2 = 0;
	int sum1=0, sum2=0;
	
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	insertionSort(a,n);
	
	
	for (int i = 0; i < n; i++) {
		if(a[i]%2 == 0){
		    even[j] = a[i];
		    j++;
		}else{
		    odd[k] = a[i];
		    k++;
		} 
		
	}
	
	for(int i=0; i<j; i++){
	    sum1 +=even[i];
	    cout<<even[i]<<" ";
	}
	cout<<sum1<<" ";
	
	
	for(int i=0;i<k;i++ ){
	    sum2+=odd[i];
	    cout<<odd[i]<<" ";
	}
	cout<<sum2<<" ";

	return 0;
}
