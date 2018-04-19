#include <iostream>
#include <cstring>
using namespace std; 

int main() {


	int T; 
	cin>>T;
	string str; 
	

	for (int i = 1; i <= T; i++) {
		cin >> str;
		int count = 0; 

		for (int j = 0; j <= str.size(); ++j) {
			if (str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U' || str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u') {
				count++;
		    }
		
    	}
	cout << count <<"\n";
	}
	
	return 0;
	
}
